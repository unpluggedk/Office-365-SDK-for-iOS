/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import "MSOutlookServicesODataEntities.h"

/**
* The implementation file for type MSOutlookServicesFolderOperations.
*/

@implementation MSOutlookServicesFolderOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {
 
    return [super initOperationWithUrl:urlComponent parent:parent];
}

- (NSURLSessionTask *)copyWithDestinationId:(NSString *) destinationId callback:(void (^)(MSOutlookServicesFolder *folder, MSODataException *exception))callback {
	
	NSString *destinationIdString = [self.resolver.jsonSerializer serialize:destinationId property:@"DestinationId"];
	NSURLSessionTask *task = [self copyRawWithDestinationId:destinationIdString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			MSOutlookServicesFolder * result = (MSOutlookServicesFolder *)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:[MSOutlookServicesFolder class]];
            callback(result, exception);
        } 
		else {

            callback(nil, exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)copyRawWithDestinationId:(NSString *) destinationId callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :destinationId,@"DestinationId", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"Copy"];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
        
		if (exception == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], exception);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], exception);
        }
    }];
    
    return task;
}
    				
- (NSURLSessionTask *)moveWithDestinationId:(NSString *) destinationId callback:(void (^)(MSOutlookServicesFolder *folder, MSODataException *exception))callback {
	
	NSString *destinationIdString = [self.resolver.jsonSerializer serialize:destinationId property:@"DestinationId"];
	NSURLSessionTask *task = [self moveRawWithDestinationId:destinationIdString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			MSOutlookServicesFolder * result = (MSOutlookServicesFolder *)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:[MSOutlookServicesFolder class]];
            callback(result, exception);
        } 
		else {

            callback(nil, exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)moveRawWithDestinationId:(NSString *) destinationId callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :destinationId,@"DestinationId", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"Move"];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
        
		if (exception == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], exception);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], exception);
        }
    }];
    
    return task;
}
    				
@end