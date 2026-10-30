// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "PPCalculateKit",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "PPCalculateKit", targets: ["PPCalculateKit"])
    ],
    targets: [
        .binaryTarget(
            name: "PPCalculateKit",
            url: "https://github.com/LefuHengqi/PPCalculateKit/releases/download/1.2.26/PPCalculateKit-1.2.26.xcframework.zip",
            checksum: "23846094a3b507ddb5034b5bf06a83533e0444a71e08eed1bdc0e3aad4840b4d"
        )
    ]
)