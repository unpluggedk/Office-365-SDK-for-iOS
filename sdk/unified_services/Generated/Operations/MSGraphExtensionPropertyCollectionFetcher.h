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

@class MSGraphExtensionPropertyFetcher;
@class MSGraphExtensionPropertyCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphExtensionPropertyCollectionFetcher.
*/

@protocol MSGraphExtensionPropertyCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphExtensionProperty> *extensionPropertys, MSOrcError *error))callback;

- (MSGraphExtensionPropertyCollectionFetcher *)select:(NSString *)params;
- (MSGraphExtensionPropertyCollectionFetcher *)filter:(NSString *)params;
- (MSGraphExtensionPropertyCollectionFetcher *)search:(NSString *)params;
- (MSGraphExtensionPropertyCollectionFetcher *)top:(int)value;
- (MSGraphExtensionPropertyCollectionFetcher *)skip:(int)value;
- (MSGraphExtensionPropertyCollectionFetcher *)expand:(NSString *)value;
- (MSGraphExtensionPropertyCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphExtensionPropertyCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphExtensionPropertyCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphExtensionPropertyFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphExtensionProperty *)entity callback:(void (^)(MSGraphExtensionProperty *extensionProperty, MSOrcError *error))callback;

@end

@interface MSGraphExtensionPropertyCollectionFetcher : MSOrcCollectionFetcher<MSGraphExtensionPropertyCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end