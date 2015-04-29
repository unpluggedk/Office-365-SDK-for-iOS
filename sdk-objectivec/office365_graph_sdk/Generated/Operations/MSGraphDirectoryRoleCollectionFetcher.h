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

@class MSGraphDirectoryRoleFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphDirectoryRoleCollectionFetcher.
*/

@protocol MSGraphDirectoryRoleCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphDirectoryRole> *directoryRoles, MSODataException *exception))callback;

- (id<MSGraphDirectoryRoleCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphDirectoryRoleCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphDirectoryRoleCollectionFetcher>)top:(int)value;
- (id<MSGraphDirectoryRoleCollectionFetcher>)skip:(int)value;
- (id<MSGraphDirectoryRoleCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphDirectoryRoleCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphDirectoryRoleCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphDirectoryRoleCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphDirectoryRoleFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addDirectoryRole:(MSGraphDirectoryRole *)entity callback:(void (^)(MSGraphDirectoryRole *directoryRole, MSODataException *e))callback;

@end

@interface MSGraphDirectoryRoleCollectionFetcher : MSODataCollectionFetcher<MSGraphDirectoryRoleCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end