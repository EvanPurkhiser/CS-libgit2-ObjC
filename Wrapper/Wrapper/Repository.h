#import <Foundation/Foundation.h>

@interface Repository : NSObject

/**
 * Initialization a empty repository objective
 */
+ (Repository *)init:(NSString *)location;

/**
 * Initialize a repository from a specific git URL
 */
+ (Repository *)clone:(NSString *)location RepositoryUrl:(NSString *)url;

/**
 * Get a status object for this repository
 */
- (NSDictionary *)fileStatus;

/**
 * Add a file to the staging area of our repository
 *
 * @param filePath The absolute path to the file to add to the repositories
 *                 staging area. May also be a relative path from the root
 *                 of the root of the repository
 */
- (Repository *)stageFile:(NSString *)filePath;

/**
 * Reset the staging area off the current repository
 */
- (Repository *)resetIndex;

@end
