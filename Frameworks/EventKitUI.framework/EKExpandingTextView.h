/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UILabel;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {
    BOOL _allowEnclosingViewScroll;
    UILabel *_placeholderLabel;
    struct CGSize { 
        float width; 
        float height; 
    } _previousIntrinsicContentSize;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * placeholder;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_shouldScrollEnclosingScrollView;
- (void)_updatePlaceholder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;

@end
