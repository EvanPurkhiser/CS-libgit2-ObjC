#import "Repository.h"

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

- (RepositoryStatus *)status
{
	return 0;
}

- (Repository *)stageFile:(NSString *)filePath
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
