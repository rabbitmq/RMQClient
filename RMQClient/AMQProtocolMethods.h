// This file is generated. Do not edit.
#import <Foundation/Foundation.h>
@import Mantle;
#import "AMQProtocolValues.h"

@interface AMQProtocolConnectionStart : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQOctet *versionMajor;
@property (nonnull, copy, nonatomic, readonly) AMQOctet *versionMinor;
@property (nonnull, copy, nonatomic, readonly) AMQTable *serverProperties;
@property (nonnull, copy, nonatomic, readonly) AMQLongstr *mechanisms;
@property (nonnull, copy, nonatomic, readonly) AMQLongstr *locales;
- (nonnull instancetype)initWithVersionMajor:(nonnull AMQOctet *)versionMajor
                                versionMinor:(nonnull AMQOctet *)versionMinor
                            serverProperties:(nonnull AMQTable *)serverProperties
                                  mechanisms:(nonnull AMQLongstr *)mechanisms
                                     locales:(nonnull AMQLongstr *)locales;
@end

@interface AMQProtocolConnectionStartOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQTable *clientProperties;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *mechanism;
@property (nonnull, copy, nonatomic, readonly) AMQLongstr *response;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *locale;
- (nonnull instancetype)initWithClientProperties:(nonnull AMQTable *)clientProperties
                                       mechanism:(nonnull AMQShortstr *)mechanism
                                        response:(nonnull AMQLongstr *)response
                                          locale:(nonnull AMQShortstr *)locale;
@end

@interface AMQProtocolConnectionSecure : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLongstr *challenge;
- (nonnull instancetype)initWithChallenge:(nonnull AMQLongstr *)challenge;
@end

@interface AMQProtocolConnectionSecureOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLongstr *response;
- (nonnull instancetype)initWithResponse:(nonnull AMQLongstr *)response;
@end

@interface AMQProtocolConnectionTune : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *channelMax;
@property (nonnull, copy, nonatomic, readonly) AMQLong *frameMax;
@property (nonnull, copy, nonatomic, readonly) AMQShort *heartbeat;
- (nonnull instancetype)initWithChannelMax:(nonnull AMQShort *)channelMax
                                  frameMax:(nonnull AMQLong *)frameMax
                                 heartbeat:(nonnull AMQShort *)heartbeat;
@end

@interface AMQProtocolConnectionTuneOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *channelMax;
@property (nonnull, copy, nonatomic, readonly) AMQLong *frameMax;
@property (nonnull, copy, nonatomic, readonly) AMQShort *heartbeat;
- (nonnull instancetype)initWithChannelMax:(nonnull AMQShort *)channelMax
                                  frameMax:(nonnull AMQLong *)frameMax
                                 heartbeat:(nonnull AMQShort *)heartbeat;
@end

@interface AMQProtocolConnectionOpen : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *virtualHost;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQBit *reserved2;
- (nonnull instancetype)initWithVirtualHost:(nonnull AMQShortstr *)virtualHost
                                  reserved1:(nonnull AMQShortstr *)reserved1
                                  reserved2:(nonnull AMQBit *)reserved2;
@end

@interface AMQProtocolConnectionOpenOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *reserved1;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShortstr *)reserved1;
@end

@interface AMQProtocolConnectionClose : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *replyCode;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *replyText;
@property (nonnull, copy, nonatomic, readonly) AMQShort *classId;
@property (nonnull, copy, nonatomic, readonly) AMQShort *methodId;
- (nonnull instancetype)initWithReplyCode:(nonnull AMQShort *)replyCode
                                replyText:(nonnull AMQShortstr *)replyText
                                  classId:(nonnull AMQShort *)classId
                                 methodId:(nonnull AMQShort *)methodId;
@end

@interface AMQProtocolConnectionCloseOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolConnectionBlocked : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *reason;
- (nonnull instancetype)initWithReason:(nonnull AMQShortstr *)reason;
@end

@interface AMQProtocolConnectionUnblocked : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolChannelOpen : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *reserved1;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShortstr *)reserved1;
@end

@interface AMQProtocolChannelOpenOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLongstr *reserved1;
- (nonnull instancetype)initWithReserved1:(nonnull AMQLongstr *)reserved1;
@end

@interface AMQProtocolChannelFlow : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQBit *active;
- (nonnull instancetype)initWithActive:(nonnull AMQBit *)active;
@end

@interface AMQProtocolChannelFlowOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQBit *active;
- (nonnull instancetype)initWithActive:(nonnull AMQBit *)active;
@end

@interface AMQProtocolChannelClose : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *replyCode;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *replyText;
@property (nonnull, copy, nonatomic, readonly) AMQShort *classId;
@property (nonnull, copy, nonatomic, readonly) AMQShort *methodId;
- (nonnull instancetype)initWithReplyCode:(nonnull AMQShort *)replyCode
                                replyText:(nonnull AMQShortstr *)replyText
                                  classId:(nonnull AMQShort *)classId
                                 methodId:(nonnull AMQShort *)methodId;
@end

@interface AMQProtocolChannelCloseOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolExchangeDeclare : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *type;
@property (nonnull, copy, nonatomic, readonly) AMQBit *passive;
@property (nonnull, copy, nonatomic, readonly) AMQBit *durable;
@property (nonnull, copy, nonatomic, readonly) AMQBit *autoDelete;
@property (nonnull, copy, nonatomic, readonly) AMQBit *internal;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                 exchange:(nonnull AMQShortstr *)exchange
                                     type:(nonnull AMQShortstr *)type
                                  passive:(nonnull AMQBit *)passive
                                  durable:(nonnull AMQBit *)durable
                               autoDelete:(nonnull AMQBit *)autoDelete
                                 internal:(nonnull AMQBit *)internal
                                   noWait:(nonnull AMQBit *)noWait
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolExchangeDeclareOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolExchangeDelete : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQBit *ifUnused;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                 exchange:(nonnull AMQShortstr *)exchange
                                 ifUnused:(nonnull AMQBit *)ifUnused
                                   noWait:(nonnull AMQBit *)noWait;
@end

@interface AMQProtocolExchangeDeleteOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolExchangeBind : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *destination;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *source;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                              destination:(nonnull AMQShortstr *)destination
                                   source:(nonnull AMQShortstr *)source
                               routingKey:(nonnull AMQShortstr *)routingKey
                                   noWait:(nonnull AMQBit *)noWait
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolExchangeBindOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolExchangeUnbind : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *destination;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *source;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                              destination:(nonnull AMQShortstr *)destination
                                   source:(nonnull AMQShortstr *)source
                               routingKey:(nonnull AMQShortstr *)routingKey
                                   noWait:(nonnull AMQBit *)noWait
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolExchangeUnbindOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolQueueDeclare : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQBit *passive;
@property (nonnull, copy, nonatomic, readonly) AMQBit *durable;
@property (nonnull, copy, nonatomic, readonly) AMQBit *exclusive;
@property (nonnull, copy, nonatomic, readonly) AMQBit *autoDelete;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                                  passive:(nonnull AMQBit *)passive
                                  durable:(nonnull AMQBit *)durable
                                exclusive:(nonnull AMQBit *)exclusive
                               autoDelete:(nonnull AMQBit *)autoDelete
                                   noWait:(nonnull AMQBit *)noWait
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolQueueDeclareOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQLong *messageCount;
@property (nonnull, copy, nonatomic, readonly) AMQLong *consumerCount;
- (nonnull instancetype)initWithQueue:(nonnull AMQShortstr *)queue
                         messageCount:(nonnull AMQLong *)messageCount
                        consumerCount:(nonnull AMQLong *)consumerCount;
@end

@interface AMQProtocolQueueBind : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                                 exchange:(nonnull AMQShortstr *)exchange
                               routingKey:(nonnull AMQShortstr *)routingKey
                                   noWait:(nonnull AMQBit *)noWait
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolQueueBindOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolQueueUnbind : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                                 exchange:(nonnull AMQShortstr *)exchange
                               routingKey:(nonnull AMQShortstr *)routingKey
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolQueueUnbindOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolQueuePurge : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                                   noWait:(nonnull AMQBit *)noWait;
@end

@interface AMQProtocolQueuePurgeOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLong *messageCount;
- (nonnull instancetype)initWithMessageCount:(nonnull AMQLong *)messageCount;
@end

@interface AMQProtocolQueueDelete : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQBit *ifUnused;
@property (nonnull, copy, nonatomic, readonly) AMQBit *ifEmpty;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                                 ifUnused:(nonnull AMQBit *)ifUnused
                                  ifEmpty:(nonnull AMQBit *)ifEmpty
                                   noWait:(nonnull AMQBit *)noWait;
@end

@interface AMQProtocolQueueDeleteOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLong *messageCount;
- (nonnull instancetype)initWithMessageCount:(nonnull AMQLong *)messageCount;
@end

@interface AMQProtocolBasicQo : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLong *prefetchSize;
@property (nonnull, copy, nonatomic, readonly) AMQShort *prefetchCount;
@property (nonnull, copy, nonatomic, readonly) AMQBit *global;
- (nonnull instancetype)initWithPrefetchSize:(nonnull AMQLong *)prefetchSize
                               prefetchCount:(nonnull AMQShort *)prefetchCount
                                      global:(nonnull AMQBit *)global;
@end

@interface AMQProtocolBasicQosOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolBasicConsume : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *consumerTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noLocal;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noAck;
@property (nonnull, copy, nonatomic, readonly) AMQBit *exclusive;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
@property (nonnull, copy, nonatomic, readonly) AMQTable *arguments;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                              consumerTag:(nonnull AMQShortstr *)consumerTag
                                  noLocal:(nonnull AMQBit *)noLocal
                                    noAck:(nonnull AMQBit *)noAck
                                exclusive:(nonnull AMQBit *)exclusive
                                   noWait:(nonnull AMQBit *)noWait
                                arguments:(nonnull AMQTable *)arguments;
@end

@interface AMQProtocolBasicConsumeOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *consumerTag;
- (nonnull instancetype)initWithConsumerTag:(nonnull AMQShortstr *)consumerTag;
@end

@interface AMQProtocolBasicCancel : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *consumerTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noWait;
- (nonnull instancetype)initWithConsumerTag:(nonnull AMQShortstr *)consumerTag
                                     noWait:(nonnull AMQBit *)noWait;
@end

@interface AMQProtocolBasicCancelOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *consumerTag;
- (nonnull instancetype)initWithConsumerTag:(nonnull AMQShortstr *)consumerTag;
@end

@interface AMQProtocolBasicPublish : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
@property (nonnull, copy, nonatomic, readonly) AMQBit *mandatory;
@property (nonnull, copy, nonatomic, readonly) AMQBit *immediate;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                 exchange:(nonnull AMQShortstr *)exchange
                               routingKey:(nonnull AMQShortstr *)routingKey
                                mandatory:(nonnull AMQBit *)mandatory
                                immediate:(nonnull AMQBit *)immediate;
@end

@interface AMQProtocolBasicReturn : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *replyCode;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *replyText;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
- (nonnull instancetype)initWithReplyCode:(nonnull AMQShort *)replyCode
                                replyText:(nonnull AMQShortstr *)replyText
                                 exchange:(nonnull AMQShortstr *)exchange
                               routingKey:(nonnull AMQShortstr *)routingKey;
@end

@interface AMQProtocolBasicDeliver : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *consumerTag;
@property (nonnull, copy, nonatomic, readonly) AMQLonglong *deliveryTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *redelivered;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
- (nonnull instancetype)initWithConsumerTag:(nonnull AMQShortstr *)consumerTag
                                deliveryTag:(nonnull AMQLonglong *)deliveryTag
                                redelivered:(nonnull AMQBit *)redelivered
                                   exchange:(nonnull AMQShortstr *)exchange
                                 routingKey:(nonnull AMQShortstr *)routingKey;
@end

@interface AMQProtocolBasicGet : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShort *reserved1;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *queue;
@property (nonnull, copy, nonatomic, readonly) AMQBit *noAck;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShort *)reserved1
                                    queue:(nonnull AMQShortstr *)queue
                                    noAck:(nonnull AMQBit *)noAck;
@end

@interface AMQProtocolBasicGetOk : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLonglong *deliveryTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *redelivered;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *exchange;
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *routingKey;
@property (nonnull, copy, nonatomic, readonly) AMQLong *messageCount;
- (nonnull instancetype)initWithDeliveryTag:(nonnull AMQLonglong *)deliveryTag
                                redelivered:(nonnull AMQBit *)redelivered
                                   exchange:(nonnull AMQShortstr *)exchange
                                 routingKey:(nonnull AMQShortstr *)routingKey
                               messageCount:(nonnull AMQLong *)messageCount;
@end

@interface AMQProtocolBasicGetEmpty : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQShortstr *reserved1;
- (nonnull instancetype)initWithReserved1:(nonnull AMQShortstr *)reserved1;
@end

@interface AMQProtocolBasicAck : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLonglong *deliveryTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *multiple;
- (nonnull instancetype)initWithDeliveryTag:(nonnull AMQLonglong *)deliveryTag
                                   multiple:(nonnull AMQBit *)multiple;
@end

@interface AMQProtocolBasicReject : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLonglong *deliveryTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *requeue;
- (nonnull instancetype)initWithDeliveryTag:(nonnull AMQLonglong *)deliveryTag
                                    requeue:(nonnull AMQBit *)requeue;
@end

@interface AMQProtocolBasicRecoverAsync : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQBit *requeue;
- (nonnull instancetype)initWithRequeue:(nonnull AMQBit *)requeue;
@end

@interface AMQProtocolBasicRecover : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQBit *requeue;
- (nonnull instancetype)initWithRequeue:(nonnull AMQBit *)requeue;
@end

@interface AMQProtocolBasicRecoverOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolBasicNack : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQLonglong *deliveryTag;
@property (nonnull, copy, nonatomic, readonly) AMQBit *multiple;
@property (nonnull, copy, nonatomic, readonly) AMQBit *requeue;
- (nonnull instancetype)initWithDeliveryTag:(nonnull AMQLonglong *)deliveryTag
                                   multiple:(nonnull AMQBit *)multiple
                                    requeue:(nonnull AMQBit *)requeue;
@end

@interface AMQProtocolTxSelect : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolTxSelectOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolTxCommit : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolTxCommitOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolTxRollback : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolTxRollbackOk : MTLModel <NSCoding, AMQMethod>

@end

@interface AMQProtocolConfirmSelect : MTLModel <NSCoding, AMQMethod>
@property (nonnull, copy, nonatomic, readonly) AMQBit *nowait;
- (nonnull instancetype)initWithNowait:(nonnull AMQBit *)nowait;
@end

@interface AMQProtocolConfirmSelectOk : MTLModel <NSCoding, AMQMethod>

@end
