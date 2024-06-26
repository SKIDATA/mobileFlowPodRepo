#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
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
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
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



SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework11DelayConfig")
@interface DelayConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

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
/// InsufficientBattery
/// Error is thrown if the current battery level won’t be sufficient for an skiing day
  MobileFlowErrorInsufficientBattery = 4,
/// InvalidMobileFlowToken
/// Error is thown if the plugin is initialized with an invalid token.
  MobileFlowErrorInvalidMobileFlowToken = 5,
/// InvalidTicketURL
/// Error which the downloadTicket function can throw if the passed URL is no valid URL or no ticket could be downloaded from this URL.
  MobileFlowErrorInvalidTicketURL = 6,
/// LocationPermissionMissing
/// If the plugin is missing the location permission which is required for the plugin to work.
  MobileFlowErrorLocationPermissionMissing = 7,
/// LocationPrecisePermissionMissing
/// If the plugin is missing the precisse location permission which is required for the plugin to work.
  MobileFlowErrorLocationPrecisePermissionMissing = 8,
/// PassageTimedOut
/// If the ticket validation was successful but no passage has been detected at the gate for a certain timeout period. This only means that no person passed the gate which was activated be this ticket.
  MobileFlowErrorPassageTimedOut = 9,
/// PluginOutdated
/// Error which is thrown when the plugin has expired. An expiration of a plugin will be communicate separately to all integrators.
  MobileFlowErrorPluginOutdated = 10,
/// PluginOutdatedSoon
/// Error which can be used as an indication that a plugin version will expire soon. This could be used to inform the user to update soon.
  MobileFlowErrorPluginOutdatedSoon = 11,
/// RFIDDetected
/// Error which is thrown when the reader shortly before Mobile Flow transmitted a <code>MobileFlowEvent.gateAccessTriggered</code> event read an invalid RFID card
  MobileFlowErrorRFIDDetected = 12,
/// TicketCheckError_AreaFull
/// Error which is returned from the reader after ticket check. This is an indication that the area the user wanted to access is full.
  MobileFlowErrorTicketCheckError_AreaFull = 13,
/// TicketCheckError_Blocked
/// Error which is returned from the reader after ticket check. This is an indication that the ticket is blocked.
  MobileFlowErrorTicketCheckError_Blocked = 14,
/// TicketCheckError_DoubleUsage
/// Error which is returned from the reader after ticket check. This is an indication that a “ticket double usage” was detected”.
  MobileFlowErrorTicketCheckError_DoubleUsage = 15,
/// TicketCheckError_Expired
/// Error which is returned from the reader after ticket check. This is an indication that the ticket is expired.
  MobileFlowErrorTicketCheckError_Expired = 16,
/// TicketCheckError_TicketUnknown
/// Error which is returned from the reader after ticket check. This is an indication that the ticket is unknown.
  MobileFlowErrorTicketCheckError_TicketUnknown = 17,
/// TicketCheckError_TicketInvalidHereNow
/// Error which is returned from the reader after ticket check. This is an indication that the ticket is not valid here and/or now.
  MobileFlowErrorTicketCheckError_TicketInvalidHereNow = 18,
/// TicketCheckError_TooLessRemainingValue
/// Error which is returned from the reader after ticket check. This is an indication that the ticket has insufficient value (points, hours, days).
  MobileFlowErrorTicketCheckError_TooLessRemainingValue = 19,
/// TicketCheckError_WrongLocation
/// Error which is returned from the reader after ticket check. This is an indication that the ticket is not valid here.
  MobileFlowErrorTicketCheckError_WrongLocation = 20,
/// TicketCheckError_WrongTime
/// Error which is returned from the reader after ticket check. This is an indication that the ticket is not valid now.
  MobileFlowErrorTicketCheckError_WrongTime = 21,
/// TicketDownloadLimitExceeded
/// Error which is thrown when the download limit has been exceeded. This is an indication that the ticket has already been downloaded.
  MobileFlowErrorTicketDownloadLimitExceeded = 22,
/// TicketInvalidError
/// The ticket was rejected by the SKIDATA access system (i.e. the ticket is not valid at the entrance).
  MobileFlowErrorTicketInvalidError = 23,
/// TicketNotValidForCompany
/// If the phone is in the detection range of a gate which does not match the ticket which is currently in use.
  MobileFlowErrorTicketNotValidForCompany = 24,
/// TicketParsingError
/// Error which indicates that the ticket provided could bot be decoded. This could be caused by a faulty ticket or some missing information within the ticket.
  MobileFlowErrorTicketParsingError = 25,
/// TicketTransmissionError
/// Any error that occur in the ticket exchange process between phone and gate during a passage attempt.
  MobileFlowErrorTicketTransmissionError = 26,
/// UnsupportedDevice
/// The phone isn’t supported. If this error occurs <code>stopMobileFlow()</code> will be called. A list of unsupported phones will be provided.
  MobileFlowErrorUnsupportedDevice = 27,
};
static NSString * _Nonnull const MobileFlowErrorDomain = @"mobile_flow_plugin_ios_framework.MobileFlowError";

/// MobileFlowEvent represents the events that occur during the access process.
typedef SWIFT_ENUM(NSInteger, MobileFlowEvent, open) {
/// gateInUse
/// This event indicates that the gate is currently in use (i.e. a passage of another person is not yet completed).
  MobileFlowEventGateInUse = 0,
/// gateAccessCompleted
/// Event indicates that an access has been completed. This is the case when the person passed the gate.
  MobileFlowEventGateAccessCompleted = 1,
/// ticketValid
/// Event which indicates that the ticket sent to the access system is valid.
  MobileFlowEventTicketValid = 2,
/// ticketPassed
/// Event which indicates that the ticket is forwarded from the reader to the ticket evaluation system.
  MobileFlowEventTicketPassed = 3,
};

@protocol MobileFlowPluginDelegate;
@class NSNumber;

SWIFT_PROTOCOL("_TtP32mobile_flow_plugin_ios_framework14MobileFlowMock_")
@protocol MobileFlowMock
@property (nonatomic, readonly, strong) id <MobileFlowPluginDelegate> _Nonnull delegate;
/// Sends the events gateAccessTriggered, ticketValid and gateAccessCompleted to the event callback
/// with the corresponding delay in the passed [delayConfig] before each of the events.
- (void)cleanPassageWithDelayConfig:(DelayConfig * _Nonnull)delayConfig;
/// Sends the states off, preparing, running.
- (void)startupWithDelayConfig:(DelayConfig * _Nonnull)delayConfig;
/// Sends the states off, preparing, runningWithIssues.
- (void)offlineStartupWithDelayConfig:(DelayConfig * _Nonnull)delayConfig;
/// Sends a off, preparing, running, gateAccessTriggered, ticketValid, gateAccessCompleted
/// and off with the corresponding delay in the passed [delayConfig] before each of the events and states.
- (BOOL)fullLifecycleWithPassageWithDelayConfig:(DelayConfig * _Nonnull)delayConfig error:(NSError * _Nullable * _Nullable)error;
/// Sends a TICKET_INVALID error with the corresponding delay before the event.
- (void)ticketInvalidWithDelayConfig:(DelayConfig * _Nonnull)delayConfig;
/// Processes a collection of <code>MobileFlowEvent</code> objects using the specified delay configuration.
/// This function takes a collection of event objects of type <code>MobileFlowEvent</code> and delegates it to the definied delegate of type <code>MobileFlowDelegate</code> via the method <code>receivedEvent</code>,  utilizing the delay settings specified in <code>DelayConfig</code>.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     events: An array of <code>MobileFlowEvent</code> instances. Each event in this array represents a specific flow or action that needs to be processed.
///   </li>
///   <li>
///     delayConfig: A <code>DelayConfig</code> object that contains delay-related configurations. This configuration is used to modulate the processing of each event, potentially introducing delays or timing adjustments as required.
///   </li>
///   <li>
///     Example:
///     // Given
///     mock = try plugin.getMock()
///     let customEventsChain: [NSNumber] = [
///     MobileFlowEvent.gateInUse.nsNumber,
///     MobileFlowEvent.ticketValid.nsNumber,
///     MobileFlowEvent.gateAccessTriggered.nsNumber
///     ]
///   </li>
/// </ul>
/// // When
/// try! mock.customEvents(events: customEventsChain)
///
/// throws:
/// <code>MockProcessingError.unexpectedTypeForEventWrapperItem</code> if an item of an unexpected type is encountered.
- (BOOL)customEventsWithEvents:(NSArray<NSNumber *> * _Nonnull)events delayConfig:(DelayConfig * _Nonnull)delayConfig error:(NSError * _Nullable * _Nullable)error;
/// Processes an array of <code>MobileFlowError</code> objects using the provided delay configuration.
/// This function takes a collection of error objects of type <code>MobileFlowError</code> and delegates it to the definied delegate of type <code>MobileFlowDelegate</code> via the method <code>receivedError</code>,  utilizing the delay settings specified in <code>DelayConfig</code>.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     errors: An array of <code>MobileFlowError</code> instances. Each <code>MobileFlowError</code> represents a specific error condition encountered in a mobile flow process.
///   </li>
///   <li>
///     delayConfig: A <code>DelayConfig</code> object used to determine the timing and delay strategies when processing each error. This can be useful for managing error handling in a controlled and consistent manner, especially in asynchronous or time-sensitive operations.
///   </li>
///   <li>
///     Example:
///     // Given
///     mock = try plugin.getMock()
///     let customErrorChain: [NSNumber] = [
///     MobileFlowError.BluetoothNotActive.nsNumber,
///     MobileFlowError.TicketCheckError_Blocked.nsNumber,
///     MobileFlowError.TicketCheckError_Expired.nsNumber,
///     MobileFlowError.TicketCheckError_TicketUnknown.nsNumber,
///     ]
///     // When
///     try! mock.customErrors(errors: customErrorChain)
///   </li>
/// </ul>
///
/// throws:
/// <code>MockProcessingError.unexpectedTypeForErrorWrapperItem</code> if an item of an unexpected type is encountered.
- (BOOL)customErrorsWithErrors:(NSArray<NSNumber *> * _Nonnull)errors delayConfig:(DelayConfig * _Nonnull)delayConfig error:(NSError * _Nullable * _Nullable)error;
/// Processes a collection of <code>MobileFlowState</code> objects using the specified delay configuration.
/// This function takes a collection of state objects of type <code>MobileFlowState</code> and delegates it to the definied delegate of type <code>MobileFlowDelegate</code> via the method <code>mobileFlowStateChanged</code>,  utilizing the delay settings specified in <code>DelayConfig</code>.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     events: An array of <code>MobileFlowEvent</code> instances. Each event in this array represents a specific flow or action that needs to be processed.
///   </li>
///   <li>
///     delayConfig: A <code>DelayConfig</code> object that contains delay-related configurations. This configuration is used to modulate the processing of each event, potentially introducing delays or timing adjustments as required.
///   </li>
///   <li>
///     Example:
///     // Given
///     mock = try plugin.getMock()
///     let customStateChain: [NSNumber] = [
///     MobileFlowState.preparing.nsNumber,
///     MobileFlowState.off.nsNumber,
///     MobileFlowState.running.nsNumber,
///     ]
///   </li>
/// </ul>
/// // When
/// try! mock.customStates(states: customStateChain)
///
/// throws:
/// <code>MockProcessingError.unexpectedTypeForStateWrapperItem</code> if an item of an unexpected type is encountered.
- (BOOL)customStatesWithStates:(NSArray<NSNumber *> * _Nonnull)states delayConfig:(DelayConfig * _Nonnull)delayConfig error:(NSError * _Nullable * _Nullable)error;
/// Processes an array of objects that represent different types of error, event, or state.
/// This function iterates over a collection of <code>NSObject</code> items where each object is expected to be one of the custom types that conform to specific error, event, or state representations. The function will handle each object based on its actual type. The <code>delayConfig</code> parameter is used to manage any delays associated with processing these items.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     errorEventStateWrapperItems: This parameter is an array of <code>NSObject</code> items. Each item in the array must be an instance of either <code>MockErrorWrapper</code>, <code>MockStateWrapper</code>, or <code>MockEventWrapper</code> type
///   </li>
///   <li>
///     delayConfig: A <code>DelayConfig</code> object used to configure delay settings for processing each item.
///   </li>
///   <li>
///     Example:
///     mock = try plugin.getMock()
///     delayConfiguration = DelayConfig()
///     delayConfiguration.delayBeforeGateAccessTriggered = 3
///     let customEventChain: [NSObject] = [
///     MockEventWrapper(.gateAccessTriggered),
///     MockEventWrapper(.gateInUse),
///     MockEventWrapper(.gateAccessTriggered),
///     MockErrorWrapper(.TicketInvalidError),
///     MockEventWrapper(.gateAccessTriggered),
///     MockEventWrapper(.ticketValid),
///     MockEventWrapper(.gateAccessCompleted),
///     ]
///   </li>
/// </ul>
/// // When
/// try? mock.custom(errorEventStateWrapperItems: customEventChain, delayConfig: delayConfiguration)
///
/// throws:
/// <code>MockProcessingError.unexpectedTypeForErrorEventStateWrapperItems</code> if an item of an unexpected type is encountered.
- (BOOL)customWithErrorEventStateWrapperItems:(NSArray<NSObject *> * _Nonnull)errorEventStateWrapperItems delayConfig:(DelayConfig * _Nonnull)delayConfig error:(NSError * _Nullable * _Nullable)error;
@end

@class NSString;
@class MobileFlowTicket;
@class NSUUID;
enum MobileFlowState : NSInteger;

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
/// It won’t start multiple times. If <code>nil</code> is returned instead of an <code>UUID</code> the plugin-state didn’t change.
/// Before activating another ticket <code>stopMobileFlow</code> needs to be called.
/// \param ticket 
/// The ticket used to access the gate.
///
/// \param shouldVibrate 
/// tells the plugin whether it should vibrate on passage or not. By default the plugin doesn’t vibrate, if set to <code>true</code> it will vibrate on <code>ticketPassed</code> event.
///
///
/// returns:
///
/// The session id (<code>UUID</code>) which is returned, if the creation of the session was successful. The session id can be used in the future to trace issues of single user issues.
- (NSUUID * _Nullable)startMobileFlowWithTicket:(MobileFlowTicket * _Nonnull)ticket shouldVibrate:(BOOL)shouldVibrate SWIFT_WARN_UNUSED_RESULT;
- (NSUUID * _Nullable)startMobileFlowWithTicket:(MobileFlowTicket * _Nonnull)ticket SWIFT_WARN_UNUSED_RESULT;
/// This method stops the plugin.
/// It also stops the region scan.
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
- (enum MobileFlowState)getMobileFlowState SWIFT_WARN_UNUSED_RESULT;
///
/// returns:
/// the currently activated Ticket for this session.
- (MobileFlowTicket * _Nullable)getActivatedTicket SWIFT_WARN_UNUSED_RESULT;
/// This method returns true if the given model is supported for Mobile Flow
- (BOOL)isPhoneSupported SWIFT_WARN_UNUSED_RESULT;
/// Retrieves an instance of <code>MobileFlowMock</code>.
/// This method attempts to obtain a <code>MobileFlowMock</code> object. It may throw an error if the mock cannot be created or retrieved due to specific conditions or constraints.
///
/// throws:
/// An error of type <code>MockProcessingError</code> if the <code>MobileFlowDelegate</code> isn’t set.
///
/// returns:
/// A <code>MobileFlowMock</code> object representing a mock for mobile flow operations.
- (id <MobileFlowMock> _Nullable)getMockWith:(id <MobileFlowPluginDelegate> _Nonnull)delegate error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
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
- (void)mobileFlowStateChangedTo:(enum MobileFlowState)state;
@end


SWIFT_CLASS("_TtC32mobile_flow_plugin_ios_framework20MobileFlowPluginImpl")
@interface MobileFlowPluginImpl : NSObject <MobileFlowPlugin>
- (id <MobileFlowMock> _Nullable)getMockWith:(id <MobileFlowPluginDelegate> _Nonnull)delegate error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
+ (id <MobileFlowPlugin> _Nullable)getInstanceWithToken:(NSString * _Nonnull)token error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getPluginVersion SWIFT_WARN_UNUSED_RESULT;
- (void)setDelegate:(id <MobileFlowPluginDelegate> _Nonnull)delegate;
- (NSUUID * _Nullable)startMobileFlowWithTicket:(MobileFlowTicket * _Nonnull)ticket shouldVibrate:(BOOL)shouldVibrate SWIFT_WARN_UNUSED_RESULT;
- (NSUUID * _Nullable)startMobileFlowWithTicket:(MobileFlowTicket * _Nonnull)ticket SWIFT_WARN_UNUSED_RESULT;
- (void)stopMobileFlow;
- (void)downloadTicket:(NSString * _Nonnull)url;
- (NSString * _Nonnull)getPluginUUID SWIFT_WARN_UNUSED_RESULT;
- (enum MobileFlowState)getMobileFlowState SWIFT_WARN_UNUSED_RESULT;
- (MobileFlowTicket * _Nullable)getActivatedTicket SWIFT_WARN_UNUSED_RESULT;
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
@property (nonatomic, readonly, copy) NSString * _Nullable consumerCategoryName;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull validInCompanyIdsList;
@property (nonatomic, readonly, copy) NSDate * _Nonnull downloadTimeStampDate;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nullable)validAreaId validAreaName:(NSString * _Nullable)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nullable)productName validFrom:(NSDate * _Nullable)validFrom validTo:(NSDate * _Nullable)validTo psnr:(NSString * _Nullable)psnr image:(UIImage * _Nullable)image consumerCategoryName:(NSString * _Nullable)consumerCategoryName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithBarcode:(NSString * _Nonnull)barcode validAreaId:(NSString * _Nullable)validAreaId validAreaName:(NSString * _Nullable)validAreaName validInCompanyIds:(NSString * _Nonnull)validInCompanyIds productName:(NSString * _Nullable)productName validFrom:(NSDate * _Nullable)validFrom validTo:(NSDate * _Nullable)validTo psnr:(NSString * _Nullable)psnr consumerCategoryName:(NSString * _Nullable)consumerCategoryName OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





SWIFT_CLASS_NAMED("MockErrorWrapper")
@interface MockErrorWrapper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("MockEventWrapper")
@interface MockEventWrapper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("MockStateWrapper")
@interface MockStateWrapper : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
