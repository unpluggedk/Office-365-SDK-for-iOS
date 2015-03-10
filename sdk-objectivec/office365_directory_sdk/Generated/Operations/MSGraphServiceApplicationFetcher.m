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

#import "MSGraphServiceODataEntities.h"

@implementation MSGraphServiceApplicationFetcher

-(MSGraphServiceApplicationOperations*) getOperations{
	return [[MSGraphServiceApplicationOperations alloc] initOperationWithUrl:self.UrlComponent parent:self.Parent];
}

-(id)initWithUrl:(NSString*)urlComponent :(id<MSODataExecutable>)parent{
    self.Parent = parent;
    self.UrlComponent = urlComponent;

    return [super initWithUrl:urlComponent parent:parent andEntityClass : [MSGraphServiceApplication class]];
}

-(NSURLSessionTask*) updateApplication:(id)entity withCallback:(void (^)(MSGraphServiceApplication*, MSODataException * error))callback{
	return [super update:entity : callback];
}

-(NSURLSessionTask*) deleteApplication:(void (^)(int status, MSODataException * error))callback{
	return [super delete:callback];
}

-(MSGraphServiceExtensionPropertyCollectionFetcher*) getextensionProperties{
    return [[MSGraphServiceExtensionPropertyCollectionFetcher alloc] initWithUrl:@"extensionProperties" parent:self andEntityClass:[MSGraphServiceExtensionProperty class]];
}

-(id<MSGraphServiceExtensionPropertyFetcher>) getextensionPropertiesById : (NSString*)_id{
    return [[[MSGraphServiceExtensionPropertyCollectionFetcher alloc] initWithUrl:@"extensionProperties" parent:self andEntityClass:[MSGraphServiceExtensionProperty class]] getById:_id];
}
-(MSGraphServiceDirectoryObjectFetcher*) getcreatedOnBehalfOf{
	 return [[MSGraphServiceDirectoryObjectFetcher alloc] initWithUrl:@"createdOnBehalfOf" parent:self andEntityClass: [MSGraphServiceDirectoryObject class]];
}
-(MSGraphServiceDirectoryObjectCollectionFetcher*) getowners{
    return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self andEntityClass:[MSGraphServiceDirectoryObject class]];
}

-(id<MSGraphServiceDirectoryObjectFetcher>) getownersById : (NSString*)_id{
    return [[[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"owners" parent:self andEntityClass:[MSGraphServiceDirectoryObject class]] getById:_id];
}

@end