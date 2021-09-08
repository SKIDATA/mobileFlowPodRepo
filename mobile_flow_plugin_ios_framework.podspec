Pod::Spec.new do |spec|

  spec.name         = "mobile_flow_plugin_ios_framework"
  spec.version      = "1.1.7"
  spec.summary      = "A plugin for contactless entry via iPhone and BLE Technologly."
  
  spec.description  = <<-DESC
  MobileFlow by SKIDATA is a plugin for contactless entry to SKIDATA Gates using iPhones and Bluetooth Low Energy Technology.
                   DESC

  spec.homepage     = "https://github.com/SKIDATA"
  spec.license      = { :type => 'Copyright', :text => <<-LICENSE
                            Copyright 2021
                            Permission is granted to...
                            LICENSE
                    }
  spec.author       = { "Sven Kastner" => "s.kastner@chitinsoftware.de" }

  spec.ios.deployment_target = "13.6"
  spec.ios.vendored_frameworks = 'mobile-flow-plugin.xcframework'

  spec.source = { :http => 'https://github.com/SKIDATA/mobileFlowPodRepo/blob/main/mobile-flow-plugin.xcframework.zip?raw=true' }
  
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end
