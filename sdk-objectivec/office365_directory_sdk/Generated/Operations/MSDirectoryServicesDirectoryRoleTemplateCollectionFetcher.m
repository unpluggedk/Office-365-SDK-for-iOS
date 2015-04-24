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

#import "MSDirectoryServicesODataEntities.h"

/**
* The implementation file for type MSDirectoryServicesDirectoryRoleTemplateCollectionFetcher.
*/

@implementation MSDirectoryServicesDirectoryRoleTemplateCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    return [super initWithUrl:urlComponent parent:parent asClass:[MSDirectoryServicesDirectoryRoleTemplate class]];
}

- (NSURLSessionTask *)addDirectoryRoleTemplate:(MSDirectoryServicesDirectoryRoleTemplate*)entity callback:(void (^)(MSDirectoryServicesDirectoryRoleTemplate *directoryRoleTemplate, MSODataException *exception))callback {
	
	return [super addEntity:entity callback:^(id entityAdded, MSODataException *e) {

        callback(entityAdded,e);
    }];
}

- (MSDirectoryServicesDirectoryRoleTemplateFetcher *)getById:(NSString *)Id {

    return [[MSDirectoryServicesDirectoryRoleTemplateFetcher alloc] initWithUrl:[[NSString alloc] initWithFormat:@"('%@')" ,Id] parent:self];
}

@end