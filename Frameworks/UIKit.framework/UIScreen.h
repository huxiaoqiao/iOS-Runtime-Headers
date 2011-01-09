/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIScreen : NSObject 
{
    id _display;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    float _scale;
    float _horizontalScale;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
    } _screenFlags;
}

@property(readonly) CGRect applicationFrame;
@property(copy,readonly) NSArray *availableModes;
@property(retain) UIScreenMode *currentMode;
@property(readonly) float scale;
@property(readonly) CGRect bounds;

+ (void)_videoOutSettingsChanged;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForScreenOriginRotation:(float)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToRotateScreen:(float)arg1;
+ (id)screens;
+ (void)initialize;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
+ (id)mainScreen;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;

- (id)_name;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationFrame;
- (id)initWithDisplay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(NSInteger)arg1;
- (float)_horizontalPixelScale;
- (void)_computeMetrics;
- (float)_rotation;
- (void)setBitsPerComponent:(NSInteger)arg1;
- (void)setCurrentMode:(id)arg1;
- (NSInteger)screenType;
- (BOOL)_hasStatusBar;
- (id)_defaultScreenMode;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)currentMode;
- (id)availableModes;
- (BOOL)_isMainScreen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_realDisplayBounds;
- (void)_prepareForWindow;
- (NSInteger)bitsPerComponent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (float)scale;
- (id)description;

@end