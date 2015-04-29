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

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphExtensionPropertyCollectionFetcher.
*/

@protocol MSGraphExtensionPropertyCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphExtensionProperty> *extensionPropertys, MSODataException *exception))callback;

- (id<MSGraphExtensionPropertyCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphExtensionPropertyCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphExtensionPropertyCollectionFetcher>)top:(int)value;
- (id<MSGraphExtensionPropertyCollectionFetcher>)skip:(int)value;
- (id<MSGraphExtensionPropertyCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphExtensionPropertyCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphExtensionPropertyCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphExtensionPropertyCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphExtensionPropertyFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addExtensionProperty:(MSGraphExtensionProperty *)entity callback:(void (^)(MSGraphExtensionProperty *extensionProperty, MSODataException *e))callback;

@end

@interface MSGraphExtensionPropertyCollectionFetcher : MSODataCollectionFetcher<MSGraphExtensionPropertyCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end