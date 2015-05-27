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

@class MSDirectoryDirectoryObjectFetcher;
@class MSDirectoryDirectoryObjectCollectionFetcher;
@class MSDirectoryDeviceOperations;
@class MSDirectoryDeviceFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryDeviceFetcher.
*/

@protocol MSDirectoryDeviceFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSDirectoryDevice *device, MSOrcError *error))callback;
- (MSDirectoryDeviceFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryDeviceFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryDeviceFetcher *)select:(NSString *)params;
- (MSDirectoryDeviceFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryDeviceOperations *operations;

@end

@interface MSDirectoryDeviceFetcher : MSOrcEntityFetcher<MSDirectoryDeviceFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSDirectoryDevice *)device callback:(void(^)(MSDirectoryDevice *device, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

@property (retain, nonatomic, readonly, getter=registeredOwners) MSDirectoryDirectoryObjectCollectionFetcher *registeredOwners;

- (MSDirectoryDirectoryObjectFetcher *)getRegisteredOwnersById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=registeredUsers) MSDirectoryDirectoryObjectCollectionFetcher *registeredUsers;

- (MSDirectoryDirectoryObjectFetcher *)getRegisteredUsersById:(NSString*)id;


@end