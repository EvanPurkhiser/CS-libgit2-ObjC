#include "Wrapper.h"

@implementation Repository

+ (Repository *)init:(NSString *)location
{
	Repository *repo  = [super init];

	// Do empty repository initialization on repo

	return repo;
}

+ (Repository *)clone:(NSString *)location RepositoryUrl:(NSString *)url
{
	Repository *repo  = [super init];

	// Do repository initialization from URL on repo

	return repo;
}

- (NSDictionary *)filesStatus
{
	return 0;
}

- (Repository *)addFile:(NSString *)filePath
{
	// Add the file to the repository

	return self;
}

- (Repository *)resetIndex
{
	// Reset the staging area of the repository

	return self;
}

@end
