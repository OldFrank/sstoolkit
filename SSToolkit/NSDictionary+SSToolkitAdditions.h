//
//  NSDictionary+SSToolkitAdditions.h
//  SSToolkit
//
//  Created by Sam Soffes on 9/21/10.
//  Copyright 2009-2010 Sam Soffes. All rights reserved.
//

@interface NSDictionary (SSToolkitAdditions)

+ (NSDictionary *)dictionaryWithFormEncodedString:(NSString *)encodedString;
- (NSString *)stringWithFormEncodedComponents;

@end
