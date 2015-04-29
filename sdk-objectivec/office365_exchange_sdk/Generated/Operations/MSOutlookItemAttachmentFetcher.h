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

@class MSOutlookItemFetcher;
@class MSOutlookItemAttachmentOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookItemAttachmentFetcher.
*/

@protocol MSOutlookItemAttachmentFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookItemAttachment *itemAttachment, MSODataException *exception))callback;
- (id<MSOutlookItemAttachmentFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookItemAttachmentFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookItemAttachmentFetcher>)select:(NSString *)params;
- (id<MSOutlookItemAttachmentFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookItemAttachmentOperations *operations;

- (MSOutlookItemFetcher *)getItem;

@end

@interface MSOutlookItemAttachmentFetcher : MSODataEntityFetcher<MSOutlookItemAttachmentFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateItemAttachment:(MSOutlookItemAttachment *)itemAttachment callback:(void (^)(MSOutlookItemAttachment *itemAttachment, MSODataException *error))callback;
- (NSURLSessionTask *) deleteItemAttachment:(void (^)(int status, MSODataException *exception))callback;

@end