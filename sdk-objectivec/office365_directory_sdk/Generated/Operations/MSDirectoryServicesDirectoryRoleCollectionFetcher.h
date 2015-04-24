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

@class MSDirectoryServicesDirectoryRoleFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesDirectoryRoleCollectionFetcher.
*/

@protocol MSDirectoryServicesDirectoryRoleCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryServicesDirectoryRole> *directoryRoles, MSODataException *exception))callback;

- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)top:(int)value;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesDirectoryRoleCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryServicesDirectoryRoleFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addDirectoryRole:(MSDirectoryServicesDirectoryRole *)entity callback:(void (^)(MSDirectoryServicesDirectoryRole *directoryRole, MSODataException *e))callback;

@end

@interface MSDirectoryServicesDirectoryRoleCollectionFetcher : MSODataCollectionFetcher<MSDirectoryServicesDirectoryRoleCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end