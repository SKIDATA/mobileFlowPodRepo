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
  spec.ios.vendored_frameworks = 'mobile_flow_plugin.xcframework'

  spec.source = { :http => 'https://github.com/SKIDATA/mobileFlowPodRepo/blob/main/1.1.6/mobile-flow-plugin.zip?raw=true' }
  spec.exclude_files = "Classes/Exclude"

end
