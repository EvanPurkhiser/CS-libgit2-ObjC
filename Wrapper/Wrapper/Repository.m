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

- (NSString *)currentBranchName
{
    // Get the name of the currently checked out branch

    return @"master";
}

- (NSDictionary *)branches
{
    // Get the list of branches and their Commit objects and
    // push them into the NSDictionary, where the key is the
    // branch name, and value is the Commit object

    return [NSDictionary init];
}

- (id)checkoutCommit:(Commit *)commit
{
    // Checkout the current Commit object

    return self;
}

- (NSArray *)history
{
    // Get the repository history and setup the Commit objects
    // and push them into a NSArray object

    return [NSArray init];
}

- (Commit *)head
{
    // Setup the commit from the current head

    return [Commit init];
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

- (Commit *)commit:(NSString *)message
{
    // Commit staged changes to repository and return latest commit

    return [Commit init];
}

@end
