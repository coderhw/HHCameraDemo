//
//  HHCameraModeView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

typedef NS_ENUM(NSUInteger, THCameraMode) {
	THCameraModePhoto = 0, // default
	THCameraModeVideo = 1
};

@interface HHCameraModeView : UIControl

@property (nonatomic) THCameraMode cameraMode;

@end
