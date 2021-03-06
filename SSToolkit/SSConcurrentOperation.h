//
//  SSConcurrentOperation.h
//  SSToolkit
//
//  Created by Sam Soffes on 8/5/10.
//  Copyright 2009-2010 Sam Soffes. All rights reserved.
//

/**
 @brief A simple wrapper for concurrent NSOperations
 
 Subclasses should override the start and stop methods. Here is
 a basic example.
 
 @code
 - (void)start {
     [super start];
     networkRequest = [[NetworkRequest alloc] init];
     [networkRequest start];
 }
 
 - (void)finish {
     [networkRequest cancel];
     [networkRequest release];
     [super finish];
 }
 @endcode
 
 This allows for convenient handling of asynchronous calls in an operation.
 */
@interface SSConcurrentOperation : NSOperation {

@protected
	
    BOOL _isExecuting;
    BOOL _isFinished;
}

/**
 @brief Finishes the receiver's task.
 
 Subclasses must implement their own versions of finish to clean up anything
 before the operation completes. After performing the class-specific functionality,
 the subclass method should incorporate superclass versions of finish through a message to super.
 */
- (void)finish;

@end
