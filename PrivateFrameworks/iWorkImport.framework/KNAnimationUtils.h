/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationUtils : NSObject {
}

+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned int)arg1;
+ (id)customAttributesArrayWithDeliveryOptions:(id)arg1;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)arg1;
+ (unsigned int)directionFromCustomAttributesDeliveryOption:(unsigned int)arg1;
+ (void)getRecommendedPosition:(struct CGPoint { float x1; float x2; }*)arg1 andTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; }*)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 contentsScale:(float)arg5;
+ (void)initialize;
+ (BOOL)isCustomEffectTimingCurveEditingEnabled;
+ (BOOL)isDisplayLoggingEnabled;
+ (BOOL)isFPSGraphEnabled;
+ (BOOL)isFPSLoggingEnabled;
+ (BOOL)isFPSLoggingTimerDisabled;
+ (BOOL)isGLStateValidationEnabled;
+ (BOOL)isMotionBlurBlacklistedWithCapabilities:(id)arg1;
+ (BOOL)isMotionBlurCapableWithAnimationContext:(id)arg1;
+ (BOOL)isRandomNumberSeedInspectionEnabled;
+ (BOOL)isSOATSAnimationTestingEnabled;
+ (unsigned int)randomBasicDirection;
+ (unsigned int)randomDirection;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize { float x1; float x2; })arg1 inContainerWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 contentsScale:(float)arg3 isExternalDisplay:(BOOL)arg4;
+ (void)setRandomSeedWithNumber:(id)arg1;
+ (BOOL)shouldForceDisplayPreferredMode;
+ (id)timingsArrayWithDirection:(unsigned int)arg1 duration:(float)arg2 count:(unsigned int)arg3 chunkDuration:(float)arg4 randomness:(float)arg5;
+ (void)updateDefaultsValues;

@end
