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

@class MSDirectoryServicesDeviceConfigurationOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesDeviceConfigurationFetcher.
*/

@protocol MSDirectoryServicesDeviceConfigurationFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesDeviceConfiguration *deviceConfiguration, MSODataException *exception))callback;
- (id<MSDirectoryServicesDeviceConfigurationFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesDeviceConfigurationFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesDeviceConfigurationFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesDeviceConfigurationFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesDeviceConfigurationOperations *operations;


@end

@interface MSDirectoryServicesDeviceConfigurationFetcher : MSODataEntityFetcher<MSDirectoryServicesDeviceConfigurationFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateDeviceConfiguration:(MSDirectoryServicesDeviceConfiguration *)deviceConfiguration callback:(void (^)(MSDirectoryServicesDeviceConfiguration *deviceConfiguration, MSODataException *error))callback;
- (NSURLSessionTask *) deleteDeviceConfiguration:(void (^)(int status, MSODataException *exception))callback;

@end