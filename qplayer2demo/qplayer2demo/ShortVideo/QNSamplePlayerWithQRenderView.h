//
//  QNSamplePlayerWithQRenderView.h
//  qplayer2demo
//
//  Created by Dynasty Dream on 2023/8/11.
//

#import <Foundation/Foundation.h>

#import <qplayer2_core/QPlayerContext.h>
#import <qplayer2_core/QIOSCommon.h>
NS_ASSUME_NONNULL_BEGIN

@interface QNSamplePlayerWithQRenderView : UIView
/**
 初始化
 @param frame view的大小
 @param APPVersion APP版本号
 @param localStorageDir 持久化相关的路径（注意权限） 目前只存日志
 @param logLevel 日志等级
 */
-(instancetype)initWithFrame:(CGRect)frame APPVersion:(NSString *)APPVersion localStorageDir:(NSString *)localStorageDir logLevel:(QLogLevel)logLevel;

/**
 初始化
 @param frame view的大小
 @param APPVersion APP版本号
 @param localStorageDir 持久化相关的路径（注意权限） 目前只存日志
 @param logLevel 日志等级
 @param authorid authorid
 */
-(instancetype)initWithFrame:(CGRect)frame APPVersion:(NSString *)APPVersion localStorageDir:(NSString *)localStorageDir logLevel:(QLogLevel)logLevel authorid:(NSString*)authorid;
/**
方法废弃
 */
+(instancetype)new NS_UNAVAILABLE;
/**
方法废弃
 */
-(instancetype)init NS_UNAVAILABLE;
/**
方法废弃
 */
-(instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

/**
 * 获取播放控制Handler
 */
@property (nonatomic, strong) QPlayerControlHandler *controlHandler;


/**
 * 获取渲染控制Handler
 */
@property (nonatomic, strong) QPlayerRenderHandler *renderHandler;


@property (nonatomic,strong) QPlayerContext *mPlayerContext;

@end

NS_ASSUME_NONNULL_END
