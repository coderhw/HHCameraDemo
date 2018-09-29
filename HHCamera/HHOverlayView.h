//
//  HHOverlayView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HHCameraModeView.h"
#import "HHStatusView.h"

@interface HHOverlayView : UIView

@property (weak, nonatomic) IBOutlet HHCameraModeView *modeView;
@property (weak, nonatomic) IBOutlet HHStatusView *statusView;

@property (nonatomic) BOOL flashControlHidden;

@end
