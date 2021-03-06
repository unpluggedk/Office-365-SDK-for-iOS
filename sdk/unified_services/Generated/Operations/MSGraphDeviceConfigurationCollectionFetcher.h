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

@class MSGraphDeviceConfigurationFetcher;
@class MSGraphDeviceConfigurationCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphDeviceConfigurationCollectionFetcher.
*/

@protocol MSGraphDeviceConfigurationCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphDeviceConfiguration> *deviceConfigurations, MSOrcError *error))callback;

- (MSGraphDeviceConfigurationCollectionFetcher *)select:(NSString *)params;
- (MSGraphDeviceConfigurationCollectionFetcher *)filter:(NSString *)params;
- (MSGraphDeviceConfigurationCollectionFetcher *)search:(NSString *)params;
- (MSGraphDeviceConfigurationCollectionFetcher *)top:(int)value;
- (MSGraphDeviceConfigurationCollectionFetcher *)skip:(int)value;
- (MSGraphDeviceConfigurationCollectionFetcher *)expand:(NSString *)value;
- (MSGraphDeviceConfigurationCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphDeviceConfigurationCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphDeviceConfigurationCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphDeviceConfigurationFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphDeviceConfiguration *)entity callback:(void (^)(MSGraphDeviceConfiguration *deviceConfiguration, MSOrcError *error))callback;

@end

@interface MSGraphDeviceConfigurationCollectionFetcher : MSOrcCollectionFetcher<MSGraphDeviceConfigurationCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end