// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef MOBILE_FLOW_PLUGIN_IOS_FRAMEWORK_SWIFT_H
#define MOBILE_FLOW_PLUGIN_IOS_FRAMEWORK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreBluetooth;
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="mobile_flow_plugin_ios_framework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework11BaseService")
@interface BaseService : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework14ArchiveService")
@interface ArchiveService : BaseService
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// BleManager
/// for handling the scanning, connection, transmitting and response process based on the GATT Protocol.
SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework10BleManager")
@interface BleManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class CBCentralManager;
@class CBPeripheral;
@class NSString;
@class NSNumber;

@interface BleManager (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <CBCentralManagerDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)_ didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
/// Peripheral connected.  Update UI
- (void)centralManager:(CBCentralManager * _Nonnull)_ didConnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
/// Connection to Peripheral failed.
- (void)centralManager:(CBCentralManager * _Nonnull)_ didFailToConnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
/// Peripheral disconnected.  Leave UIView
/// <ul>
///   <li>
///     <a href="https://developer.apple.com/documentation/corebluetooth/cbatterror/code">Swift CBATTErrorCodes</a>
///   </li>
/// </ul>
- (void)centralManager:(CBCentralManager * _Nonnull)_ didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
@end

@class CBCharacteristic;
@class BlePeripheral;
@class NSData;
@class CBService;

/// BlePeripheralDelegate relays important status changes from BlePeripheral
SWIFT_PROTOCOL("_TtP32mobile_flow_plugin_ios_framework21BlePeripheralDelegate_")
@protocol BlePeripheralDelegate
/// Value written to Characteristic
/// \param characteristic the Characteristic that was written to
///
/// \param blePeripheral the BlePeripheral
///
- (void)blePeripheralWithValueWritten:(CBCharacteristic * _Nonnull)characteristic blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// Characteristic was read
/// \param stringValue the value read from the Charactersitic
///
/// \param characteristic the Characteristic that was read
///
/// \param blePeripheral the BlePeripheral
///
- (void)blePeripheralWithCharacteristicRead:(NSString * _Nonnull)stringValue characteristic:(CBCharacteristic * _Nonnull)characteristic blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// Characteristic was read
/// \param dataValue the value read from the Charactersitic
///
/// \param characteristic the Characteristic that was read
///
/// \param blePeripheral the BlePeripheral
///
- (void)blePeripheralWithCharacteristicDataValue:(NSData * _Nullable)dataValue characteristic:(CBCharacteristic * _Nonnull)characteristic blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// Characteristics were discovered for a Service
/// \param characteristics the Characteristic list
///
/// \param forService the Service these Characteristics are under
///
/// \param blePeripheral the BlePeripheral
///
- (void)blePerihperalWithDiscoveredCharacteristics:(NSArray<CBCharacteristic *> * _Nonnull)characteristics forService:(CBService * _Nonnull)forService blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// RSSI was read for a Peripheral
/// \param rssi the RSSI
///
/// \param blePeripheral the BlePeripheral
///
- (void)blePeripheralWithReadRssi:(NSNumber * _Nonnull)rssi blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// Error occured for a Peripheral
/// \param error the <code>Error</code>
///
- (void)blePeripheralWithError:(NSError * _Nonnull)error;
/// RSSI was read for a Peripheral
/// \param rssi the RSSI
///
/// \param blePeripheral the BlePeripheral
///
- (void)discoveringServices;
/// Detail should be logt
/// \param message String
///
- (void)blePeripheralWithMessage:(NSString * _Nonnull)message;
@end


@interface BleManager (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <BlePeripheralDelegate>
/// value was written to characteristic  by BLE Peripheral
/// \param valueWritten to CBCharacterisic
///
/// \param blePeripheral from BlePeripheral
///
- (void)blePeripheralWithValueWritten:(CBCharacteristic * _Nonnull)characteristic blePeripheral:(BlePeripheral * _Nonnull)_;
/// String value was read on characteristic
/// \param stringValue of read data
///
/// \param characteristic _ from where the stringValue was read
///
/// \param blePeripheral _ which read the value
///
- (void)blePeripheralWithCharacteristicRead:(NSString * _Nonnull)stringValue characteristic:(CBCharacteristic * _Nonnull)_ blePeripheral:(BlePeripheral * _Nonnull)_;
/// Data value  was read on characteristic
/// \param characteristicDataValue dataValue of read data
///
/// \param characteristic _ from where the stringValue was read
///
/// \param blePeripheral _ which read the value
///
- (void)blePeripheralWithCharacteristicDataValue:(NSData * _Nullable)dataValue characteristic:(CBCharacteristic * _Nonnull)_ blePeripheral:(BlePeripheral * _Nonnull)_;
/// Characteristics where discovered
/// \param discoveredCharacteristics characteristics array of <code>[CBCharacteristic]</code>
///
/// \param forService _ for <code>CBService</code>
///
/// \param blePeripheral _ from
///
- (void)blePerihperalWithDiscoveredCharacteristics:(NSArray<CBCharacteristic *> * _Nonnull)characteristics forService:(CBService * _Nonnull)_ blePeripheral:(BlePeripheral * _Nonnull)peripheral;
- (void)blePeripheralWithReadRssi:(NSNumber * _Nonnull)rssi blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// Error delegated from blePeripheral with <code>String?</code>
/// \param error <code>Error</code>
///
- (void)blePeripheralWithError:(NSError * _Nonnull)error;
/// Discovering of services is triggered
- (void)discoveringServices;
- (void)blePeripheralWithMessage:(NSString * _Nonnull)message;
@end



SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework13BlePeripheral")
@interface BlePeripheral : NSObject
/// The Service was discovered
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverServices:(NSError * _Nullable)error;
/// Characteristics were discovered for a Service on the connected Peripheral
- (void)peripheral:(CBPeripheral * _Nonnull)_ didDiscoverCharacteristicsForService:(CBService * _Nonnull)service error:(NSError * _Nullable)error;
/// RSSI read from peripheral.
- (void)peripheral:(CBPeripheral * _Nonnull)_ didReadRSSI:(NSNumber * _Nonnull)RSSI error:(NSError * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface BlePeripheral (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <CBPeripheralDelegate>
/// Characteristic has been subscribed to or unsubscribed from
- (void)peripheral:(CBPeripheral * _Nonnull)_ didUpdateNotificationStateForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
/// Value was written to the Characteristic
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didWriteValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
/// Value downloaded from Characteristic on connected Peripheral
- (void)peripheral:(CBPeripheral * _Nonnull)_ didUpdateValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
@end




SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework10BleService")
@interface BleService : BaseService
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework16BluetoothManager")
@interface BluetoothManager : BaseService
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class CLLocationManager;
@class CLBeacon;
@class CLBeaconRegion;

@interface BluetoothManager (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didRangeBeacons:(NSArray<CLBeacon *> * _Nonnull)beacons inRegion:(CLBeaconRegion * _Nonnull)region;
@end




SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework17ConnectionService")
@interface ConnectionService : BaseService
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework13DeviceService")
@interface DeviceService : BaseService
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework11FileService")
@interface FileService : BaseService
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// MobileFlowError represents the possible errors that can occur while using the plugin.
typedef SWIFT_ENUM(NSInteger, MobileFlowError, open) {
/// BluetoothNotActive
/// If the Bluetooth module is not active.
  MobileFlowErrorBluetoothNotActive = 0,
/// BluetoothPermissionMissing
/// If the permission to access the Bluetooth module is missing.
  MobileFlowErrorBluetoothPermissionMissing = 1,
/// DeviceOffline
/// Missing internet connection. This might only occur when internet connection is required (e.g. while starting or download a ticket).
  MobileFlowErrorDeviceOffline = 2,
/// GeneralError
/// A general error occurred which couldn’t be handled which does not match any other error type.
  MobileFlowErrorGeneralError = 3,
/// InvalidMobileFlowToken
/// Error when the token which is provided for the plugin in not valid. In this case the plugin will not be operational.
  MobileFlowErrorInvalidMobileFlowToken = 4,
/// InvalidTicketURL
/// Errors which the downloadTicket function can throw if the passed URL is no valid URL or no ticket could be downloaded from this URL.
  MobileFlowErrorInvalidTicketURL = 5,
/// LocationPermissionMissing
/// If the plugin is missing the location permission which is required for the plugin to work.
  MobileFlowErrorLocationPermissionMissing = 6,
/// LocationPrecisePermissionMissing
/// If the plugin is missing the precisse location permission which is required for the plugin to work.
  MobileFlowErrorLocationPrecisePermissionMissing = 7,
/// PassageTimedOut
/// If the ticket validation was successful but no passage has been detected at the gate for a certain timeout period. This only means that no person passed the gate which was activated be this ticket.
  MobileFlowErrorPassageTimedOut = 8,
/// PluginOutdated
/// Error which is thrown when the plugin has expired. An expiration of a plugin will be communicate separately to all integrators.
  MobileFlowErrorPluginOutdated = 9,
/// PluginOutdatedSoon
/// Error which can be used as an indication that a plugin version will expire soon. This could be used to inform the user to update soon.
  MobileFlowErrorPluginOutdatedSoon = 10,
/// TicketDownloadLimitExceeded
/// Errors which is thrown when the download limit has been exceeded. This is an indication that the ticket has already been downloaded.
  MobileFlowErrorTicketDownloadLimitExceeded = 11,
/// TicketInvalidError
/// The ticket was rejected by the SKIDATA access system (i.e. the ticket is not valid at the entrance).
  MobileFlowErrorTicketInvalidError = 12,
/// TicketNotValidForCompany
/// If the phone is in the detection range of a gate which does not match the ticket which is currently in use.
  MobileFlowErrorTicketNotValidForCompany = 13,
/// TicketParsingError
/// Error which indicates that the ticket provided could bot be decoded. This could be caused by a faulty ticket or some missing information within the ticket.
  MobileFlowErrorTicketParsingError = 14,
/// TicketTransmissionError
/// Any error that occur in the ticket exchange process between phone and gate during a passage attempt.
  MobileFlowErrorTicketTransmissionError = 15,
/// UnsupportedDevice
/// The phone isn’t supported. If this error occurs <code>stopMobileFlow()</code> will be called. A list of unsupported phones will be provided.
  MobileFlowErrorUnsupportedDevice = 16,
};
static NSString * _Nonnull const MobileFlowErrorDomain = @"mobile_flow_plugin_ios_framework.MobileFlowError";

/// MobileFlowEvent represents the events that occur during the access process.
typedef SWIFT_ENUM(NSInteger, MobileFlowEvent, open) {
/// gateAccessTriggered
/// This event indicates that the phone has been localized at an access gate and the ticket is sent to the access system.
  MobileFlowEventGateAccessTriggered = 0,
/// gateInUse
/// This event indicates that the gate is currently in use (i.e. a passage of another person is not yet completed).
  MobileFlowEventGateInUse = 1,
/// gateAccessCompleted
/// Event indicates that an access has been completed. This is the case when the person passed the gate.
  MobileFlowEventGateAccessCompleted = 2,
/// ticketValid
/// Event which indicates that the ticket sent to the access system is valid.
  MobileFlowEventTicketValid = 3,
};

@protocol MobileFlowPluginDelegate;
@class MobileFlowTicket;
enum MobileFlowState : NSInteger;

/// @file
/// @author  Denis Schüle
/// @version 0.4
/// @section LICENSE
/// Copyright (c) SKIDATA GmbH 2021, all rights reserved.
/// Protected intellectual property.
/// Reverse-engineering prohibited by this protection.
SWIFT_PROTOCOL("_TtP32mobile_flow_plugin_ios_framework16MobileFlowPlugin_")
@protocol MobileFlowPlugin
/// This method returns the singelton instance of the plugin.
/// If the passed token is invalid MobileFlowError.InvalidMobileFlowToken will be thrown, the token will be checked online and offline
+ (id <MobileFlowPlugin> _Nullable)getInstanceWithToken:(NSString * _Nonnull)token error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Delivers the current version
///
/// returns:
/// Current version of the plugin
+ (NSString * _Nonnull)getPluginVersion SWIFT_WARN_UNUSED_RESULT;
/// This method sets the delegate which is used on the respective events.
/// \param delegate 
/// The delegate to use.
///
- (void)setDelegate:(id <MobileFlowPluginDelegate> _Nonnull)delegate;
/// This method starts the plugin.
/// \param ticket 
/// The ticket used to access the gate.
///
- (void)startSkiingWithTicket:(MobileFlowTicket * _Nonnull)ticket SWIFT_DEPRECATED_MSG("", "startMobileFlowWithTicket:");
- (void)startMobileFlowWithTicket:(MobileFlowTicket * _Nonnull)ticket;
/// This method stops the plugin.
/// It also stops the region scan.
- (void)stopSkiing SWIFT_DEPRECATED_MSG("", "stopMobileFlow");
- (void)stopMobileFlow;
/// This method downloads a ticket.
/// On success, the ‘newTicket’ method of the registered delegate is called.
/// On error, the ‘receivedError’ method of the registered delegate is called.
/// \param url 
/// The URL to the ticket.
///
- (void)downloadTicket:(NSString * _Nonnull)url;
/// This method return the UUID from the plugin for the current user
- (NSString * _Nonnull)getPluginUUID SWIFT_WARN_UNUSED_RESULT;
/// This method return the current MobileFlow state of the MobileFlow Plugin
- (enum MobileFlowState)getLocalizationState SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("", "getMobileFlowState");
- (enum MobileFlowState)getMobileFlowState SWIFT_WARN_UNUSED_RESULT;
/// This method returns true if the given model is supported for Mobile Flow
- (BOOL)isPhoneSupported SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP32mobile_flow_plugin_ios_framework24MobileFlowPluginDelegate_")
@protocol MobileFlowPluginDelegate
/// This method is called when a ticket has been downloaded successfully.
/// \param ticket 
/// The new ticket.
///
- (void)newTicket:(MobileFlowTicket * _Nonnull)ticket;
/// This method is called if an error occurs.
/// \param error 
/// The error which occurred.
///
- (void)receivedError:(enum MobileFlowError)error;
/// This method is called if an event occurs.
/// \param event 
///
- (void)receivedEvent:(enum MobileFlowEvent)event;
/// This method is called when the pluginState change
/// \param to state of type <code>MobileFlowLocalizationState</code>´
///
- (void)localizationStateChangedTo:(enum MobileFlowState)state SWIFT_DEPRECATED_MSG("", "mobileFlowStateChangedTo:");
- (void)mobileFlowStateChangedTo:(enum MobileFlowState)state;
/// This method is called when a notification should be presented to awake the locked screen
/// The method is only called if the device require a non-idle mode for passing gates.
- (void)awakeScreen SWIFT_DEPRECATED_MSG("Function isn't needed with MF-Plugin 3.*");
@end


/// Handles the ability to pass gates with digital tickets via short-range radio.
SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework20MobileFlowPluginImpl")
@interface MobileFlowPluginImpl : NSObject <MobileFlowPlugin>
- (NSString * _Nonnull)getPluginUUID SWIFT_WARN_UNUSED_RESULT;
/// To be used to get an instance of the plugin.
///
/// returns:
/// Instance of the <code>MobileFlowPlugin</code>
+ (id <MobileFlowPlugin> _Nullable)getInstanceWithToken:(NSString * _Nonnull)token error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
/// Delivers the current version
///
/// returns:
/// Current version of the plugin
+ (NSString * _Nonnull)getPluginVersion SWIFT_WARN_UNUSED_RESULT;
/// Set the delegation of the plugin to the passed object
/// \param delegate from type <code>MobileFlowPluginDelegate</code>
///
- (void)setDelegate:(id <MobileFlowPluginDelegate> _Nonnull)delegate;
/// Initial call to start the scanning of the ble-beacons with the passed ticket.
/// For usage it is required that the gateway for the companyId is configured.
/// Errors will be handled with the <code>delegation.receivedError</code>.
/// \param ticket from type <code>MobileFlowTicket</code>which should be used for skiing.
///
- (void)startSkiingWithTicket:(MobileFlowTicket * _Nonnull)ticket;
- (void)startMobileFlowWithTicket:(MobileFlowTicket * _Nonnull)ticket;
/// Handles the download of the ticket.
/// Errors will be handled with the <code>delegation.receivedError</code>.
/// \param url of type <code>String</code> from where the ticket should be downloaded.
///
- (void)downloadTicket:(NSString * _Nonnull)url;
/// returns the current localizationstate
- (enum MobileFlowState)getLocalizationState SWIFT_WARN_UNUSED_RESULT;
- (enum MobileFlowState)getMobileFlowState SWIFT_WARN_UNUSED_RESULT;
/// Stopped the activity and allow a new start of the plugin. The stored elements get cleared.
- (void)stopSkiing;
- (void)stopMobileFlow;
- (BOOL)isPhoneSupported SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MobileFlowState represents the state of the plugin.
/// <ul>
///   <li>
///     the default value is <code>.off</code> the plugin doesn’t do anything.
///   </li>
///   <li>
///     if <code>startMobileFlow()</code> gets called, the state change to <code>preparing</code>
///   </li>
///   <li>
///     if the setup is completed, the state change from <code>preparing</code> to <code>running</code>
///   </li>
///   <li>
///     when <code>stopMobileFlow()</code> is called, the state turn back to <code>.off</code>
///   </li>
///   <li>
///     if an error occure during perperation  <code>.runningWithIssues</code> is set
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, MobileFlowState, open) {
/// off
/// This is the state of the plugin before calling startMobileFlow and after stopMobileFlow. In this state the plugin does nothing.
  MobileFlowStateOff = 0,
/// preparing
/// This state indicates that the plugin is being prepared for its usage. The state occurs after startMobileFlow until the preparation is done.
  MobileFlowStatePreparing = 1,
/// running
/// In this state the plugin is active and can be used for accessing a gate.
  MobileFlowStateRunning = 2,
/// runningWithIssues
/// In case there are any issues (e.g. missing permission) the plugin will be in this state. The state indicates that the plugin has issues which prevent it from running as expected.
  MobileFlowStateRunningWithIssues = 3,
};

@class NSDate;
@class UIImage;

SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework16MobileFlowTicket")
@interface MobileFlowTicket : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull barcode;
@property (nonatomic, readonly, copy) NSString * _Nullable validAreaId;
@property (nonatomic, readonly, copy) NSString * _Nullable validAreaName;
@property (nonatomic, readonly, copy) NSString * _Nonnull validInCompanyIds;
@property (nonatomic, readonly, copy) NSString * _Nullable productName;
@property (nonatomic, readonly, copy) NSDate * _Nullable validFrom;
@property (nonatomic, readonly, copy) NSDate * _Nullable validTo;
@property (nonatomic, readonly, copy) NSString * _Nullable psnr;
@property (nonatomic, readonly, strong) UIImage * _Nullable image;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull validInCompanyIdsList;
@property (nonatomic, readonly, copy) NSDate * _Nonnull downloadTimeStampDate;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nullable)validAreaId validAreaName:(NSString * _Nullable)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nullable)productName validFrom:(NSDate * _Nullable)validFrom validTo:(NSDate * _Nullable)validTo psnr:(NSString * _Nullable)psnr image:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nullable)validAreaId validAreaName:(NSString * _Nullable)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nullable)productName validFrom:(NSDate * _Nullable)validFrom validTo:(NSDate * _Nullable)validTo psnr:(NSString * _Nullable)psnr;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework17PermissionService")
@interface PermissionService : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface PermissionService (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <CBCentralManagerDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework14SessionService")
@interface SessionService : BaseService
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework13TicketService")
@interface TicketService : BaseService
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework25TicketTransmissionService")
@interface TicketTransmissionService : BaseService
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework14TokenValidator")
@interface TokenValidator : BaseService
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
