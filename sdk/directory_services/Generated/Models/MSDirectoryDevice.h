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

@class MSDirectoryAlternativeSecurityId;
@class MSDirectoryDirectoryObject;

#import <Foundation/Foundation.h>
#import "MSDirectoryProtocols.h"
#import "MSDirectoryDirectoryObject.h"

/**
* The header for type Device.
*/

@interface MSDirectoryDevice : MSDirectoryDirectoryObject

@property (nonatomic, getter=accountEnabled, setter=setAccountEnabled:) BOOL accountEnabled;
@property (retain, nonatomic, readwrite, getter=alternativeSecurityIds, setter=setAlternativeSecurityIds:) NSMutableArray<MSDirectoryAlternativeSecurityId> *alternativeSecurityIds;
@property (retain, nonatomic, readwrite, getter=approximateLastLogonTimestamp, setter=setApproximateLastLogonTimestamp:) NSDate *approximateLastLogonTimestamp;
@property (retain, nonatomic, readwrite, getter=deviceId, setter=setDeviceId:) NSString *deviceId;
@property (retain, nonatomic, readwrite, getter=deviceMetadata, setter=setDeviceMetadata:) NSString *deviceMetadata;
@property (nonatomic, getter=deviceObjectVersion, setter=setDeviceObjectVersion:) int deviceObjectVersion;
@property (retain, nonatomic, readwrite, getter=deviceOSType, setter=setDeviceOSType:) NSString *deviceOSType;
@property (retain, nonatomic, readwrite, getter=deviceOSVersion, setter=setDeviceOSVersion:) NSString *deviceOSVersion;
@property (retain, nonatomic, readwrite, getter=devicePhysicalIds, setter=setDevicePhysicalIds:) NSMutableArray *devicePhysicalIds;
@property (retain, nonatomic, readwrite, getter=deviceTrustType, setter=setDeviceTrustType:) NSString *deviceTrustType;
@property (nonatomic, getter=dirSyncEnabled, setter=setDirSyncEnabled:) BOOL dirSyncEnabled;
@property (retain, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (retain, nonatomic, readwrite, getter=lastDirSyncTime, setter=setLastDirSyncTime:) NSDate *lastDirSyncTime;
@property (retain, nonatomic, readwrite, getter=registeredOwners, setter=setRegisteredOwners:) NSMutableArray<MSDirectoryDirectoryObject> *registeredOwners;
@property (retain, nonatomic, readwrite, getter=registeredUsers, setter=setRegisteredUsers:) NSMutableArray<MSDirectoryDirectoryObject> *registeredUsers;

@end