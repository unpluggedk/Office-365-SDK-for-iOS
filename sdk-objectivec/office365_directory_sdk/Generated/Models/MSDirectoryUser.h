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

@class MSDirectoryAssignedLicense;
@class MSDirectoryAssignedPlan;
@class MSDirectoryPasswordProfile;
@class MSDirectoryProvisionedPlan;
@class MSDirectoryProvisioningError;
@class NSStream;
@class MSDirectoryAppRoleAssignment;
@class MSDirectoryOAuth2PermissionGrant;
@class MSDirectoryDirectoryObject;

#import <Foundation/Foundation.h>
#import "MSDirectoryProtocols.h"
#import "MSDirectoryDirectoryObject.h"

/**
* The header for type User.
*/

@interface MSDirectoryUser : MSDirectoryDirectoryObject

@property (nonatomic, getter=accountEnabled, setter=setAccountEnabled:) BOOL accountEnabled;
@property (retain, nonatomic, readwrite, getter=assignedLicenses, setter=setAssignedLicenses:) NSMutableArray<MSDirectoryAssignedLicense> *assignedLicenses;
@property (retain, nonatomic, readwrite, getter=assignedPlans, setter=setAssignedPlans:) NSMutableArray<MSDirectoryAssignedPlan> *assignedPlans;
@property (retain, nonatomic, readwrite, getter=city, setter=setCity:) NSString *city;
@property (retain, nonatomic, readwrite, getter=country, setter=setCountry:) NSString *country;
@property (retain, nonatomic, readwrite, getter=department, setter=setDepartment:) NSString *department;
@property (nonatomic, getter=dirSyncEnabled, setter=setDirSyncEnabled:) BOOL dirSyncEnabled;
@property (retain, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (retain, nonatomic, readwrite, getter=facsimileTelephoneNumber, setter=setFacsimileTelephoneNumber:) NSString *facsimileTelephoneNumber;
@property (retain, nonatomic, readwrite, getter=givenName, setter=setGivenName:) NSString *givenName;
@property (retain, nonatomic, readwrite, getter=immutableId, setter=setImmutableId:) NSString *immutableId;
@property (retain, nonatomic, readwrite, getter=jobTitle, setter=setJobTitle:) NSString *jobTitle;
@property (retain, nonatomic, readwrite, getter=lastDirSyncTime, setter=setLastDirSyncTime:) NSDate *lastDirSyncTime;
@property (retain, nonatomic, readwrite, getter=mail, setter=setMail:) NSString *mail;
@property (retain, nonatomic, readwrite, getter=mailNickname, setter=setMailNickname:) NSString *mailNickname;
@property (retain, nonatomic, readwrite, getter=mobile, setter=setMobile:) NSString *mobile;
@property (retain, nonatomic, readwrite, getter=onPremisesSecurityIdentifier, setter=setOnPremisesSecurityIdentifier:) NSString *onPremisesSecurityIdentifier;
@property (retain, nonatomic, readwrite, getter=otherMails, setter=setOtherMails:) NSMutableArray *otherMails;
@property (retain, nonatomic, readwrite, getter=passwordPolicies, setter=setPasswordPolicies:) NSString *passwordPolicies;
@property (retain, nonatomic, readwrite, getter=passwordProfile, setter=setPasswordProfile:) MSDirectoryPasswordProfile *passwordProfile;
@property (retain, nonatomic, readwrite, getter=physicalDeliveryOfficeName, setter=setPhysicalDeliveryOfficeName:) NSString *physicalDeliveryOfficeName;
@property (retain, nonatomic, readwrite, getter=postalCode, setter=setPostalCode:) NSString *postalCode;
@property (retain, nonatomic, readwrite, getter=preferredLanguage, setter=setPreferredLanguage:) NSString *preferredLanguage;
@property (retain, nonatomic, readwrite, getter=provisionedPlans, setter=setProvisionedPlans:) NSMutableArray<MSDirectoryProvisionedPlan> *provisionedPlans;
@property (retain, nonatomic, readwrite, getter=provisioningErrors, setter=setProvisioningErrors:) NSMutableArray<MSDirectoryProvisioningError> *provisioningErrors;
@property (retain, nonatomic, readwrite, getter=proxyAddresses, setter=setProxyAddresses:) NSMutableArray *proxyAddresses;
@property (retain, nonatomic, readwrite, getter=sipProxyAddress, setter=setSipProxyAddress:) NSString *sipProxyAddress;
@property (retain, nonatomic, readwrite, getter=state, setter=setState:) NSString *state;
@property (retain, nonatomic, readwrite, getter=streetAddress, setter=setStreetAddress:) NSString *streetAddress;
@property (retain, nonatomic, readwrite, getter=surname, setter=setSurname:) NSString *surname;
@property (retain, nonatomic, readwrite, getter=telephoneNumber, setter=setTelephoneNumber:) NSString *telephoneNumber;
@property (retain, nonatomic, readwrite, getter=thumbnailPhoto, setter=setThumbnailPhoto:) NSStream *thumbnailPhoto;
@property (retain, nonatomic, readwrite, getter=usageLocation, setter=setUsageLocation:) NSString *usageLocation;
@property (retain, nonatomic, readwrite, getter=userPrincipalName, setter=setUserPrincipalName:) NSString *userPrincipalName;
@property (retain, nonatomic, readwrite, getter=userType, setter=setUserType:) NSString *userType;
@property (retain, nonatomic, readwrite, getter=appRoleAssignments, setter=setAppRoleAssignments:) NSMutableArray<MSDirectoryAppRoleAssignment> *appRoleAssignments;
@property (retain, nonatomic, readwrite, getter=oauth2PermissionGrants, setter=setOauth2PermissionGrants:) NSMutableArray<MSDirectoryOAuth2PermissionGrant> *oauth2PermissionGrants;
@property (retain, nonatomic, readwrite, getter=ownedDevices, setter=setOwnedDevices:) NSMutableArray<MSDirectoryDirectoryObject> *ownedDevices;
@property (retain, nonatomic, readwrite, getter=registeredDevices, setter=setRegisteredDevices:) NSMutableArray<MSDirectoryDirectoryObject> *registeredDevices;

@end