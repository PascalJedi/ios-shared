//
//  UIAlertView+SDExtensions.m
//  SetDirection
//
//  Created by brandon on 2/17/11.
//  Copyright 2011 SetDirection. All rights reserved.
//

#import "UIAlertView+SDExtensions.h"


@implementation UIAlertView(SDExtensions)

+ (UIAlertView *)alertViewWithTitle:(NSString *)title message:(NSString *)message
{
	return [UIAlertView alertViewWithTitle:title message:message buttonTitle:NSLocalizedString(@"OK", @"OK")];
}

+ (UIAlertView *)alertViewWithTitle:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title ? title : @""
													 message:message
													delegate:nil 
										   cancelButtonTitle:buttonTitle
										   otherButtonTitles:nil];	
	return alert;
}

@end
