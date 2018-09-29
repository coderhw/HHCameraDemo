//
//  HHFlashControl.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

// Code based on Apple's ExpandyButton

@class HHFlashControl;

@protocol HHFlashControlDelegate <NSObject>

@optional
- (void)flashControlWillExpand;
- (void)flashControlDidExpand;
- (void)flashControlWillCollapse;
- (void)flashControlDidCollapse;

@end

@interface HHFlashControl : UIControl

@property (nonatomic) NSInteger selectedMode;
@property (weak, nonatomic) id<HHFlashControlDelegate> delegate;

@end
