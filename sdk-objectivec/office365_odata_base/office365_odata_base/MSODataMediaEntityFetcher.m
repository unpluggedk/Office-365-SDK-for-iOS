/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "MSODataMediaEntityFetcher.h"

@implementation MSODataMediaEntityFetcher

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent{
    self.Parent = parent;
    self.UrlComponent = urlComponent;
    return [super initWithUrl:urlComponent parent:parent andEntityClass:nil];
}

-(NSURLSessionDataTask *)getContentWithCallback:(void (^)(NSData * content, NSError * error))callback{
    
    id<MSODataURL> url = [[self getResolver] createODataURL];
    [url appendPathComponent:@"$value"];
    
    return [self oDataExecuteForPath:url withContent:nil andMethod:GET andCallback:^(id<MSODataResponse> r, NSError *e) {
        
        if(e == nil){
            callback([r getData],e);
        }
        else{
            callback(nil,e);
        }
    }];
}

-(NSURLSessionDataTask *)putContent:(NSData *)content withCallback:(void (^)(NSInteger, NSError *))callback{
    id<MSODataURL> url = [[self getResolver] createODataURL];
    [url appendPathComponent:@"$value"];
    
    return [self oDataExecuteForPath:url withContent:content andMethod:PUT andCallback:^(id<MSODataResponse> r, NSError *e) {
        
        if(e == nil){
            callback([r getStatus],e);
        }
        else{
            callback([e code],e);
        }
    }];
}

@end