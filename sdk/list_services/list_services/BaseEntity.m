/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "BaseEntity.h"

@interface BaseEntity ()
@property NSDictionary *jsonData;
@end

@implementation BaseEntity

- (id) initWithJson:(NSData *)jsonData{
    NSDictionary *jsonResult = [NSJSONSerialization JSONObjectWithData:jsonData
                                                               options: NSJSONReadingMutableContainers
                                                                 error:nil];
    
    NSDictionary *jsonItem =[jsonResult valueForKey : @"d"];
    
    if(jsonItem == nil){
        return nil;
    }
    
    return [self initWithDictionary:jsonItem];
}

- (id) initWithDictionary:(NSDictionary *)dictionary{

    [self createFromJson:dictionary];
    return self;
}


-(void) createMetadata : (NSDictionary *) data{
    self.Metadata = [[Metadata alloc] initWith:data];
}

- (BaseEntity *)createFromJson:(NSDictionary *)data{
    NSDictionary *metadata = [data valueForKey : @"__metadata"];
    
    [self createMetadata : metadata];

    self.Id =[data valueForKey: @"Id"];
    self.jsonData = data;

    return self;
}

-(NSObject*) getData:(NSString *)name{
    return [self.jsonData valueForKey:name];
}

-(NSDictionary*) getRawResults{
    return self.jsonData;
}

@end