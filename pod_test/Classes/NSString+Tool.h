//
//  NSString+Tool.h
//  VRCapture
//
//  Created by yangyongnian on 2019/7/8.
//  Copyright © 2019 58. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Tool)

+ (NSString *)createPathFolder:(NSString *)folder andFileName:(NSString*)fileName;
+ (NSString *)convertToJsonStringBy:(NSDictionary *)dict;
+ (NSString *)cachaPathName:(NSString * )filename ;

- (NSDictionary *)dictionaryWithJson;

@end

NS_ASSUME_NONNULL_END
