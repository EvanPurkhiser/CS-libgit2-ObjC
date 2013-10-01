#import "File.h"

@implementation File

+ (id)init:(id)repository filePath:(NSString *)filePath
{
    File * file = [self init];

    // Setup the file information from the repo

    return file;
}

- (FileStatus)status
{
    // Get the status of the file

    return 0;
}

- (id)addToIndex
{
	// Add the file into the staging area

	return self;
}

-(NSString *)diff
{
    // Generate the text diff of the file

    return @"+ New things";
}

@end
