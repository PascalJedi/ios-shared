//
//  SDSearchDisplayController.h
//  SetDirection
//
//  Created by brandon on 3/9/11.
//  Copyright 2011 SetDirection. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SDSearchDisplayResultsProtocol <NSObject>
- (NSString *)displayName;
- (NSString *)name;
@end


@interface SDSearchDisplayController : UISearchDisplayController<UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *masterList;
    NSMutableArray *searchHistory;
    NSArray *filteredHistory;
    NSString *filterString;
    UITableView *recentSearchTableView;
    NSUInteger maximumCount;
    NSArray *alternateResults;
    id selectedSearchItem;
}

@property (nonatomic, strong) NSString *userDefaultsKey;
@property (nonatomic, assign) NSUInteger maximumCount;
@property (nonatomic, strong) NSString *filterString;
@property (nonatomic, strong) NSArray *alternateResults;
@property (nonatomic, strong) id selectedSearchItem;
@property (nonatomic, readonly, strong) UITableView *recentSearchTableView;
@property (nonatomic, readwrite) BOOL showsClearRecentSearchResultsRow; /** Shows a 'Clear Search Results' row at the bottom of results. Default is NO. */

/// This overrides the internal addingSearchTableView lock in setActive:animated:. Only use this override if you are certain you need to.
@property (nonatomic, assign) BOOL shouldOverrideBlock;

- (void)addStringToHistory:(NSString *)string;
- (void)removeSearchItemFromHistory:(NSString*)string;
- (NSUInteger)recentSearchesSectionNumber; /** Provides subclass customization if needed */
- (void)updateSearchHistory;

@end

// This is pretty janky, but apple does it, so why not...
@interface UIViewController (SDSearchDisplayControllerSupport)
@property(nonatomic, readonly, retain) SDSearchDisplayController *searchDisplayController;
@end

