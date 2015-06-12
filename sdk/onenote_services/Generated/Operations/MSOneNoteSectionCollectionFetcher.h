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

@class MSOneNoteSectionFetcher;
@class MSOneNoteSectionCollectionFetcher;

#import <core/core.h>
#import "MSOneNoteModels.h"

/**
* The header for type MSOneNoteSectionCollectionFetcher.
*/

@protocol MSOneNoteSectionCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSOneNoteSection> *sections, MSOrcError *error))callback;

- (MSOneNoteSectionCollectionFetcher *)select:(NSString *)params;
- (MSOneNoteSectionCollectionFetcher *)filter:(NSString *)params;
- (MSOneNoteSectionCollectionFetcher *)search:(NSString *)params;
- (MSOneNoteSectionCollectionFetcher *)top:(int)value;
- (MSOneNoteSectionCollectionFetcher *)skip:(int)value;
- (MSOneNoteSectionCollectionFetcher *)expand:(NSString *)value;
- (MSOneNoteSectionCollectionFetcher *)orderBy:(NSString *)params;
- (MSOneNoteSectionCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteSectionCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSOneNoteSectionFetcher *)getById:(NSString *)Id;
- (void)add:(MSOneNoteSection *)entity callback:(void (^)(MSOneNoteSection *section, MSOrcError *error))callback;

@end

@interface MSOneNoteSectionCollectionFetcher : MSOrcCollectionFetcher<MSOneNoteSectionCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end