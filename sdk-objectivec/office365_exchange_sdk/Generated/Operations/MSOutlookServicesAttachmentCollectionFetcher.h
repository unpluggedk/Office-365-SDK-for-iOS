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

@class MSOutlookServicesAttachmentFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesAttachmentCollectionFetcher.
*/

@protocol MSOutlookServicesAttachmentCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOutlookServicesAttachment> *attachments, MSODataException *exception))callback;

- (id<MSOutlookServicesAttachmentCollectionFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)filter:(NSString *)params;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)top:(int)value;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)skip:(int)value;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)expand:(NSString *)value;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesAttachmentCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOutlookServicesAttachmentFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addAttachment:(MSOutlookServicesAttachment *)entity callback:(void (^)(MSOutlookServicesAttachment *attachment, MSODataException *e))callback;

@end

@interface MSOutlookServicesAttachmentCollectionFetcher : MSODataCollectionFetcher<MSOutlookServicesAttachmentCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end