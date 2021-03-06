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

#import "MSOutlookFetchers.h"

@implementation MSOutlookUserFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOutlookUser class]]) {

		_operations = [[MSOutlookUserOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (void)update:(id)entity callback:(void (^)(MSOutlookUser *user, MSOrcError *e))callback {

	return [super update:entity callback:callback];
}

- (void)delete:(void (^)(int status, MSOrcError *e))callback {

	return [super deleteWithCallback:callback];
}

- (MSOutlookFolderCollectionFetcher *)folders {

    return [[MSOutlookFolderCollectionFetcher alloc] initWithUrl:@"Folders" parent:self asClass:[MSOutlookFolder class]];
}

- (MSOutlookFolderFetcher *)getFoldersById:(NSString *)id {

    return [[[MSOutlookFolderCollectionFetcher alloc] initWithUrl:@"Folders" parent:self asClass:[MSOutlookFolder class]] getById:id];
}

- (MSOutlookMessageCollectionFetcher *)messages {

    return [[MSOutlookMessageCollectionFetcher alloc] initWithUrl:@"Messages" parent:self asClass:[MSOutlookMessage class]];
}

- (MSOutlookMessageFetcher *)getMessagesById:(NSString *)id {

    return [[[MSOutlookMessageCollectionFetcher alloc] initWithUrl:@"Messages" parent:self asClass:[MSOutlookMessage class]] getById:id];
}

- (MSOutlookFolderFetcher *)rootFolder {

	 return [[MSOutlookFolderFetcher alloc] initWithUrl:@"RootFolder" parent:self asClass:[MSOutlookFolder class]];
}

- (MSOutlookCalendarCollectionFetcher *)calendars {

    return [[MSOutlookCalendarCollectionFetcher alloc] initWithUrl:@"Calendars" parent:self asClass:[MSOutlookCalendar class]];
}

- (MSOutlookCalendarFetcher *)getCalendarsById:(NSString *)id {

    return [[[MSOutlookCalendarCollectionFetcher alloc] initWithUrl:@"Calendars" parent:self asClass:[MSOutlookCalendar class]] getById:id];
}

- (MSOutlookCalendarFetcher *)calendar {

	 return [[MSOutlookCalendarFetcher alloc] initWithUrl:@"Calendar" parent:self asClass:[MSOutlookCalendar class]];
}

- (MSOutlookCalendarGroupCollectionFetcher *)calendarGroups {

    return [[MSOutlookCalendarGroupCollectionFetcher alloc] initWithUrl:@"CalendarGroups" parent:self asClass:[MSOutlookCalendarGroup class]];
}

- (MSOutlookCalendarGroupFetcher *)getCalendarGroupsById:(NSString *)id {

    return [[[MSOutlookCalendarGroupCollectionFetcher alloc] initWithUrl:@"CalendarGroups" parent:self asClass:[MSOutlookCalendarGroup class]] getById:id];
}

- (MSOutlookEventCollectionFetcher *)events {

    return [[MSOutlookEventCollectionFetcher alloc] initWithUrl:@"Events" parent:self asClass:[MSOutlookEvent class]];
}

- (MSOutlookEventFetcher *)getEventsById:(NSString *)id {

    return [[[MSOutlookEventCollectionFetcher alloc] initWithUrl:@"Events" parent:self asClass:[MSOutlookEvent class]] getById:id];
}

- (MSOutlookEventCollectionFetcher *)calendarView {

    return [[MSOutlookEventCollectionFetcher alloc] initWithUrl:@"CalendarView" parent:self asClass:[MSOutlookEvent class]];
}

- (MSOutlookEventFetcher *)getCalendarViewById:(NSString *)id {

    return [[[MSOutlookEventCollectionFetcher alloc] initWithUrl:@"CalendarView" parent:self asClass:[MSOutlookEvent class]] getById:id];
}

- (MSOutlookContactCollectionFetcher *)contacts {

    return [[MSOutlookContactCollectionFetcher alloc] initWithUrl:@"Contacts" parent:self asClass:[MSOutlookContact class]];
}

- (MSOutlookContactFetcher *)getContactsById:(NSString *)id {

    return [[[MSOutlookContactCollectionFetcher alloc] initWithUrl:@"Contacts" parent:self asClass:[MSOutlookContact class]] getById:id];
}

- (MSOutlookContactFolderCollectionFetcher *)contactFolders {

    return [[MSOutlookContactFolderCollectionFetcher alloc] initWithUrl:@"ContactFolders" parent:self asClass:[MSOutlookContactFolder class]];
}

- (MSOutlookContactFolderFetcher *)getContactFoldersById:(NSString *)id {

    return [[[MSOutlookContactFolderCollectionFetcher alloc] initWithUrl:@"ContactFolders" parent:self asClass:[MSOutlookContactFolder class]] getById:id];
}

@end