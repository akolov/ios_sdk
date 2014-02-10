//
//  AIUtil.h
//  AdjustIo
//
//  Created by Christian Wellenbrock on 2013-07-05.
//  Copyright (c) 2013 adeven. All rights reserved.
//

@interface AIUtil : NSObject

+ (NSString *)baseUrl;
+ (NSString *)clientSdk;
+ (NSString *)userAgent;

+ (void)excludeFromBackup:(NSString *)filename;

@end
