//
//     Generated by class-dump 3.5 (64 bit) (forked by @manicmaniac) (Debug version compiled Jun  9 2022 00:51:00).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, VTKInternalConfiguration, XCTestCase;

__attribute__((visibility("hidden")))
@interface VTKAssert : NSObject
{
    XCTestCase *_testCase;
    VTKInternalConfiguration *_configuration;
}

@property(copy, nonatomic) VTKInternalConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
- (void)assertView:(id)arg1 identifier:(id)arg2 filePath:(id)arg3 lineNumber:(unsigned long long)arg4;
@property(readonly, nonatomic) NSArray *drawItems;
@property(readonly, nonatomic) NSString *referenceImagesDirectory;
- (id)initWithTestCase:(id)arg1 configuration:(id)arg2;
- (id)initWithTestCase:(id)arg1;

@end

