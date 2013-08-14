//
//  NSMutableAttributedString+SDExtensions.m
//  walmart
//
//  Created by Steven W. Riggins on 8/13/13.
//  Copyright (c) 2013 Walmart. All rights reserved.
//
//  Based on API from OHAttributedLabel

#import "NSMutableAttributedString+SDExtensions.h"

@implementation NSMutableAttributedString (SDExtensions)

- (void)setForegroundColor:(UIColor *)color
{
    NSRange range = NSMakeRange(0, self.length);
    [self setForegroundColor:color range:range];
}

- (void)setForegroundColor:(UIColor *)color range:(NSRange)range
{
    NSDictionary *attributes = @{NSForegroundColorAttributeName: color};
    [self setAttributes:attributes range:range];
}

- (void)setFont:(UIFont *)font
{
    NSRange range = NSMakeRange(0, self.length);
    [self setFont:font range:range];
}

- (void)setFont:(UIFont *)font range:(NSRange)range
{
    NSDictionary *attributes = @{NSFontAttributeName: font};
    [self setAttributes:attributes range:range];
}

@end
