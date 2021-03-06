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

@class MSDirectoryApplicationFetcher;
@class MSDirectoryApplicationCollectionFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryApplicationCollectionFetcher.
*/

@protocol MSDirectoryApplicationCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSDirectoryApplication> *applications, MSOrcError *error))callback;

- (MSDirectoryApplicationCollectionFetcher *)select:(NSString *)params;
- (MSDirectoryApplicationCollectionFetcher *)filter:(NSString *)params;
- (MSDirectoryApplicationCollectionFetcher *)search:(NSString *)params;
- (MSDirectoryApplicationCollectionFetcher *)top:(int)value;
- (MSDirectoryApplicationCollectionFetcher *)skip:(int)value;
- (MSDirectoryApplicationCollectionFetcher *)expand:(NSString *)value;
- (MSDirectoryApplicationCollectionFetcher *)orderBy:(NSString *)params;
- (MSDirectoryApplicationCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryApplicationCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSDirectoryApplicationFetcher *)getById:(NSString *)Id;
- (void)add:(MSDirectoryApplication *)entity callback:(void (^)(MSDirectoryApplication *application, MSOrcError *error))callback;

@end

@interface MSDirectoryApplicationCollectionFetcher : MSOrcCollectionFetcher<MSDirectoryApplicationCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end