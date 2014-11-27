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

#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointItemOperations.h"
#import "MSSharePointItem.h"


#import "MSSharePointFileFetcher.h"
#import "MSSharePointFolderFetcher.h"
/**
* The header for type MSSharePointItemFetcher.
*/

@protocol MSSharePointItemFetcher

@optional
-(NSURLSessionDataTask *)read:(void (^)(MSSharePointItem* item, NSError *error))callback;
-(NSURLSessionDataTask*) updateItem:(id)entity withCallback:(void (^)(MSSharePointItem*, NSError * error))callback;
-(NSURLSessionDataTask*) deleteItem:(void (^)(int status, NSError * error))callback;

@end

@interface MSSharePointItemFetcher : MSODataEntityFetcher<MSSharePointItemFetcher>

-(MSSharePointItemOperations*) getOperations;

	
	
-(MSSharePointFileFetcher*) asFile;	
	
	
-(MSSharePointFolderFetcher*) asFolder;	
	
@end