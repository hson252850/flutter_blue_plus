import UIKit
import Flutter
import flutter_blue_plus

@UIApplicationMain
@objc class AppDelegate: FlutterAppDelegate {
    private let bluePlusPlugin = FlutterBluePlusPlugin.shared
    
  override func application(
    _ application: UIApplication,
    didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
  ) -> Bool {
    GeneratedPluginRegistrant.register(with: self)
    return super.application(application, didFinishLaunchingWithOptions: launchOptions)
  }
}
