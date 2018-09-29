//
//  HHCameraView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

#import "HHPreviewView.h"
#import "HHOverlayView.h"

@interface HHCameraView : UIView

@property (weak, nonatomic, readonly) HHPreviewView *previewView;
@property (weak, nonatomic, readonly) HHOverlayView *controlsView;

@end
