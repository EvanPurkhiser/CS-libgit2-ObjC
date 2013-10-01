#import "Repository.h"

@implementation Repository

+ (id)init:(NSString *)location
{
	Repository *repo  = [super init];

	// Do empty repository initialization on repo

	return repo;
}

+ (id)clone:(NSString *)location RepositoryUrl:(NSString *)url
{
	Repository *repo  = [super init];

	// Do repository initialization from URL on repo

	return repo;
}

- (RepositoryStatus *)status
{
	return 0;
}

- (id)stageFile:(NSString *)filePath
{
	// Add the file to the repository

	return self;
}

- (id)resetIndex
{
	// Reset the staging area of the repository

	return self;
}

@end
