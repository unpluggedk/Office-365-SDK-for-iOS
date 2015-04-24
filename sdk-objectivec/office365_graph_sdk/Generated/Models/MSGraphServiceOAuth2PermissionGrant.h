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

#import <Foundation/Foundation.h>
#import "MSGraphServiceProtocols.h"


/**
* The header for type OAuth2PermissionGrant.
*/

@interface MSGraphServiceOAuth2PermissionGrant : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (retain, nonatomic, readwrite, getter=clientId, setter=setClientId:) NSString *clientId;
@property (retain, nonatomic, readwrite, getter=consentType, setter=setConsentType:) NSString *consentType;
@property (retain, nonatomic, readwrite, getter=expiryTime, setter=setExpiryTime:) NSDate *expiryTime;
@property (retain, nonatomic, readwrite, getter=objectId, setter=setObjectId:) NSString *objectId;
@property (retain, nonatomic, readwrite, getter=principalId, setter=setPrincipalId:) NSString *principalId;
@property (retain, nonatomic, readwrite, getter=resourceId, setter=setResourceId:) NSString *resourceId;
@property (retain, nonatomic, readwrite, getter=scope, setter=setScope:) NSString *scope;
@property (retain, nonatomic, readwrite, getter=startTime, setter=setStartTime:) NSDate *startTime;

@end