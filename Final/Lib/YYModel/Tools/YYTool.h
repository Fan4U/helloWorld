//
//  YYTool.h
//  和风天气
//
//  Created by pro on 16/3/5.
//  Copyright © 2016年 张帆. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HeWeather,CitiesModel;
@interface YYTool : NSObject

+ (HeWeather *)jsonToModel;

+ (CitiesModel *)listToModel:(NSString *)file;
//
//+ (NSString *)transform:(NSString *)chinese;
@end
