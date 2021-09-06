Pod::Spec.new do |spec|

  spec.name         = "mobile-flow-plugin"
  spec.version      = "1.1.6"
  spec.summary      = "A plugin for contactless entry via iPhone and BLE Technologly."
  
  spec.description  = <<-DESC
  MobileFlow by SKIDATA is a plugin for contactless entry to SKIDATA Gates using iPhones and Bluetooth Low Energy Technology.
                   DESC

  spec.homepage     = "https://github.com/SKIDATA"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Sven Kastner" => "s.kastner@chitinsoftware.de" }

  spec.ios.deployment_target = "9.0"
  spec.ios.vendored_frameworks = 'mobile-flow-plugin.xcframework'

  spec.source = { :http => 'https://github.com/SKIDATA/mobileFlowPodRepo/blob/main/1.1.6/mobile-flow-plugin.zip?raw=true' }

  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
