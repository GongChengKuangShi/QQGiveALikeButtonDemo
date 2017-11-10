//
//  UIImage+ZF.h
//  QQThumbButton
//
//  Created by 张锋 on 16/7/20.
//  Copyright © 2016年 张锋. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ZF)

/**
 *  绘制不同颜色图片
 *
 *  @param color 先绘制的图片颜色
 *
 *  @return 绘制好的图片
 */
- (UIImage *)imageWithColor:(UIColor *)color;

@end
