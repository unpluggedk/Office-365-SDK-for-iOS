/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "MSODataExecutable.h"
#import "MSODataEntityFetcher.h"
#import "MSODataDependencyResolver.h"

@interface MSODataCollectionFetcher : MSODataExecutable

-(NSURLSessionDataTask *)read:(void (^)(id entity, NSError *error))callback;

-(id)initWithUrl:(NSString *)urlComponent parent :(id<MSODataReadable>)parent andEntityClass: (Class)clazz;
-(MSODataCollectionFetcher*)select : (NSString*) params;
-(MSODataCollectionFetcher*)filter : (NSString*) params;
-(MSODataCollectionFetcher*)top : (int) value;
-(MSODataCollectionFetcher*)skip : (int) value;
-(MSODataCollectionFetcher*)expand : (NSString*) value;
-(MSODataCollectionFetcher*)orderBy : (NSString*) params;
-(id<MSODataDependencyResolver>)getResolver;
-(NSURLSessionDataTask*)add : (id) entity :(void (^)(id result, NSError* error))callback;
-(MSODataEntityFetcher*)getById : (NSString*) Id;

@end