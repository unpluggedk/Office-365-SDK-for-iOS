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

@class MSOutlookFileAttachmentOperations;
@class MSOutlookFileAttachmentFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookFileAttachmentFetcher.
*/

@protocol MSOutlookFileAttachmentFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSOutlookFileAttachment *fileAttachment, MSOrcError *error))callback;
- (MSOutlookFileAttachmentFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookFileAttachmentFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOutlookFileAttachmentFetcher *)select:(NSString *)params;
- (MSOutlookFileAttachmentFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookFileAttachmentOperations *operations;

@end

@interface MSOutlookFileAttachmentFetcher : MSOrcEntityFetcher<MSOutlookFileAttachmentFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSOutlookFileAttachment *)fileAttachment callback:(void(^)(MSOutlookFileAttachment *fileAttachment, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;


@end