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

@class MSDirectoryServicesTenantDetailOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesTenantDetailFetcher.
*/

@protocol MSDirectoryServicesTenantDetailFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesTenantDetail *tenantDetail, MSODataException *exception))callback;
- (id<MSDirectoryServicesTenantDetailFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesTenantDetailFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesTenantDetailFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesTenantDetailFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesTenantDetailOperations *operations;


@end

@interface MSDirectoryServicesTenantDetailFetcher : MSODataEntityFetcher<MSDirectoryServicesTenantDetailFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateTenantDetail:(MSDirectoryServicesTenantDetail *)tenantDetail callback:(void (^)(MSDirectoryServicesTenantDetail *tenantDetail, MSODataException *error))callback;
- (NSURLSessionTask *) deleteTenantDetail:(void (^)(int status, MSODataException *exception))callback;

@end