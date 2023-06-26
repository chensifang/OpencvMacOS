#
# Be sure to run `pod lib lint OpencvMacOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OpencvMacOS'
  s.version          = '0.0.1'
  s.summary          = 'A short description of OpencvMacOS.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/chensifang'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'csf62615@sina.com' => 'csf62615@sina.com' }
  s.source           = { :git => 'git@github.com:chensifang/OpencvMacOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform = :osx
  s.osx.deployment_target = "10.13"
#  /Users/chensifang/Desktop/pod/OpencvMacOS/OpencvMacOS/Frameworks/opencv2.framework/Versions/A/Headers/
  s.source_files = 'OpencvMacOS/lib/opencv2.framework/Versions/A/Headers**/*'
  s.vendored_frameworks = 'OpencvMacOS/lib/opencv2.framework'
  s.frameworks = 'OpenCL', 'Accelerate', 'AVFoundation', 'CoreMedia'
  s.libraries = 'c++'

  # s.resource_bundles = {
  #   'OpencvMacOS' => ['OpencvMacOS/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'Cocoa'
  # s.dependency 'AFNetworking', '~> 2.3'
end
