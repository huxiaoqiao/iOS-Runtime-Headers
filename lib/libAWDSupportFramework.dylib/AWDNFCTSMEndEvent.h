/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {
    NSData *_aid;
    BOOL _authEnable;
    NSData *_discretionaryData;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int lcState : 1; 
        unsigned int status : 1; 
        unsigned int authEnable : 1; 
        unsigned int mfdEnable : 1; 
        unsigned int restricted : 1; 
    } _has;
    unsigned int _lcState;
    BOOL _mfdEnable;
    BOOL _restricted;
    unsigned int _status;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_uuidReference;
}

@property(retain) NSData * aid;
@property BOOL authEnable;
@property(retain) NSData * discretionaryData;
@property(readonly) BOOL hasAid;
@property BOOL hasAuthEnable;
@property(readonly) BOOL hasDiscretionaryData;
@property BOOL hasLcState;
@property BOOL hasMfdEnable;
@property BOOL hasRestricted;
@property BOOL hasStatus;
@property BOOL hasTimeDeltaFromReference;
@property BOOL hasTimestamp;
@property(readonly) BOOL hasUuidReference;
@property unsigned int lcState;
@property BOOL mfdEnable;
@property BOOL restricted;
@property unsigned int status;
@property unsigned long long timeDeltaFromReference;
@property unsigned long long timestamp;
@property(retain) NSData * uuidReference;

- (id)aid;
- (BOOL)authEnable;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discretionaryData;
- (BOOL)hasAid;
- (BOOL)hasAuthEnable;
- (BOOL)hasDiscretionaryData;
- (BOOL)hasLcState;
- (BOOL)hasMfdEnable;
- (BOOL)hasRestricted;
- (BOOL)hasStatus;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lcState;
- (void)mergeFrom:(id)arg1;
- (BOOL)mfdEnable;
- (BOOL)readFrom:(id)arg1;
- (BOOL)restricted;
- (void)setAid:(id)arg1;
- (void)setAuthEnable:(BOOL)arg1;
- (void)setDiscretionaryData:(id)arg1;
- (void)setHasAuthEnable:(BOOL)arg1;
- (void)setHasLcState:(BOOL)arg1;
- (void)setHasMfdEnable:(BOOL)arg1;
- (void)setHasRestricted:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLcState:(unsigned int)arg1;
- (void)setMfdEnable:(BOOL)arg1;
- (void)setRestricted:(BOOL)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
