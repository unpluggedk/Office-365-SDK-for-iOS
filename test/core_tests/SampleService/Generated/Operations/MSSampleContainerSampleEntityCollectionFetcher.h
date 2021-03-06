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

@class MSSampleContainerSampleEntityFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSSampleContainerModels.h"

/**
* The header for type MSSampleContainerSampleEntityCollectionFetcher.
*/

@protocol MSSampleContainerSampleEntityCollectionFetcher<MSODataCollectionFetcher>

@optional
- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSSampleContainerSampleEntity> *sampleEntitys, MSODataException *exception))callback;

- (id<MSSampleContainerSampleEntityCollectionFetcher>)select:(NSString *)params;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)filter:(NSString *)params;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)top:(int)value;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)skip:(int)value;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)expand:(NSString *)value;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSSampleContainerSampleEntityCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSSampleContainerSampleEntityFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addSampleEntity:(MSSampleContainerSampleEntity *)entity withCallback:(void (^)(MSSampleContainerSampleEntity *sampleEntity, MSODataException *e))callback;

@end

@interface MSSampleContainerSampleEntityCollectionFetcher : MSODataCollectionFetcher<MSSampleContainerSampleEntityCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end