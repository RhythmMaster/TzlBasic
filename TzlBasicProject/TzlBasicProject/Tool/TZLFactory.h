//
//  TZLFactory.h
//  TzlBasicProject
//
//  Created by TangZhengLiang on 16/7/29.
//  Copyright © 2016年 TangZhengLiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TZLFactory : NSObject

+ (long long)fileSizeAtPath:(NSString *)filePath;
+ (float)folderSizeAtPath:(NSString *)folderPath;

@end
