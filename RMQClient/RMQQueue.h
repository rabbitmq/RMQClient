#import <Foundation/Foundation.h>
#import "AMQMethods.h"
#import "RMQMessage.h"
#import "RMQSender.h"

@protocol RMQChannel;

@interface RMQQueue : NSObject
@property (nonnull, copy, nonatomic, readonly) NSString *name;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                             options:(AMQQueueDeclareOptions)options
                             channel:(nonnull id <RMQChannel>)channel
                              sender:(nonnull id <RMQSender>)sender;

- (nonnull instancetype)initWithName:(nonnull NSString *)name
                             channel:(nonnull id <RMQChannel>)channel
                              sender:(nonnull id <RMQSender>)sender;

- (nonnull RMQQueue *)publish:(nonnull NSString *)message;
- (nonnull id<RMQMessage>)pop;
- (BOOL)subscribeWithError:(NSError * _Nonnull * _Nonnull)error
                   handler:(void (^ _Nonnull)(id<RMQMessage> _Nonnull))handler;
- (BOOL)subscribe:(AMQBasicConsumeOptions)options
            error:(NSError * _Nonnull * _Nonnull)error
          handler:(void (^ _Nonnull)(id<RMQMessage> _Nonnull message))handler;
- (nonnull NSNumber *)messageCount;
- (nonnull NSNumber *)consumerCount;

@end
