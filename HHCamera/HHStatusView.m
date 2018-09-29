//
//  HHStatusView.m
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

#import "HHStatusView.h"
#import <AVFoundation/AVFoundation.h>
#import "UIView+THAdditions.h"

@implementation HHStatusView

- (id)initWithFrame:(CGRect)frame {
	self = [super initWithFrame:frame];
	if (self) {
		[self setupView];
	}
	return self;
}

- (void)awakeFromNib {
	[self setupView];
}

- (void)setupView {
	self.flashControl.delegate = self;
}

- (void)flashControlWillExpand {
	[UIView animateWithDuration:0.2f animations:^{
		self.elapsedTimeLabel.alpha = 0.0f;
	}];
}

- (void)flashControlDidCollapse {
	[UIView animateWithDuration:0.1f animations:^{
		self.elapsedTimeLabel.alpha = 1.0f;
	}];
}

@end
