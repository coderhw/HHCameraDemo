//
//  HHStatusView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

#import "HHFlashControl.h"

@interface HHStatusView : UIView <HHFlashControlDelegate>

@property (weak, nonatomic) IBOutlet HHFlashControl *flashControl;
@property (weak, nonatomic) IBOutlet UILabel *elapsedTimeLabel;
@end
