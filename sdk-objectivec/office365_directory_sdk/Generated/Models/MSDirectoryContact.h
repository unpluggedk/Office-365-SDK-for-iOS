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

@class MSDirectoryProvisioningError;
@class NSStream;

#import <Foundation/Foundation.h>
#import "MSDirectoryProtocols.h"
#import "MSDirectoryDirectoryObject.h"

/**
* The header for type Contact.
*/

@interface MSDirectoryContact : MSDirectoryDirectoryObject

@property (retain, nonatomic, readwrite, getter=city, setter=setCity:) NSString *city;
@property (retain, nonatomic, readwrite, getter=country, setter=setCountry:) NSString *country;
@property (retain, nonatomic, readwrite, getter=department, setter=setDepartment:) NSString *department;
@property (nonatomic, getter=dirSyncEnabled, setter=setDirSyncEnabled:) BOOL dirSyncEnabled;
@property (retain, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (retain, nonatomic, readwrite, getter=facsimileTelephoneNumber, setter=setFacsimileTelephoneNumber:) NSString *facsimileTelephoneNumber;
@property (retain, nonatomic, readwrite, getter=givenName, setter=setGivenName:) NSString *givenName;
@property (retain, nonatomic, readwrite, getter=jobTitle, setter=setJobTitle:) NSString *jobTitle;
@property (retain, nonatomic, readwrite, getter=lastDirSyncTime, setter=setLastDirSyncTime:) NSDate *lastDirSyncTime;
@property (retain, nonatomic, readwrite, getter=mail, setter=setMail:) NSString *mail;
@property (retain, nonatomic, readwrite, getter=mailNickname, setter=setMailNickname:) NSString *mailNickname;
@property (retain, nonatomic, readwrite, getter=mobile, setter=setMobile:) NSString *mobile;
@property (retain, nonatomic, readwrite, getter=physicalDeliveryOfficeName, setter=setPhysicalDeliveryOfficeName:) NSString *physicalDeliveryOfficeName;
@property (retain, nonatomic, readwrite, getter=postalCode, setter=setPostalCode:) NSString *postalCode;
@property (retain, nonatomic, readwrite, getter=provisioningErrors, setter=setProvisioningErrors:) NSMutableArray<MSDirectoryProvisioningError> *provisioningErrors;
@property (retain, nonatomic, readwrite, getter=proxyAddresses, setter=setProxyAddresses:) NSMutableArray *proxyAddresses;
@property (retain, nonatomic, readwrite, getter=sipProxyAddress, setter=setSipProxyAddress:) NSString *sipProxyAddress;
@property (retain, nonatomic, readwrite, getter=state, setter=setState:) NSString *state;
@property (retain, nonatomic, readwrite, getter=streetAddress, setter=setStreetAddress:) NSString *streetAddress;
@property (retain, nonatomic, readwrite, getter=surname, setter=setSurname:) NSString *surname;
@property (retain, nonatomic, readwrite, getter=telephoneNumber, setter=setTelephoneNumber:) NSString *telephoneNumber;
@property (retain, nonatomic, readwrite, getter=thumbnailPhoto, setter=setThumbnailPhoto:) NSStream *thumbnailPhoto;

@end