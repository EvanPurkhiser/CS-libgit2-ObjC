#import <Foundation/Foundation.h>

@interface Commit : NSObject

@property NSString *message;
@property NSString *author;
@property NSString *commiter;
@property NSDate   *commitDate;
@property NSArray  *parents;

// We would probably also want something here that represents
// The tree, but I don't think we're going to get that advanched

@end
