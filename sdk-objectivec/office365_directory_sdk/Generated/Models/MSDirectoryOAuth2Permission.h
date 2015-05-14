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
#import "MSDirectoryProtocols.h"


/**
* The header for type OAuth2Permission.
*/

@interface MSDirectoryOAuth2Permission : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (retain, nonatomic, readwrite, getter=adminConsentDescription, setter=setAdminConsentDescription:) NSString *adminConsentDescription;
@property (retain, nonatomic, readwrite, getter=adminConsentDisplayName, setter=setAdminConsentDisplayName:) NSString *adminConsentDisplayName;
@property (retain, nonatomic, readwrite, getter=id, setter=setId:) NSString *id;
@property (nonatomic, getter=isEnabled, setter=setIsEnabled:) BOOL isEnabled;
@property (retain, nonatomic, readwrite, getter=type, setter=setType:) NSString *type;
@property (retain, nonatomic, readwrite, getter=userConsentDescription, setter=setUserConsentDescription:) NSString *userConsentDescription;
@property (retain, nonatomic, readwrite, getter=userConsentDisplayName, setter=setUserConsentDisplayName:) NSString *userConsentDisplayName;
@property (retain, nonatomic, readwrite, getter=value, setter=setValue:) NSString *value;

@end