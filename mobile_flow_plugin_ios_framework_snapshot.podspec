Pod::Spec.new do |spec|

  spec.name         = "mobile_flow_plugin_ios_framework_snapshot"
  spec.version      = "3.8.302-SNAPSHOT"
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
  spec.author       = { "Denis Schüle" => "denis.schuele@skidata.com" }

  spec.ios.deployment_target = "13.0"
  spec.ios.vendored_frameworks = 'mobile_flow_plugin_ios_framework.xcframework'

  spec.source = { :git => "https://github.com/SKIDATA/mobileFlowPodRepo.git", :tag => "3.8.302-SNAPSHOT" }

end
