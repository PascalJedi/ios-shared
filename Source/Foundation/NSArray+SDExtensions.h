//
//  NSArray+SDExtensions.h
//  navbar2
//
//  Created by Brandon Sneed on 7/26/11.
//  Copyright 2011 SetDirection. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSMutableArray (SDExtensions)

/** Randomizes the indexes of the objects in the receiver. */
- (void)shuffle;

@end

@interface NSArray (SDExtensions)

/**
 Returns the next to last object in the receiver.
 @return The next to last object. `nil` if `count` is less than `2`.
 */
- (id)nextToLastObject;

/**
 Invoke a selector with the given arguments on all objects in the array.
 @param aSelector The selector to invoke.
 @param arg1,... The list of arguments to pass to the selector.
 */
- (void)makeObjectsPerformSelector:(SEL)aSelector argumentAddresses:(void *)arg1, ...;

/**
 Returns an array with the same objects as the receiver but with their indexes randomized.
 @return The shuffled array.
 */
- (NSArray *)shuffledArray;

/**
 Returns an array with the same objects as the receiver but with their indexes reversed.
 @return The reversed array.
 */
- (NSArray *)reversedArray;

/**
 Returns an NSData * containing the JSON representation of this object.
 */
- (NSData *)JSONRepresentation;

/**
 Returns an NSString * containing the JSON representation of this object.
 */
- (NSString *)JSONStringRepresentation;

/**
 Returns a new array created by calling the block on each object in the receiver.
 Does not add items if the block returns nil.
 */
- (NSArray *)arrayByMappingBlock:(id (^)(id))block;

/**
 Returns a deepCopy of an array. It will recursively deepCopy contained arrays too.
 */
- (NSArray *)deepCopy;

/**
 Returns an array with the contents of the provided array of arrays.
 */
+ (NSArray *)arrayFromArrays:(NSArray*)arrayOfArrays;

/**
 Returns a copy of the array but with the supplied object removed.
 */
- (NSArray *)arrayByRemovingObject:(id)anObject;

@end
