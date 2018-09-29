//
//  NSTimer+Additions.h
//  HHCamera
//
//  Created by vanke on 2018/7/6.
//  Copyright © 2018年 Evan. All rights reserved.
//

typedef void(^TimerFireBlock)(void);

@interface NSTimer (Additions)

+ (id)scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval firing:(TimerFireBlock)fireBlock;

+ (id)scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval repeating:(BOOL)repeat firing:(TimerFireBlock)fireBlock;

@end
