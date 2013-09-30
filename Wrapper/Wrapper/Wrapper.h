/**
 * Evan M. Purkhiser
 * evanpurkhiser@gmail.com
 *
 * libgit2 - Objective-C bindings
 *
 * This is an implementation of the libgit2 C library in Objective-C. This does
 * not add any functionality, in fact it's actually missing a lot of functionality.
 *
 * This library allows for very basic usage of git within an Objective-C
 * application. There are two objects we will be dealing with when using this
 * library:
 *
 * 1. Repository: This represents a single git repository.
 * 2. Commit: This represents a single commit within a single repository
 *
 * Currently this library will allow you to do the following:
 *
 * - Initialize a empty repository or a repository from a URI
 * - Show the status of files in the repository, agnostic to `git status`
 * - Add changed files to the staging area
 * - Reset the staging area
 * - Commit the files currently in the staging area
 * - Get a listing of commits from the current HEAD
 * - View information about the particular commit
 */

#import <Foundation/Foundation.h>

@interface Repository:NSObject

/**
 * Initialization a empty repository objective
 */
+ (Repository *)init:(NSString *)location;

/**
 * Initialize a repository from a specific git URL
 */
+ (Repository *)clone:(NSString *)location RepositoryUrl:(NSString *)url;

/**
 * Get the status of the files in the git repository. This will return a map
 * where the key represents the status of the file [1] and the value is a array
 * of absolute file pahs.
 */
- (NSDictionary *)filesStatus;

/**
 * Add a file to the staging area of our repository
 *
 * @param filePath The absolute path to the file to add to the repositories
 *                 staging area. May also be a relative path from the root
 *                 of the root of the repository
 */
- (Repository *)addFile:(NSString *)filePath;

@end
