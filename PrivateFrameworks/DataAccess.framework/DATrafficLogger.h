/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DATrafficLogger : NSObject {
    NSString *_filename;
}

@property(retain) NSString * filename;

+ (BOOL)enabled;

- (void).cxx_destruct;
- (void)_ensureCustomLogFile;
- (id)filename;
- (id)initWithFilename:(id)arg1;
- (void)logSnippet:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3;

@end
