//
//  Foundation.h
//  museum
//
//  Created by thomasho on 15/9/18.
//  Copyright (c) 2015年 thomasho. All rights reserved.
//

#ifndef museum_Foundation_h
#define museum_Foundation_h

/*发布注意事项
 1、多语言sh必须打开
 2、版本号
 3、api接口，数据库zip
 */
#import <mach/mach_time.h>
#define kToken @"mjlxx58b47m5zdz1rvvcqyu71aam8dum"
#define kKey @"2878804224"
//外网
#define baseDomain @"https://apiservice.saidaoyou.com/v1"
//内网
//#define baseDomain @"http://dev.apiservice.saidaoyou.com/v1"
#define Localaddress @"Localaddress"
#define imageDomain(isadresslocal)  ([[NSString stringWithFormat:@"%@", isadresslocal] isEqualToString:@"1"])?@"http://home.com:8102/":@"http://cdn.saidaoyou.com/"
#define imageDomainUrl @"http://cdn.saidaoyou.com/"
#define imageDomainString(lastPath) [NSString stringWithFormat:@"http://cdn.saidaoyou.com/%@", lastPath]
//#define imageDomain @"http://image.51touchmedia.com/"

#define BBUrl(path) [NSString stringWithFormat:@"http://61.50.125.146:8180/corpay/ci/%@", path]

#define kLanguageSupports   @[@{@"en":@"ENGLISH"},@{@"zh-Hans":@"中文"}] //,@{@"ko":@"한글"}
#define kLanguageSuffixs    @{@"en":@"_en",@"zh-Hans":@"",@"ko":@"_ko"}
#define kLanguageNames      @{@"en":@"ENGLISH",@"zh-Hans":@"CHINESE",@"ko":@"KOREAN"}



//屏幕尺寸相关
#define kSCREENSize [UIScreen mainScreen].bounds.size
#define kSCREENSizeW [UIScreen mainScreen].bounds.size.width
#define kSCREENSizeH [UIScreen mainScreen].bounds.size.height

//列表页刷新时间
#define kRefreshTime @"listViewRefreshTime"

#define kPaySuccess @"paySuccess"

//扫描beacon设备相关
#define kUUIDDAOLAN @"2B6A3AD5-4699-58EA-07EF-EC1970A1D57C"
#define kWelcomeMsg @"kWelcomeMsg"

//用作存储已选择语言
#define kLanguageSwtich @"kLanguageSwitch"
//用作存储首次显示导览提示
#define kMapTip @"kMapTip"
//用作存储首页首次显示导览提示
#define kHomeTip @"kHomeTip"

//用作存储所有收藏id
#define kFavorites @"kFavorites"
#define kSettingNotification @"kSettingNotification"
#define kSettingNotAutoPlay @"kSettingNotAutoPlay"
//默认值
#define kPageFirst @(0)
#define kPageSizeMax @(10000)

#define kCheckPermission @(0)

#define kDefaultUpdateTime @"2014-01-01 00:00:00"
//判断是否推送新消息
#define kIsPush @"isPush"

//跳转到支付宝、微信平台订单
#define kOrderId @"kOrderId"
#define kPayTypeAli     @"ALIPAY"
#define kPayTypeWeChat  @"WECHAT"
#define kPayTypeCash    @"CASH"
//客服电话
#define kPhoneNum @"400-635-3881"
#define kCallNum @"4006353881"

//友盟分享平台su
#define UM_APPKEY @"5677d86de0f55ad8e200161e"

#define kNotificationAudioChange @"kNotificationAudioChange"

#endif
