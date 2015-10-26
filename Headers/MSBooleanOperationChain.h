#import "NSObject.h"

@class NSBezierPath, NSMutableArray;

@interface MSBooleanOperationChain : NSObject
{
    NSBezierPath *_subjectPath;
    NSBezierPath *_resultPath;
    NSMutableArray *_steps;
}

+ (id)booleanOperationChainWithSubjectPath:(id)arg1;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSBezierPath *resultPath; // @synthesize resultPath=_resultPath;
@property(retain, nonatomic) NSBezierPath *subjectPath; // @synthesize subjectPath=_subjectPath;
- (void).cxx_destruct;
- (void)addClippingPath:(id)arg1 forBooleanOperation:(long long)arg2;
- (id)initWithSubjectPath:(id)arg1;

@end
