/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardPressSequence : PBCodable <NSCopying> {
    unsigned long long  _clickMax;
    BOOL  _didTriggerSOS;
    struct { 
        unsigned int clickMax : 1; 
        unsigned int timestamp : 1; 
        unsigned int didTriggerSOS : 1; 
    }  _has;
    NSMutableArray * _sequences;
    unsigned long long  _timestamp;
    NSString * _type;
    NSString * _uUID;
}

@property (nonatomic) unsigned long long clickMax;
@property (nonatomic) BOOL didTriggerSOS;
@property (nonatomic) BOOL hasClickMax;
@property (nonatomic) BOOL hasDidTriggerSOS;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasType;
@property (nonatomic, readonly) BOOL hasUUID;
@property (nonatomic, retain) NSMutableArray *sequences;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *uUID;

+ (Class)sequenceType;

- (void)addSequence:(id)arg1;
- (void)clearSequences;
- (unsigned long long)clickMax;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)didTriggerSOS;
- (BOOL)hasClickMax;
- (BOOL)hasDidTriggerSOS;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (BOOL)hasUUID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sequenceAtIndex:(unsigned int)arg1;
- (id)sequences;
- (unsigned int)sequencesCount;
- (void)setClickMax:(unsigned long long)arg1;
- (void)setDidTriggerSOS:(BOOL)arg1;
- (void)setHasClickMax:(BOOL)arg1;
- (void)setHasDidTriggerSOS:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSequences:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)timestamp;
- (id)type;
- (id)uUID;
- (void)writeTo:(id)arg1;

@end