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

@class MSOutlookEventFetcher;
@class MSOutlookEventCollectionFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookEventCollectionFetcher.
*/

@protocol MSOutlookEventCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSOutlookEvent> *events, MSOrcError *error))callback;

- (MSOutlookEventCollectionFetcher *)select:(NSString *)params;
- (MSOutlookEventCollectionFetcher *)filter:(NSString *)params;
- (MSOutlookEventCollectionFetcher *)search:(NSString *)params;
- (MSOutlookEventCollectionFetcher *)top:(int)value;
- (MSOutlookEventCollectionFetcher *)skip:(int)value;
- (MSOutlookEventCollectionFetcher *)expand:(NSString *)value;
- (MSOutlookEventCollectionFetcher *)orderBy:(NSString *)params;
- (MSOutlookEventCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookEventCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSOutlookEventFetcher *)getById:(NSString *)Id;
- (void)add:(MSOutlookEvent *)entity callback:(void (^)(MSOutlookEvent *event, MSOrcError *error))callback;

@end

@interface MSOutlookEventCollectionFetcher : MSOrcCollectionFetcher<MSOutlookEventCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end