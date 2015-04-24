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

@class MSOneDriveServicesDriveFetcher;
@class MSOneDriveServicesItemFetcher;
@class MSOneDriveServicesItemCollectionFetcher;
@class MSOneDriveServicesCurrentUserRequestContextOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOneDriveServicesModels.h"

/**
* The header for type MSOneDriveServicesCurrentUserRequestContextFetcher.
*/

@protocol MSOneDriveServicesCurrentUserRequestContextFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOneDriveServicesCurrentUserRequestContext *currentUserRequestContext, MSODataException *exception))callback;
- (id<MSOneDriveServicesCurrentUserRequestContextFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOneDriveServicesCurrentUserRequestContextFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOneDriveServicesCurrentUserRequestContextFetcher>)select:(NSString *)params;
- (id<MSOneDriveServicesCurrentUserRequestContextFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOneDriveServicesCurrentUserRequestContextOperations *operations;

- (MSOneDriveServicesDriveFetcher *)getdrive;
- (MSOneDriveServicesItemCollectionFetcher *)getfiles;
- (MSOneDriveServicesItemFetcher *) getfilesById:(NSString*)_id;

@end

@interface MSOneDriveServicesCurrentUserRequestContextFetcher : MSODataEntityFetcher<MSOneDriveServicesCurrentUserRequestContextFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateCurrentUserRequestContext:(MSOneDriveServicesCurrentUserRequestContext *)currentUserRequestContext callback:(void (^)(MSOneDriveServicesCurrentUserRequestContext *currentUserRequestContext, MSODataException *error))callback;
- (NSURLSessionTask *) deleteCurrentUserRequestContext:(void (^)(int status, MSODataException *exception))callback;

@end