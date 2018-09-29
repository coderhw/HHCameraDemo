//
//  HHOverlayView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

#import "HHOverlayView.h"

@interface HHOverlayView ()

@end

@implementation HHOverlayView

- (void)awakeFromNib {
    self.backgroundColor = [UIColor clearColor];
	[self.modeView addTarget:self action:@selector(modeChanged:) forControlEvents:UIControlEventValueChanged];
}

- (void)modeChanged:(HHCameraModeView *)modeView {
	BOOL photoModeEnabled = modeView.cameraMode == THCameraModePhoto;
	UIColor *toColor = photoModeEnabled ? [UIColor blackColor] : [UIColor colorWithWhite:0.0f alpha:0.5f];
	CGFloat toOpacity = photoModeEnabled ? 0.0f : 1.0f;
	self.statusView.layer.backgroundColor = toColor.CGColor;
	self.statusView.elapsedTimeLabel.layer.opacity = toOpacity;
}

- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event {
    if ([self.statusView pointInside:[self convertPoint:point toView:self.statusView] withEvent:event] ||
        [self.modeView pointInside:[self convertPoint:point toView:self.modeView] withEvent:event]) {
        return YES;
    }
    return NO;
}

- (void)setFlashControlHidden:(BOOL)state {
    if (_flashControlHidden != state) {
        _flashControlHidden = state;
        self.statusView.flashControl.hidden = state;
    }
}

@end
