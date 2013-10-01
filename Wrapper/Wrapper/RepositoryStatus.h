#import <Foundation/Foundation.h>
#import "FileStatus.h"
#import "Repository.h"

@class Repository;

@interface RepositoryStatus : NSObject

/**
 * Construct the status object from a repository
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
 */
- (FileStatus *)ofFile:(NSString *)filePath;

/**
 * Get a list of all current file statuses
 */
- (NSArray *)files;

@end
