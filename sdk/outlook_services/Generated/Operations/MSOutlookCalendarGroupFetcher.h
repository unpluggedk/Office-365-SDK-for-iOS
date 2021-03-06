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

@class MSOutlookCalendarFetcher;
@class MSOutlookCalendarCollectionFetcher;
@class MSOutlookCalendarGroupOperations;
@class MSOutlookCalendarGroupFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookCalendarGroupFetcher.
*/

@protocol MSOutlookCalendarGroupFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSOutlookCalendarGroup *calendarGroup, MSOrcError *error))callback;
- (MSOutlookCalendarGroupFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookCalendarGroupFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOutlookCalendarGroupFetcher *)select:(NSString *)params;
- (MSOutlookCalendarGroupFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookCalendarGroupOperations *operations;

@end

@interface MSOutlookCalendarGroupFetcher : MSOrcEntityFetcher<MSOutlookCalendarGroupFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSOutlookCalendarGroup *)calendarGroup callback:(void(^)(MSOutlookCalendarGroup *calendarGroup, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

@property (retain, nonatomic, readonly, getter=calendars) MSOutlookCalendarCollectionFetcher *calendars;

- (MSOutlookCalendarFetcher *)getCalendarsById:(NSString*)id;


@end