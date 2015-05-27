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

@class MSOutlookEntityFetcher;
@class MSOutlookEntityCollectionFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookEntityCollectionFetcher.
*/

@protocol MSOutlookEntityCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSOutlookEntity> *entitys, MSOrcError *error))callback;

- (MSOutlookEntityCollectionFetcher *)select:(NSString *)params;
- (MSOutlookEntityCollectionFetcher *)filter:(NSString *)params;
- (MSOutlookEntityCollectionFetcher *)search:(NSString *)params;
- (MSOutlookEntityCollectionFetcher *)top:(int)value;
- (MSOutlookEntityCollectionFetcher *)skip:(int)value;
- (MSOutlookEntityCollectionFetcher *)expand:(NSString *)value;
- (MSOutlookEntityCollectionFetcher *)orderBy:(NSString *)params;
- (MSOutlookEntityCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookEntityCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSOutlookEntityFetcher *)getById:(NSString *)Id;
- (void)add:(MSOutlookEntity *)entity callback:(void (^)(MSOutlookEntity *entity, MSOrcError *error))callback;

@end

@interface MSOutlookEntityCollectionFetcher : MSOrcCollectionFetcher<MSOutlookEntityCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end