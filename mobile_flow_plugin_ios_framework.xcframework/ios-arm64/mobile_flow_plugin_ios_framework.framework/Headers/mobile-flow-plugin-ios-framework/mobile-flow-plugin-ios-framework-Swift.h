#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreBluetooth;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="mobile_flow_plugin_ios_framework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// BleManager
/// for handling the scanning, connection, transmitting and response process based on the GATT Protocol.
SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework10BleManager")
@interface BleManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class CBCharacteristic;
@class BlePeripheral;
@class NSString;
@class NSData;
@class CBService;
@class NSNumber;

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
/// \param message the <code>String?</code>
///
- (void)blePeripheralWithError:(NSError * _Nonnull)error message:(NSString * _Nullable)message;
/// RSSI was read for a Peripheral
/// \param rssi the RSSI
///
/// \param blePeripheral the BlePeripheral
///
- (void)discoveringServices;
/// Name for BlePeripheral
/// \param name <code>String</code>
///
- (void)blePeripheralWithName:(NSString * _Nonnull)name;
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
- (void)blePerihperalWithDiscoveredCharacteristics:(NSArray<CBCharacteristic *> * _Nonnull)characteristics forService:(CBService * _Nonnull)_ blePeripheral:(BlePeripheral * _Nonnull)_;
/// ReadRssi from bleperipheral
/// \param readRssi rssi <code>NSNumber</code>
///
/// \param blePeripheral from  <code>BlePeripheral</code>
///
- (void)blePeripheralWithReadRssi:(NSNumber * _Nonnull)rssi blePeripheral:(BlePeripheral * _Nonnull)blePeripheral;
/// Error delegated from blePeripheral with <code>String?</code>
/// \param error <code>Error</code>
///
/// \param message <code>String?</code>
///
- (void)blePeripheralWithError:(NSError * _Nonnull)error message:(NSString * _Nullable)message;
/// Discovering of services is triggered
- (void)discoveringServices;
/// assign name to blePeripheral
/// \param name <code>String</code>
///
- (void)blePeripheralWithName:(NSString * _Nonnull)name;
@end

@class CBCentralManager;
@class CBPeripheral;

@interface BleManager (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <CBCentralManagerDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
/// New Peripheral discovered
/// <ul>
///   <li>
///     Parameters
///   </li>
///   <li>
///     central: the CentralManager for this UIView
///   </li>
///   <li>
///     peripheral: a discovered Peripheral
///   </li>
///   <li>
///     advertisementData: the Bluetooth GAP data discovered
///   </li>
///   <li>
///     rssi: the radio signal strength indicator for this Peripheral
///   </li>
/// </ul>
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


@class CBDescriptor;

@interface BlePeripheral (SWIFT_EXTENSION(mobile_flow_plugin_ios_framework)) <CBPeripheralDelegate>
/// Characteristic has been subscribed to or unsubscribed from
- (void)peripheral:(CBPeripheral * _Nonnull)_ didUpdateNotificationStateForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
/// Value was written to the Characteristic
- (void)peripheral:(CBPeripheral * _Nonnull)_ didWriteValueForDescriptor:(CBDescriptor * _Nonnull)_ error:(NSError * _Nullable)error;
/// Value downloaded from Characteristic on connected Peripheral
- (void)peripheral:(CBPeripheral * _Nonnull)_ didUpdateValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
@end




/// @file
/// @author  Benjamin Bara - SKIDATA
/// @version 0.2
/// @section LICENSE
/// Copyright (c) SKIDATA GmbH 2022, all rights reserved.
/// Protected intellectual property.
/// Reverse-engineering prohibited by this protection.
typedef SWIFT_ENUM(NSInteger, MobileFlowError, open) {
  MobileFlowErrorBluetoothNotActive = 0,
  MobileFlowErrorBluetoothPermissionMissing = 1,
  MobileFlowErrorDeviceOffline = 2,
  MobileFlowErrorGeneralError = 3,
  MobileFlowErrorInvalidMobileFlowToken = 4,
  MobileFlowErrorInvalidTicketURL = 5,
  MobileFlowErrorLocationPermissionMissing = 6,
  MobileFlowErrorPluginOutdated = 7,
  MobileFlowErrorPluginOutdatedSoon = 8,
  MobileFlowErrorTicketDownloadLimitExceeded = 9,
  MobileFlowErrorTicketInvalidError = 10,
  MobileFlowErrorTicketNotValidForCompany = 11,
  MobileFlowErrorTicketParsingError = 12,
  MobileFlowErrorTicketTransmissionError = 13,
  MobileFlowErrorUnsupportedDevice = 14,
};
static NSString * _Nonnull const MobileFlowErrorDomain = @"mobile_flow_plugin_ios_framework.MobileFlowError";

typedef SWIFT_ENUM(NSInteger, MobileFlowEvent, open) {
  MobileFlowEventGateAccessTriggered = 0,
  MobileFlowEventGateInUse = 1,
  MobileFlowEventGateAccessCompleted = 2,
  MobileFlowEventPassageTimeout = 3,
  MobileFlowEventTicketValid = 4,
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
+ (id <MobileFlowPlugin> _Nonnull)getInstanceWithToken:(NSString * _Nonnull)token SWIFT_WARN_UNUSED_RESULT;
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
/// This method is optional and can be used to activate region events.
/// The events can be received by adding the respective observers.
- (void)activateRegionScan;
/// This method deactivates the region scan.
/// It does nothing if skiing is started.
- (void)deactivateRegionScan;
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
/// This method is called if a new region is entered.
/// \param companyId 
/// The company id of the new region.
///
- (void)enteredRegion:(NSString * _Nonnull)companyId;
/// This method is called if a region is left.
/// \param companyId 
/// The company id of the left region.
///
- (void)leftRegion:(NSString * _Nonnull)companyId;
/// This method is called when the pluginState change
/// \param to state of type <code>MobileFlowLocalizationState</code>´
///
- (void)localizationStateChangedTo:(enum MobileFlowState)state SWIFT_DEPRECATED_MSG("", "mobileFlowStateChangedTo:");
- (void)mobileFlowStateChangedTo:(enum MobileFlowState)state;
/// This method is called when a notification should be presented to awake the locked screen
/// The method is only called if the device require a none idle mode for passing gates.
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
+ (id <MobileFlowPlugin> _Nonnull)getInstanceWithToken:(NSString * _Nonnull)token SWIFT_WARN_UNUSED_RESULT;
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
/// Activates the regionscan, to receive ble beacons.
/// Events get emited on:
/// <ul>
///   <li>
///     <code>enteredRegionSubject</code> when a new region is entered the cid is emited
///   </li>
///   <li>
///     <code>leftRegionSubject</code> when a region is
///   </li>
/// </ul>
- (void)activateRegionScan;
/// Deactivates the regionscan and reset the allocated ressources.
- (void)deactivateRegionScan;
/// Handles the download of the ticket.
/// Errors will be handled with the <code>delegation.receivedError</code>.
/// \param url of type <code>String</code> from where the ticket should be downloaded.
///
- (void)downloadTicket:(NSString * _Nonnull)url;
- (enum MobileFlowState)getLocalizationState SWIFT_WARN_UNUSED_RESULT;
- (enum MobileFlowState)getMobileFlowState SWIFT_WARN_UNUSED_RESULT;
/// Stopped the activity and allow a new start of the plugin. The stored elements get cleared.
- (void)stopSkiing;
- (void)stopMobileFlow;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MobileFlowLocalizationState represents the state of the plugin.
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
  MobileFlowStateOff = 0,
  MobileFlowStatePreparing = 1,
  MobileFlowStateRunning = 2,
  MobileFlowStateRunningWithIssues = 3,
};

@class NSDate;
@class UIImage;

SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework16MobileFlowTicket")
@interface MobileFlowTicket : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull barcode;
@property (nonatomic, readonly, copy) NSString * _Nonnull validAreaId;
@property (nonatomic, readonly, copy) NSString * _Nonnull validAreaName;
@property (nonatomic, readonly, copy) NSString * _Nonnull validInCompanyIds;
@property (nonatomic, readonly, copy) NSString * _Nonnull productName;
@property (nonatomic, readonly, copy) NSDate * _Nonnull validFrom;
@property (nonatomic, readonly, copy) NSDate * _Nonnull validTo;
@property (nonatomic, readonly, copy) NSString * _Nonnull psnr;
@property (nonatomic, readonly, strong) UIImage * _Nullable image;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull validInCompanyIdsList;
@property (nonatomic, readonly, copy) NSDate * _Nonnull downloadTimeStampDate;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nonnull)validAreaId validAreaName:(NSString * _Nonnull)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nonnull)productName validFrom:(NSDate * _Nonnull)validFrom validTo:(NSDate * _Nonnull)validTo psnr:(NSString * _Nonnull)psnr image:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nonnull)validAreaId validAreaName:(NSString * _Nonnull)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nonnull)productName validFrom:(NSDate * _Nonnull)validFrom validTo:(NSDate * _Nonnull)validTo psnr:(NSString * _Nonnull)psnr;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
