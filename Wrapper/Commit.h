#import <Foundation/Foundation.h>

@interface Commit : NSObject

@property NSString *message;
@property NSString *author;
@property NSString *commiter;
@property NSDate   *commitDate;
@property NSArray  *parents;

// We would probably also want something here that represents
// The tree, but I don't think we're going to get that advanched

// We would probably want to be able to construct commits here as well
// Right now this would probably make more sense as a struct. But in a
// real implimentation it certianlly could have some instance methods

@end
