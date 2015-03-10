/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

@class MSGraphServiceEvent;
@class MSGraphServiceEvent;


#import "MSGraphServiceProtocols.h"

#import <Foundation/Foundation.h>


/**
* The header for type Calendar.
*/

@interface MSGraphServiceCalendar : NSObject

@property NSString *$$__ODataType;
@property NSString *Id;
@property NSString *Name;
@property NSString *ChangeKey;
@property NSMutableArray<MSGraphServiceEvent> *CalendarView;
@property NSMutableArray<MSGraphServiceEvent> *Events;

@end