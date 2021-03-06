/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoDumpLogsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int success : 1; 
    } _has;
    BOOL _success;
}

@property BOOL hasSuccess;
@property BOOL success;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSuccess;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSuccess:(BOOL)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)success;
- (void)writeTo:(id)arg1;

@end
