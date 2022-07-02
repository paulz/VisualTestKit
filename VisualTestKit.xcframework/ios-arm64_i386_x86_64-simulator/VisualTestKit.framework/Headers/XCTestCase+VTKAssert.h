#import <XCTest/XCTest.h>

#import <VisualTestKit/VTKAssert.h>


@interface XCTestCase (VisualTestKit)
@property(retain, nonatomic, nonnull) VTKInternalConfiguration *VisualTestKitConfiguration;
@property (nonatomic,nonnull,readonly) VTKAssert *VisualTestKitAssert API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos);
@end

API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern void __VTKAssertView(UIView * __nonnull, id<VTKAssertID> __nonnull, XCTestCase * __nonnull, NSString * __nonnull, NSUInteger);

API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern void __VTKSetReferenceImagesDirectory(NSString * __nullable, XCTestCase * __nonnull);
