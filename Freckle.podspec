
Pod::Spec.new do |s|

  s.name         = "Freckle"
  s.version      = "1.9.0"
  s.summary      = "The Freckle SDK enables any iOS application to participate in the Freckle open beacon ecosystem."
  s.homepage     = "https://github.com/ant900/Freckle.git"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = "kaitung123"
  s.ios.deployment_target = "8.0"
  s.source       = { :git => "https://github.com/ant900/Freckle.git", :tag => s.version.to_s }
  s.source_files  = "FreckleSDK.framework/Versions/A/Headers/*.h"
  s.public_header_files = "FreckleSDK.framework/Versions/A/Headers/*.h"
  s.resource  = "FreckleSDK.framework/Versions/A/Resources/FreckleSDK.bundle"
  s.preserve_paths = "FreckleSDK.framework"
  s.vendored_framework = "FreckleSDK.framework"
  s.xcconfig = { "FRAMEWORK_SEARCH_PATHS" => "$(PODS_ROOT)/FreckleSDK" }

end
