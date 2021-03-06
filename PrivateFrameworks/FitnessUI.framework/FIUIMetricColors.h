/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@class UIColor;

@interface FIUIMetricColors : NSObject {
    UIColor *_adjustmentButtonBackgroundColor;
    UIColor *_buttonDisabledTextColor;
    UIColor *_buttonTextColor;
    UIColor *_gradientDarkColor;
    UIColor *_gradientLightColor;
    UIColor *_nonGradientTextColor;
    UIColor *_valueDisplayColor;
}

@property(retain) UIColor * adjustmentButtonBackgroundColor;
@property(retain) UIColor * buttonDisabledTextColor;
@property(retain) UIColor * buttonTextColor;
@property(retain) UIColor * gradientDarkColor;
@property(retain) UIColor * gradientLightColor;
@property(retain) UIColor * nonGradientTextColor;
@property(retain) UIColor * valueDisplayColor;

+ (id)briskColors;
+ (id)calorieColors;
+ (id)clockColors;
+ (id)distanceColors;
+ (id)elapsedTimeColors;
+ (id)heartRateColors;
+ (id)keyColors;
+ (id)metricColorsForGoalTypeIdentifier:(unsigned int)arg1;
+ (struct CGGradient { }*)newGradientForStartColor:(id)arg1 endColor:(id)arg2;
+ (id)noMetricColors;
+ (id)paceColors;
+ (id)sedentaryColors;
+ (id)systemGrayTextColor;

- (void).cxx_destruct;
- (id)adjustmentButtonBackgroundColor;
- (id)buttonDisabledTextColor;
- (id)buttonTextColor;
- (id)gradientDarkColor;
- (id)gradientLightColor;
- (id)nonGradientTextColor;
- (void)setAdjustmentButtonBackgroundColor:(id)arg1;
- (void)setButtonDisabledTextColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setGradientDarkColor:(id)arg1;
- (void)setGradientLightColor:(id)arg1;
- (void)setNonGradientTextColor:(id)arg1;
- (void)setValueDisplayColor:(id)arg1;
- (id)valueDisplayColor;

@end
