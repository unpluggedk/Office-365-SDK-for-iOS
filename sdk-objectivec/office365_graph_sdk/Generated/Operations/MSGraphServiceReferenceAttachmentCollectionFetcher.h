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

@class MSGraphServiceReferenceAttachmentFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceReferenceAttachmentCollectionFetcher.
*/

@protocol MSGraphServiceReferenceAttachmentCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceReferenceAttachment> *referenceAttachments, MSODataException *exception))callback;

- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceReferenceAttachmentCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceReferenceAttachmentFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addReferenceAttachment:(MSGraphServiceReferenceAttachment *)entity callback:(void (^)(MSGraphServiceReferenceAttachment *referenceAttachment, MSODataException *e))callback;

@end

@interface MSGraphServiceReferenceAttachmentCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceReferenceAttachmentCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end