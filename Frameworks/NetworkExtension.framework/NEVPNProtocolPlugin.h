/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSDictionary, NSString;

@interface NEVPNProtocolPlugin : NEVPNProtocol {
    int _authenticationMethod;
    NSString *_authenticationPluginType;
    NSString *_pluginType;
    int _reassertTimeout;
    NSDictionary *_vendorConfiguration;
    NSDictionary *_vendorInfo;
}

@property int authenticationMethod;
@property(copy) NSString * authenticationPluginType;
@property(readonly) NSString * pluginType;
@property int reassertTimeout;
@property(copy) NSDictionary * vendorConfiguration;
@property(copy) NSDictionary * vendorInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)authenticationMethod;
- (id)authenticationPluginType;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (void)copyPasswordsFromKeychainInDomain:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (void)initFromLegacyDictionaryExtra:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (id)pluginType;
- (int)reassertTimeout;
- (void)setAuthenticationMethod:(int)arg1;
- (void)setAuthenticationPluginType:(id)arg1;
- (void)setPluginType:(id)arg1;
- (void)setReassertTimeout:(int)arg1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setVendorConfiguration:(id)arg1;
- (void)setVendorInfo:(id)arg1;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (id)vendorConfiguration;
- (id)vendorInfo;

@end
