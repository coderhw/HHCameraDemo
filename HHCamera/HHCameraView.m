//
//  HHCameraView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

#import "HHCameraView.h"

@interface HHCameraView ()

@property (weak, nonatomic) IBOutlet HHPreviewView *previewView;
@property (weak, nonatomic) IBOutlet HHOverlayView *controlsView;

@end

@implementation HHCameraView

- (void)awakeFromNib {
    self.backgroundColor = [UIColor blackColor];
}

@end
