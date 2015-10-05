#import <Foundation/Foundation.h>

@class BPStackView;


@interface BPScanCodeView : UIView

@property(nonatomic, readonly) BPStackView *stackView;

@property(nonatomic, strong) AVCaptureVideoPreviewLayer *videoLayer;

- (void)addVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)layer;

- (void)changeVideoLayerHeightWithAnimationDuration:(CGFloat)duration;
@end