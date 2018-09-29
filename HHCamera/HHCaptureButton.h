//
//  HHCaptureButton.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

typedef NS_ENUM(NSUInteger, HHCaptureButtonMode) {
	HHCaptureButtonModePhoto = 0, // default
	HHCaptureButtonModeVideo = 1
};

@interface HHCaptureButton : UIButton

+ (instancetype)captureButton;
+ (instancetype)captureButtonWithMode:(HHCaptureButtonMode)captureButtonMode;

@property (nonatomic) HHCaptureButtonMode captureButtonMode;


@end

