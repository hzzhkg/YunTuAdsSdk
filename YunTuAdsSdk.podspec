#
# Be sure to run `pod lib lint YunTuAdsSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YunTuAdsSdk'
  s.version          = '2.1.2'
  s.summary          = 'YunTu iOS sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzzhkg/YunTuAdsSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhehangkonggu@163.com' => 'zhehangkonggu@163.com' }
  s.source           = { :git => 'https://github.com/hzzhkg/YunTuAdsSdk', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.source_files = 'YunTuAdsSdk/Classes/**/*'
  
    s.public_header_files = ['YunTuAdsSdk/Classes/**/YunTuAdsSDK.h', 'YunTuAdsSdk/Classes/**/YunTuRequest.h', 'YunTuAdsSdk/Classes/**/YunTuSplash.h', 'YunTuAdsSdk/Classes/**/YunTuInterstitial.h', 'YunTuAdsSdk/Classes/**/YunTuReward.h', 'YunTuAdsSdk/Classes/**/YunTuAdSdk.h', 'YunTuAdsSdk/Classes/**/YunTuBanner.h', 'YunTuAdsSdk/Classes/**/YunTuNativeAdView.h', 'YunTuAdsSdk/Classes/**/YunTuNativeAd.h', 'YunTuAdsSdk/Classes/**/YunTuNativeAdManager.h']
    s.vendored_libraries = 'YunTuAdsSdk/Libraries/libYunTuAdsSdk-iOS.a'
  
   s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.6.82'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.6.82'
  s.dependency 'ToBid-iOS/KSAdapter','4.6.82'
  s.dependency 'ToBid-iOS/TouTiaoAdapter','4.6.82'
  s.dependency 'ToBid-iOS/CSJMediationAdapter','4.6.82'
  s.dependency 'ToBid-iOS/MSAdAdapter','4.6.82'
  s.static_framework = true
end
