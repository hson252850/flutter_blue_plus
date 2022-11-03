// Copyright 2017, Paul DeMarco.
// All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#import <Flutter/Flutter.h>
#import <CoreBluetooth/CoreBluetooth.h>

#define NAMESPACE @"flutter_blue_plus"

NS_ASSUME_NONNULL_BEGIN

@interface FlutterBluePlusPlugin : NSObject<FlutterPlugin, CBCentralManagerDelegate, CBPeripheralDelegate>

@property(strong, nonatomic, readonly, class) FlutterBluePlusPlugin *shared;
@property(nonatomic, retain) CBCentralManager *centralManager;

- (CBPeripheral*)findPeripheral:(NSString*)remoteId;

@end

@interface FlutterBluePlusStreamHandler : NSObject<FlutterStreamHandler>
@property FlutterEventSink sink;
@end
NS_ASSUME_NONNULL_END
