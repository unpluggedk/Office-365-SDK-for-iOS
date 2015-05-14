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

@class NSData;

#import <Foundation/Foundation.h>
#import "MSDirectoryProtocols.h"


/**
* The header for type AlternativeSecurityId.
*/

@interface MSDirectoryAlternativeSecurityId : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (nonatomic, getter=type, setter=setType:) int type;
@property (retain, nonatomic, readwrite, getter=identityProvider, setter=setIdentityProvider:) NSString *identityProvider;
@property (retain, nonatomic, readwrite, getter=key, setter=setKey:) NSData *key;

@end