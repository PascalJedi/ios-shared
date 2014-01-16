//
//  SDPullNavigationManager.h
//  walmart
//
//  Created by Steven Woolgar on 12/05/2013.
//  Copyright (c) 2013 Walmart. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SDPullNavigationBar.h"

@class SDPullNavigationBarControlsView;

@interface SDPullNavigationManager : NSObject<UINavigationControllerDelegate>

@property (nonatomic, strong) Class pullNavigationBarViewClass;
@property (nonatomic, strong) UIImage* menuAdornmentImage;
@property (nonatomic, copy) NSString* globalMenuStoryboardId;
@property (nonatomic, weak) id<SDPullNavigationSetupProtocol> delegate;
@property (nonatomic, strong) SDContainerViewController* globalPullNavController;
@property (nonatomic, assign) BOOL showGlobalNavControls;   // Turn this off and I won't take away your navigationItems
@property (nonatomic, strong) SDPullNavigationBarControlsView* leftBarItemsView;
@property (nonatomic, strong) SDPullNavigationBarControlsView* rightBarItemsView;

+ (instancetype)sharedInstance;
- (void)navigateWithSteps:(NSArray*)steps;

@end