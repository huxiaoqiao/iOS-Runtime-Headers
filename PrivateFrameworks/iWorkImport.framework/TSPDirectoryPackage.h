/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackage : TSPPackage {
}

+ (id)componentFileURLForPackageURL:(id)arg1 packageLocator:(id)arg2;
+ (BOOL)isValidPackageAtURL:(id)arg1;
+ (id)objectArchiveURLForPackageURL:(id)arg1;
+ (unsigned int)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 completion:(id)arg6;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(BOOL)arg2 error:(id*)arg3;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newRawReadChannelForComponent:(id)arg1;
- (int)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;

@end
