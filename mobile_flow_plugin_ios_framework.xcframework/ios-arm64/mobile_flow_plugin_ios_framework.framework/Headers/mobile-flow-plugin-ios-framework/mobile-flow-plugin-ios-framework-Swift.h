// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
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

/// @file
/// @author  Benjamin Bara - SKIDATA
/// @version 0.2
/// @section LICENSE
/// Copyright (c) SKIDATA GmbH 2022, all rights reserved.
/// Protected intellectual property.
/// Reverse-engineering prohibited by this protection.
typedef SWIFT_ENUM(NSInteger, MobileFlowError, open) {
  MobileFlowErrorLicenseNotActivatedError = 0,
  MobileFlowErrorLocationPermissionError = 1,
  MobileFlowErrorBluetoothPermissionError = 2,
  MobileFlowErrorBluetoothInactiveError = 3,
  MobileFlowErrorDeviceOfflineError = 4,
  MobileFlowErrorGatewayUnknownError = 5,
  MobileFlowErrorGatewayNotReachableError = 6,
  MobileFlowErrorGateNotReachableError = 7,
  MobileFlowErrorTicketDownloadError = 8,
  MobileFlowErrorTicketInvalidError = 9,
  MobileFlowErrorConfigurationError = 10,
  MobileFlowErrorInternalError = 11,
  MobileFlowErrorNoGateCommunication = 12,
  MobileFlowErrorTransmissionError = 13,
};
static NSString * _Nonnull const MobileFlowErrorDomain = @"mobile_flow_plugin_ios_framework.MobileFlowError";

typedef SWIFT_ENUM(NSInteger, MobileFlowEvent, open) {
  MobileFlowEventGateAccessTriggered = 0,
  MobileFlowEventGateInUse = 1,
  MobileFlowEventPassageCompleted = 2,
  MobileFlowEventPassageTimeout = 3,
};

/// MobileFlowLocalizationState represents the state of the plugin.
/// <ul>
///   <li>
///     the default value is <code>.off</code>.
///   </li>
///   <li>
///     if <code>startSkiing()</code> gets called, the state change to <code>preparing</code>
///   </li>
///   <li>
///     if the setup is completed, the state change from <code>preparing</code> to <code>running</code>
///   </li>
///   <li>
///     when <code>stopSkiing()</code> is called, the state turn back to <code>.off</code>
///   </li>
/// </ul>
typedef SWIFT_ENUM(NSInteger, MobileFlowLocalizationState, open) {
  MobileFlowLocalizationStateOff = 0,
  MobileFlowLocalizationStatePreparing = 1,
  MobileFlowLocalizationStateRunning = 2,
};

@protocol MobileFlowPluginDelegate;
@class MobileFlowTicket;
@class NSString;

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
+ (id <MobileFlowPlugin> _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
/// This method sets the delegate which is used on the respective events.
/// \param delegate 
/// The delegate to use.
///
- (void)setDelegate:(id <MobileFlowPluginDelegate> _Nonnull)delegate;
/// This method starts the plugin.
/// \param ticket 
/// The ticket used to access the gate.
///
- (void)startSkiingWithTicket:(MobileFlowTicket * _Nonnull)ticket;
/// This method stops the plugin.
/// It also stops the region scan.
- (void)stopSkiing;
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
/// This method return the current localizationState of the MobileFlow Plugin
- (enum MobileFlowLocalizationState)getLocalizationState SWIFT_WARN_UNUSED_RESULT;
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
- (void)localizationStateChangedTo:(enum MobileFlowLocalizationState)state;
/// This method is called when a notification should be presented to awake the locked screen
/// The method is only called if the device require a none idle mode for passing gates.
- (void)awakeScreen;
@end


/// Handles the ability to pass gates with digital tickets via short-range radio.
SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework20MobileFlowPluginImpl")
@interface MobileFlowPluginImpl : NSObject <MobileFlowPlugin>
- (NSString * _Nonnull)getPluginUUID SWIFT_WARN_UNUSED_RESULT;
/// To be used to get an instance of the plugin.
///
/// returns:
/// Instance of the <code>MobileFlowPlugin</code>
+ (id <MobileFlowPlugin> _Nonnull)getInstance SWIFT_WARN_UNUSED_RESULT;
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
/// returns the current localizationstate
- (enum MobileFlowLocalizationState)getLocalizationState SWIFT_WARN_UNUSED_RESULT;
/// Initialize the MobileFlowPlugin
/// <ul>
///   <li>
///     Set the observers.
///   </li>
///   <li>
///     Handle the subscription of the delegate observables
///   </li>
/// </ul>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Stopped the activity and allow a new start of the plugin. The stored elements get cleared.
- (void)stopSkiing;
@end



@class UIImage;
@class NSDate;

SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework16MobileFlowTicket")
@interface MobileFlowTicket : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull barcode;
@property (nonatomic, readonly, copy) NSString * _Nonnull validAreaId;
@property (nonatomic, readonly, copy) NSString * _Nonnull validAreaName;
@property (nonatomic, readonly, copy) NSString * _Nonnull validInCompanyIds;
@property (nonatomic, readonly, copy) NSString * _Nonnull productName;
@property (nonatomic, readonly, copy) NSString * _Nonnull validFrom;
@property (nonatomic, readonly, copy) NSString * _Nonnull validTo;
@property (nonatomic, readonly, copy) NSString * _Nonnull psnr;
@property (nonatomic, readonly, strong) UIImage * _Nullable image;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nullable validInCompanyIdsList;
@property (nonatomic, readonly, copy) NSDate * _Nullable validFromDate;
@property (nonatomic, readonly, copy) NSDate * _Nullable validToDate;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nonnull)validAreaId validAreaName:(NSString * _Nonnull)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nonnull)productName validFrom:(NSString * _Nonnull)validFrom validTo:(NSString * _Nonnull)validTo psnr:(NSString * _Nonnull)psnr image:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nonnull)validAreaId validAreaName:(NSString * _Nonnull)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nonnull)productName validFrom:(NSString * _Nonnull)validFrom validTo:(NSString * _Nonnull)validTo psnr:(NSString * _Nonnull)psnr;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
