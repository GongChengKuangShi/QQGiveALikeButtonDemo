//
//  ViewController.m
//  QQThumbButton
//
//  Created by 张锋 on 16/7/18.
//  Copyright © 2016年 张锋. All rights reserved.
//

#import "ViewController.h"
#import "ZFThumbButton.h"

@interface ViewController () <ZFThumbButtonDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    CGPoint origin = CGPointMake(150, 300);
    ZFThumbButton *button = [[ZFThumbButton alloc] initWithOrigin:origin defImage:[UIImage imageNamed:@"usersummary_header_zan"] selImage:[UIImage imageNamed:@"usersummary_header_zan_sel"] defCount:10 maxFingers:9000];
    // 设置代理
    // button.delegate = self;
    [self.view addSubview:button];
    
    // 实现回调
    button.zf_thumbClickBlock = ^(NSInteger zans){
        NSLog(@"点赞成功block，当前赞数：%ld", zans);
    };
    button.zf_thumbFailBlock = ^(BOOL isFail){
        NSLog(@"点赞失败block，超过最大允许点赞数");
    };
}

- (void)zf_thumbButtonClick:(NSInteger)zans
{
    NSLog(@"点赞成功，当前赞数：%ld", zans);
}

- (void)zf_thumbFail
{
    NSLog(@"点赞失败，超过最大允许点赞数");
}

@end
