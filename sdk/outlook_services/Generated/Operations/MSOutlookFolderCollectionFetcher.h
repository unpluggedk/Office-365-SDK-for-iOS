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

@class MSOutlookFolderFetcher;
@class MSOutlookFolderCollectionFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookFolderCollectionFetcher.
*/

@protocol MSOutlookFolderCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSOutlookFolder> *folders, MSOrcError *error))callback;

- (MSOutlookFolderCollectionFetcher *)select:(NSString *)params;
- (MSOutlookFolderCollectionFetcher *)filter:(NSString *)params;
- (MSOutlookFolderCollectionFetcher *)search:(NSString *)params;
- (MSOutlookFolderCollectionFetcher *)top:(int)value;
- (MSOutlookFolderCollectionFetcher *)skip:(int)value;
- (MSOutlookFolderCollectionFetcher *)expand:(NSString *)value;
- (MSOutlookFolderCollectionFetcher *)orderBy:(NSString *)params;
- (MSOutlookFolderCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookFolderCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSOutlookFolderFetcher *)getById:(NSString *)Id;
- (void)add:(MSOutlookFolder *)entity callback:(void (^)(MSOutlookFolder *folder, MSOrcError *error))callback;

@end

@interface MSOutlookFolderCollectionFetcher : MSOrcCollectionFetcher<MSOutlookFolderCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end