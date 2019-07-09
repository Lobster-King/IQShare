//
//  IQShare.h
//  IQShare
//
//  Created by lobster on 2019/7/9.
//  Copyright © 2019 lobster. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class IQSharedMessage,IQSharedResponse;

@interface IQShare : NSObject

+ (void)registerPlatformWithAppId:(NSString *)appId;

+ (void)shareToPlatform:(NSString *)platform sharedMessage:(IQSharedMessage *)sharedMessage completition:()resMsg;

@end

NS_ASSUME_NONNULL_END
