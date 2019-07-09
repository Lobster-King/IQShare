//
//  IQSharedMessage.h
//  IQShare
//
//  Created by lobster on 2019/7/9.
//  Copyright © 2019 lobster. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, IQSharedMessageType) {
    IQSharedMessageText = 0,
    IQSharedMessageLink = 1 << 1,
    IQSharedMessagePic  = 1 << 2,
};

@interface IQSharedMessage : NSObject

@property (nonatomic, copy, readonly)   NSString *msgId;
@property (nonatomic, assign, readonly) NSInteger msgType;

@end

NS_ASSUME_NONNULL_END
