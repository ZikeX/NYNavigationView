//
//  MidNYView.h
//  NYNavigationViewDemo
//
//  Created by 牛严 on 2016/12/14.
//  Copyright © 2016年 牛严. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MidNYView : UIView

- (void)leftItemTapped;

- (void)rightItemTapped;

- (void)setLeftImage:(UIImage *)image title:(NSString *)title rightItem:(NSString *)rightItem;

@end
