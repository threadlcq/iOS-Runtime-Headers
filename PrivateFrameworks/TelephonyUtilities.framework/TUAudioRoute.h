/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRoute : TURoute {
    NSString * _avAudioRouteName;
    NSDictionary * _route;
}

@property (nonatomic, readonly, copy) NSString *avAudioRouteName;
@property (nonatomic, readonly, copy) NSString *bluetoothProductIdentifier;
@property (getter=isHeadphoneJackConnected, nonatomic, readonly) bool headphoneJackConnected;
@property (nonatomic, readonly, copy) NSDictionary *route;

- (void).cxx_destruct;
- (bool)_routeTypeEqualTo:(id)arg1;
- (id)avAudioRouteName;
- (long long)bluetoothEndpointType;
- (id)bluetoothProductIdentifier;
- (long long)deviceType;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithDictionary:(id)arg1;
- (bool)isAirTunes;
- (bool)isBluetooth;
- (bool)isBluetoothLE;
- (bool)isCarAudio;
- (bool)isCurrentlyPicked;
- (bool)isDefaultRoute;
- (bool)isHandset;
- (bool)isHeadphoneJackConnected;
- (bool)isPreferred;
- (bool)isPreferredAndActive;
- (bool)isReceiver;
- (bool)isSpeaker;
- (bool)isWiredHeadphones;
- (bool)isWiredHeadset;
- (bool)isWirelessHeadset;
- (id)route;
- (bool)supportsPreferredAndActive;

@end
