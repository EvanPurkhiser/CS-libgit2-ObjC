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
 * - See a list of branches and checkout branches
 */

#import <Foundation/Foundation.h>
#import "RepositoryStatus.h"
#import "Commit.h"

@class RepositoryStatus;

@interface Repository : NSObject

/**
 * Initialization a empty repository objective
 */
+ (id)init:(NSString *)location;

/**
 * Initialize a repository from a specific git URL
 *
 * @param location      The absolute path to store clone the repository into
 * @param repositoryUrl The URL of the remote repository to clone
 */
+ (id)clone:(NSString *)location RepositoryUrl:(NSString *)url;

/**
 * Get the name of the currently checked out branch
 */
- (NSString *)currentBranchName;

/**
 * Get the listing of branche refs that exist on this repository. this will
 * return a NSDictionary where the key is the name of the branch and the
 * value is a Commit object representing the tip of that branch
 */
- (NSDictionary *)branches;

/**
 * Checkout the particular commit
 *
 * @param commit The commit object to checkout
 */
- (id)checkoutCommit:(Commit *)commit;

/**
 * Gets the repository history from the current HEAD until the first commit
 * with no parent
 */
- (NSArray *)history;

/**
 * Get the commit object for the currently checked out commit
 */
- (Commit *)head;

/**
 * Add a file to the staging area of our repository
 *
 * @param filePath The absolute path to the file to add to the repositories
 *                 staging area. May also be a relative path from the root
 *                 of the root of the repository
 */
- (id)stageFile:(NSString *)filePath;

/**
 * Reset the staging area off the current repository
 */
- (id)resetIndex;

/**
 * Commit the currently staged files in the repository with the given message.
 * This will return the newly created Commit object
 *
 * @param message The commit message to commit with
 */
- (Commit *) commit:(NSString *)message;

@end
