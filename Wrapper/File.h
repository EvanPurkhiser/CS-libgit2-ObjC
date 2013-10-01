#import <Foundation/Foundation.h>
#import "Repository.h"

// The file status should be a bitfield
typedef unsigned int FileStatus;

@interface File : NSObject

@property NSString   *filePath;

/**
 * Setup the file belonging to a repository
 *
 * @param repository The repository that the file belongs too
 * @param filePath   The absolute (or repository relative) to of the file
 */
+(id)init:(Repository *)repository filePath:(NSString *)filePath;

/**
 * Get the status of this file
 */
- (FileStatus)status;

/**
 * Stage this file in the repository index
 */
-(id)addToIndex;

/**
 * Get the text representation of the difference between this file and the
 * file existing in the HEAD of the repository
 */
-(NSString *)diff;

@end
