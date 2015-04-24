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

@class MSDirectoryServicesDirectoryRoleOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesDirectoryRoleFetcher.
*/

@protocol MSDirectoryServicesDirectoryRoleFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesDirectoryRole *directoryRole, MSODataException *exception))callback;
- (id<MSDirectoryServicesDirectoryRoleFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesDirectoryRoleFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesDirectoryRoleFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesDirectoryRoleFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesDirectoryRoleOperations *operations;


@end

@interface MSDirectoryServicesDirectoryRoleFetcher : MSODataEntityFetcher<MSDirectoryServicesDirectoryRoleFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateDirectoryRole:(MSDirectoryServicesDirectoryRole *)directoryRole callback:(void (^)(MSDirectoryServicesDirectoryRole *directoryRole, MSODataException *error))callback;
- (NSURLSessionTask *) deleteDirectoryRole:(void (^)(int status, MSODataException *exception))callback;

@end