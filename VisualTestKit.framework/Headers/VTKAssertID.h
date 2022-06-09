//
//     Generated by class-dump 3.5 (64 bit) (forked by @manicmaniac) (Debug version compiled Jun  9 2022 00:51:00).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/Foundation.h>


typedef NS_OPTIONS(NSUInteger, VTKAssertIDDecorations) {
    VTKAssertIDDecorationScreenWidth = 0x1,
    VTKAssertIDDecorationScreenHeight = 0x2,
    VTKAssertIDDecorationScreenScale = 0x4,
    VTKAssertIDDecorationLocale = 0x8,
    VTKAssertIDDecorationContentSizeCategory = 0x10,
    VTKAssertIDDecorationDisplayGamut = 0x20,
};


#import <VisualTestKit/VTKAssertID-Protocol.h>

@class NSString;

@interface VTKAssertID : NSObject <VTKAssertID>
{
    NSString *_vtkAssertName;
    unsigned long long _vtkIDDecorationsMask;
}

@property(readonly, nonatomic) unsigned long long vtkIDDecorationsMask; // @synthesize vtkIDDecorationsMask=_vtkIDDecorationsMask;
@property(readonly, nonatomic, nonnull) NSString *vtkAssertName; // @synthesize vtkAssertName=_vtkAssertName;
- (nonnull id)initWithName:(nonnull id)arg1 decorationMask:(unsigned long long)arg2;


@end

API_AVAILABLE(ios(12.0)) API_UNAVAILABLE(watchos, macos, tvos)
extern VTKAssertID * __nonnull VTKID(NSString * __nonnull name, VTKAssertIDDecorations decorationMask);
