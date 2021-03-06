/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSAttributedString, NSString, UIColor, UILabel;

@interface MFRecipientTableViewCellTitleView : UIView <MFTinting> {
    NSAttributedString *_deselectedAttributedString;
    BOOL _highlighted;
    BOOL _shouldDim;
    UIColor *_tintColor;
    UILabel *_titleLabel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL highlighted;
@property BOOL shouldDim;
@property(readonly) Class superclass;
@property(readonly) UILabel * titleLabel;

+ (id)defaultStringAttributes;
+ (float)height;
+ (id)highlightedStringAttributes;
+ (id)regularStringAttributes;

- (void)dealloc;
- (BOOL)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setShouldDim:(BOOL)arg1;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldDim;
- (id)tintColor;
- (id)titleLabel;

@end
