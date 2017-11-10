//
//  thumbButton.h
//  QQThumbButton
//
//  Created by 张锋 on 16/7/18.
//  Copyright © 2016年 张锋. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZanImageView : UIImageView

@end

/**
 *  点赞回调提供两种方式：(根据个人喜好和需求，二选一即可)
 *    1、代理方式
 *    2、block回调方式
 */
@protocol ZFThumbButtonDelegate <NSObject>

@optional
/** 点击了点赞按钮时触发此方法(前提设置了delegate) */
- (void)zf_thumbButtonClick:(NSInteger)zans;

/** 点赞失败触发此方法(超过了最大允许的点赞数)(前提设置了delegate) */
- (void)zf_thumbFail;

@end

@interface ZFThumbButton : UIView

/** 点击了点赞按钮时回调(zans：当前显示的点赞数) */
@property (nonatomic, copy) void (^zf_thumbClickBlock) (NSInteger zans);
/** 点赞失败回调(超过了最大允许的点赞数) */
@property (nonatomic, copy) void (^zf_thumbFailBlock) (BOOL isFail);

/** 如果使用代理方法回调，请设置`delegate` */
@property (nonatomic, assign) id<ZFThumbButtonDelegate> delegate;
/**
 *  初始化点赞按钮
 *
 *  @param origin     按钮的`origin`(即x和y坐标点)
 *  @param defImage   按钮没点赞之前显示的默认图
 *  @param selImage   按钮点赞之后显示的图片
 *  @param defCount   按钮没点赞之前的显示的点赞数量
 *  @param maxFingers 按钮可被点赞最大次数(如果没有点赞数限制，请务必将此参数设为`0`，此参数不能为空！)
 */
- (instancetype)initWithOrigin:(CGPoint)origin
                      defImage:(UIImage *)defImage
                      selImage:(UIImage *)selImage
                      defCount:(NSInteger)defCount
                    maxFingers:(NSInteger)maxFingers;

@end
