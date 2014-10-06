/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/
#import "FolderFetcher.h"

@implementation FolderFetcher

-(FolderOperations*) getOperations{
    return (FolderOperations*)[super getOperations];
}

-(id)initWith:(NSString *)urlComponent :(ODataExecutable *)parent;
-(FolderCollectionFetcher*) getChildFolders;
-(MessageCollectionFetcher*) getMessages;
@end