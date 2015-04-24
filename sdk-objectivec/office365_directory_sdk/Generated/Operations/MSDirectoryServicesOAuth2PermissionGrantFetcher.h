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

@class MSDirectoryServicesOAuth2PermissionGrantOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesOAuth2PermissionGrantFetcher.
*/

@protocol MSDirectoryServicesOAuth2PermissionGrantFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesOAuth2PermissionGrant *oAuth2PermissionGrant, MSODataException *exception))callback;
- (id<MSDirectoryServicesOAuth2PermissionGrantFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesOAuth2PermissionGrantFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesOAuth2PermissionGrantFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesOAuth2PermissionGrantFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesOAuth2PermissionGrantOperations *operations;


@end

@interface MSDirectoryServicesOAuth2PermissionGrantFetcher : MSODataEntityFetcher<MSDirectoryServicesOAuth2PermissionGrantFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateOAuth2PermissionGrant:(MSDirectoryServicesOAuth2PermissionGrant *)oAuth2PermissionGrant callback:(void (^)(MSDirectoryServicesOAuth2PermissionGrant *oAuth2PermissionGrant, MSODataException *error))callback;
- (NSURLSessionTask *) deleteOAuth2PermissionGrant:(void (^)(int status, MSODataException *exception))callback;

@end