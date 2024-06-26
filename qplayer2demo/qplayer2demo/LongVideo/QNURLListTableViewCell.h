//
//  QNURLListTableViewCell.h
//  QPlayerKitDemo
//
//  Created by 冯文秀 on 2017/10/11.
//  Copyright © 2017年 qiniu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QNURLListTableViewCell : UITableViewCell
@property (nonatomic, strong) UIView *mCellBgView;
@property (nonatomic, strong) UILabel *mNumberLabel;
@property (nonatomic, strong) UILabel *mUrlLabel;
@property (nonatomic, strong) UIButton *mDeleteButton;


/**
 为 QNURLListTableViewCell 传递数据并显示

 @param urlString URL 字符串
 @param index 下标
 */
- (void)configureListURLString:(NSString *)urlString index:(NSInteger)index;


/**
 返回 QNURLListTableViewCell 的实时高度

 @param urlString URL 字符串
 @param index 下标
 @return QNURLListTableViewCell 的实时高度
 */
+ (CGFloat)configureListCellHeightWithURLString:(NSString *)urlString index:(NSInteger)index;
@end
