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

@class MSDirectoryDirectoryRoleOperations;
@class MSDirectoryDirectoryRoleFetcher;

#import <orc_engine_core/orc_engine_core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryDirectoryRoleFetcher.
*/

@protocol MSDirectoryDirectoryRoleFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSDirectoryDirectoryRole *directoryRole, MSOrcError *error))callback;
- (MSDirectoryDirectoryRoleFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryDirectoryRoleFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryDirectoryRoleFetcher *)select:(NSString *)params;
- (MSDirectoryDirectoryRoleFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryDirectoryRoleOperations *operations;

@end

@interface MSDirectoryDirectoryRoleFetcher : MSOrcEntityFetcher<MSDirectoryDirectoryRoleFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSDirectoryDirectoryRole *)directoryRole callback:(void(^)(MSDirectoryDirectoryRole *directoryRole, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;


@end