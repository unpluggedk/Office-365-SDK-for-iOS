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

@class MSDirectoryTenantDetailOperations;
@class MSDirectoryTenantDetailFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryTenantDetailFetcher.
*/

@protocol MSDirectoryTenantDetailFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSDirectoryTenantDetail *tenantDetail, MSOrcError *error))callback;
- (MSDirectoryTenantDetailFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryTenantDetailFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryTenantDetailFetcher *)select:(NSString *)params;
- (MSDirectoryTenantDetailFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryTenantDetailOperations *operations;

@end

@interface MSDirectoryTenantDetailFetcher : MSOrcEntityFetcher<MSDirectoryTenantDetailFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSDirectoryTenantDetail *)tenantDetail callback:(void(^)(MSDirectoryTenantDetail *tenantDetail, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;


@end