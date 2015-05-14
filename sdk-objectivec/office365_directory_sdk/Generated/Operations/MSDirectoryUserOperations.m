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

#import "MSDirectoryOrcEntities.h"

/**
* The implementation file for type MSDirectoryUserOperations.
*/

@implementation MSDirectoryUserOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent {
 
    return [super initOperationWithUrl:urlComponent parent:parent];
}

- (void)assignLicenseWithAddLicenses:(MSDirectoryAssignedLicense *)addLicenses removeLicenses:(NSString *)removeLicenses callback:(void (^)(MSDirectoryUser *user, MSOrcError *error))callback {
	
	NSString *addLicensesString = [self.resolver.jsonSerializer serialize:addLicenses property:@"addLicenses"];
	NSString *removeLicensesString = [self.resolver.jsonSerializer serialize:removeLicenses property:@"removeLicenses"];
	return [self assignLicenseRawWithAddLicenses:addLicensesString removeLicenses:removeLicensesString callback:^(NSString *returnValue, MSOrcError *e) {
       
	   if (e == nil) {

			MSDirectoryUser * result = (MSDirectoryUser *)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:[MSDirectoryUser class]];
            callback(result, e);
        } 
		else {

            callback(nil, e);
        }
    }];
}

- (void)assignLicenseRawWithAddLicenses:(NSString *) addLicenses removeLicenses:(NSString *) removeLicenses callback:(void(^)(NSString *returnValue, MSOrcError *error))callback {

	id<MSOrcRequest> request = [super.resolver createOrcRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :addLicenses,@"addLicenses", nil],
                          [[NSDictionary alloc] initWithObjectsAndKeys :removeLicenses,@"removeLicenses", nil], nil];

	NSData* payload = [[MSOrcBaseContainer generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	
	[request setVerb:HTTP_VERB_POST];
	 	[request.url appendPathComponent:@"Microsoft.DirectoryServices.assignLicense"];
     
	return [super orcExecuteRequest:request callback:^(id<MSOrcResponse> response, MSOrcError *e) {
        
		if (e == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], e);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], e);
        }
    }];
}
    				
@end