//
//  NativeUtil.h
//  Supermap
//
//  Created by 王子豪 on 2017/11/14.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SuperMap/Color.h>
@interface NativeUtil : NSObject
+(UIColor*)uiColorTransFromArr:(NSArray<NSNumber*>*)arr;
+(Color*)smColorTransFromArr:(NSArray<NSNumber*>*)arr;
@end
