# VisualTestKit

[![Build](https://github.com/paulz/VisualTestKit/actions/workflows/build-and-test.yml/badge.svg)](https://github.com/paulz/VisualTestKit/actions/workflows/build-and-test.yml)

This is a text-based dylib that will allow linking against the private `VisualTestKit.framework` on iOS (available since iOS12).

See [a simple example project](https://github.com/cysp/VisualTestKitExample) that demonstrates how to use the framework.

For use from Objective-C you'll probably want some macros like:
```objc
#define STVTKSetReferenceImagesDirectory(_path) __VTKSetReferenceImagesDirectory((_path), self)

#define STVTKAssertView(...) _STVTKAssertViewChoose(__VA_ARGS__, STVTKAssertView3, STVTKAssertView2)(__VA_ARGS__)
#define _STVTKAssertViewChoose(_1, _2, _3, NAME, ...) NAME
#define STVTKAssertView2(_view, _name) STVTKAssertView3((_view), (_name), 0)
#define STVTKAssertView3(_view, _name, _mask) __VTKAssertView((_view), VTKID((_name), (_mask)), self, (id)CFSTR(__FILE__), __LINE__)
```

… and your tests could look something like:
```objc

@interface STMyCoolViewTests : XCTestCase
@end

@implementation STMyCoolViewTests

- (void)setUp {
    if (@available(iOS 12.0, *)) {
        STVTKSetReferenceImagesDirectory(NSStringFromClass(self.class));
    }
}

- (void)testSomeAspect {
    UIView * const view = /* … */;

    if (@available(iOS 12.0, *)) {
        STVTKAssertView(view, @"SomeAspect", VTKAssertIDDecorationScreenScale|VTKAssertIDDecorationContentSizeCategory);
    } else {
        XCTFail();
    }
}

@end

```

To use recording mode set the environment variable `VTK_RECORD_MODE` to `1` for a test run.
