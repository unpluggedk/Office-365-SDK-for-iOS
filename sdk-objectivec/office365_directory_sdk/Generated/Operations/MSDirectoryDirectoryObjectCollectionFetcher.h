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

#import <orc_engine_core/orc_engine_core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryDirectoryObjectCollectionFetcher.
*/

@protocol MSDirectoryDirectoryObjectCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSDirectoryDirectoryObject> *directoryObjects, MSOrcError *error))callback;

- (MSDirectoryDirectoryObjectCollectionFetcher *)select:(NSString *)params;
- (MSDirectoryDirectoryObjectCollectionFetcher *)filter:(NSString *)params;
- (MSDirectoryDirectoryObjectCollectionFetcher *)search:(NSString *)params;
- (MSDirectoryDirectoryObjectCollectionFetcher *)top:(int)value;
- (MSDirectoryDirectoryObjectCollectionFetcher *)skip:(int)value;
- (MSDirectoryDirectoryObjectCollectionFetcher *)expand:(NSString *)value;
- (MSDirectoryDirectoryObjectCollectionFetcher *)orderBy:(NSString *)params;
- (MSDirectoryDirectoryObjectCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryDirectoryObjectCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSDirectoryDirectoryObjectFetcher *)getById:(NSString *)Id;
- (void)add:(MSDirectoryDirectoryObject *)entity callback:(void (^)(MSDirectoryDirectoryObject *directoryObject, MSOrcError *error))callback;

@end

@interface MSDirectoryDirectoryObjectCollectionFetcher : MSOrcCollectionFetcher<MSDirectoryDirectoryObjectCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end