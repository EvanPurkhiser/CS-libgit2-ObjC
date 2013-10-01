#import <Foundation/Foundation.h>
#import "FileStatus.h"
#import "Repository.h"

@class Repository;

@interface RepositoryStatus : NSObject

/**
 * Construct the status object from a repository
 *
 * @param repository The repository to get the status of
 */
- (id)init:(Repository *)repository;

/**
 * Get the number of files currently in the status
 */
- (int) count;

/**
 * Get the branch that the repository currently has checked out
 */
- (NSString *)branch;

/**
 * Get the status of a particular file in the repository
 *
 * @param filePath The absolute (or repository relative) path to a
 *                 file that you would like to know the status of
 */
- (FileStatus *)ofFile:(NSString *)filePath;

/**
 * Get a list of all current file statuses
 */
- (NSArray *)files;

@end
