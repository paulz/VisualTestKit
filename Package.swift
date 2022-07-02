// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "VisualTestKit",
    platforms: [
        .iOS(.v12),
    ],
    products: [
        .library(
            name: "VisualTestKit",
            targets: ["VisualTestKit"]),
    ],
    targets: [
        .binaryTarget(name: "VisualTestKit", path: "VisualTestKit.xcframework")
    ]
)
