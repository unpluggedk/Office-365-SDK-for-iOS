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

@class MSDirectoryAppRole;
@class MSDirectoryKeyCredential;
@class NSStream;
@class MSDirectoryOAuth2Permission;
@class MSDirectoryPasswordCredential;
@class MSDirectoryRequiredResourceAccess;
@class MSDirectoryExtensionProperty;

#import <Foundation/Foundation.h>
#import "MSDirectoryProtocols.h"
#import "MSDirectoryDirectoryObject.h"

/**
* The header for type Application.
*/

@interface MSDirectoryApplication : MSDirectoryDirectoryObject

@property (retain, nonatomic, readwrite, getter=appId, setter=setAppId:) NSString *appId;
@property (retain, nonatomic, readwrite, getter=appRoles, setter=setAppRoles:) NSMutableArray<MSDirectoryAppRole> *appRoles;
@property (nonatomic, getter=availableToOtherTenants, setter=setAvailableToOtherTenants:) BOOL availableToOtherTenants;
@property (retain, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (retain, nonatomic, readwrite, getter=errorUrl, setter=setErrorUrl:) NSString *errorUrl;
@property (retain, nonatomic, readwrite, getter=groupMembershipClaims, setter=setGroupMembershipClaims:) NSString *groupMembershipClaims;
@property (retain, nonatomic, readwrite, getter=homepage, setter=setHomepage:) NSString *homepage;
@property (retain, nonatomic, readwrite, getter=identifierUris, setter=setIdentifierUris:) NSMutableArray *identifierUris;
@property (retain, nonatomic, readwrite, getter=keyCredentials, setter=setKeyCredentials:) NSMutableArray<MSDirectoryKeyCredential> *keyCredentials;
@property (retain, nonatomic, readwrite, getter=knownClientApplications, setter=setKnownClientApplications:) NSMutableArray *knownClientApplications;
@property (retain, nonatomic, readwrite, getter=mainLogo, setter=setMainLogo:) NSStream *mainLogo;
@property (retain, nonatomic, readwrite, getter=logoutUrl, setter=setLogoutUrl:) NSString *logoutUrl;
@property (nonatomic, getter=oauth2AllowImplicitFlow, setter=setOauth2AllowImplicitFlow:) BOOL oauth2AllowImplicitFlow;
@property (nonatomic, getter=oauth2AllowUrlPathMatching, setter=setOauth2AllowUrlPathMatching:) BOOL oauth2AllowUrlPathMatching;
@property (retain, nonatomic, readwrite, getter=oauth2Permissions, setter=setOauth2Permissions:) NSMutableArray<MSDirectoryOAuth2Permission> *oauth2Permissions;
@property (nonatomic, getter=oauth2RequirePostResponse, setter=setOauth2RequirePostResponse:) BOOL oauth2RequirePostResponse;
@property (retain, nonatomic, readwrite, getter=passwordCredentials, setter=setPasswordCredentials:) NSMutableArray<MSDirectoryPasswordCredential> *passwordCredentials;
@property (nonatomic, getter=publicClient, setter=setPublicClient:) BOOL publicClient;
@property (retain, nonatomic, readwrite, getter=replyUrls, setter=setReplyUrls:) NSMutableArray *replyUrls;
@property (retain, nonatomic, readwrite, getter=requiredResourceAccess, setter=setRequiredResourceAccess:) NSMutableArray<MSDirectoryRequiredResourceAccess> *requiredResourceAccess;
@property (retain, nonatomic, readwrite, getter=samlMetadataUrl, setter=setSamlMetadataUrl:) NSString *samlMetadataUrl;
@property (retain, nonatomic, readwrite, getter=extensionProperties, setter=setExtensionProperties:) NSMutableArray<MSDirectoryExtensionProperty> *extensionProperties;

@end