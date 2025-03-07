#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0.3 effective-5.10 (swiftlang-6.0.3.1.10 clang-1600.0.30.1)
#ifndef SWIFTTAGLIB_SWIFT_H
#define SWIFTTAGLIB_SWIFT_H
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
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
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
#pragma clang diagnostic pop
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
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SwiftTagLib",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
// Allow user to find the header using additional include paths
#if __has_include(<swiftToCxx/_SwiftCxxInteroperability.h>)
#include <swiftToCxx/_SwiftCxxInteroperability.h>
// Look for the C++ interop support header relative to clang's resource dir:
//  '<toolchain>/usr/lib/clang/<version>/include/../../../swift/swiftToCxx'.
#elif __has_include(<../../../swift/swiftToCxx/_SwiftCxxInteroperability.h>)
#include <../../../swift/swiftToCxx/_SwiftCxxInteroperability.h>
#elif __has_include(<../../../../../lib/swift/swiftToCxx/_SwiftCxxInteroperability.h>)
//  '<toolchain>/usr/local/lib/clang/<version>/include/../../../../../lib/swift/swiftToCxx'.
#include <../../../../../lib/swift/swiftToCxx/_SwiftCxxInteroperability.h>
#endif
#pragma clang diagnostic pop
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
#endif

#ifdef SWIFT_SYMBOL
#undef SWIFT_SYMBOL
#endif
#define SWIFT_SYMBOL(usrValue) SWIFT_SYMBOL_MODULE_USR("SwiftTagLib", usrValue)
#ifndef SWIFT_PRINTED_CORE
#define SWIFT_PRINTED_CORE
namespace swift SWIFT_PRIVATE_ATTR {

namespace _impl {

#ifdef __cplusplus
extern "C" {
#endif

// Swift type metadata response type.
struct MetadataResponseTy {
  void * _Null_unspecified _0;
  uint64_t _1;
};
// Swift type metadata request type.
typedef uint64_t MetadataRequestTy;

#if __cplusplus > 201402L
#  define SWIFT_NOEXCEPT_FUNCTION_PTR noexcept
#else
#  define SWIFT_NOEXCEPT_FUNCTION_PTR
#endif

using ValueWitnessInitializeBufferWithCopyOfBufferTy = void * _Nonnull(* __ptrauth_swift_value_witness_function_pointer(55882))(void * _Nonnull, void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessDestroyTy = void(* __ptrauth_swift_value_witness_function_pointer(1272))(void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessInitializeWithCopyTy = void * _Nonnull(* __ptrauth_swift_value_witness_function_pointer(58298))(void * _Nonnull, void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessAssignWithCopyTy = void * _Nonnull(* __ptrauth_swift_value_witness_function_pointer(34641))(void * _Nonnull, void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessInitializeWithTakeTy = void * _Nonnull(* __ptrauth_swift_value_witness_function_pointer(18648))(void * _Nonnull, void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessAssignWithTakeTy = void * _Nonnull(* __ptrauth_swift_value_witness_function_pointer(61402))(void * _Nonnull, void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessGetEnumTagSinglePayloadTy = unsigned(* __ptrauth_swift_value_witness_function_pointer(24816))(const void * _Nonnull, unsigned, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using ValueWitnessStoreEnumTagSinglePayloadTy = void(* __ptrauth_swift_value_witness_function_pointer(41169))(void * _Nonnull, unsigned, unsigned, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;

struct ValueWitnessTable {
  ValueWitnessInitializeBufferWithCopyOfBufferTy _Nonnull initializeBufferWithCopyOfBuffer;
  ValueWitnessDestroyTy _Nonnull destroy;
  ValueWitnessInitializeWithCopyTy _Nonnull initializeWithCopy;
  ValueWitnessAssignWithCopyTy _Nonnull assignWithCopy;
  ValueWitnessInitializeWithTakeTy _Nonnull initializeWithTake;
  ValueWitnessAssignWithTakeTy _Nonnull assignWithTake;
  ValueWitnessGetEnumTagSinglePayloadTy _Nonnull getEnumTagSinglePayload;
  ValueWitnessStoreEnumTagSinglePayloadTy _Nonnull storeEnumTagSinglePayload;
  size_t size;
  size_t stride;
  unsigned flags;
  unsigned extraInhabitantCount;

  constexpr size_t getAlignment() const { return (flags & 255) + 1; }
};

using EnumValueWitnessGetEnumTagTy = unsigned(* __ptrauth_swift_value_witness_function_pointer(41909))(const void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using EnumValueWitnessDestructiveProjectEnumDataTy = void(* __ptrauth_swift_value_witness_function_pointer(1053))(void * _Nonnull, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;
using EnumValueWitnessDestructiveInjectEnumTagTy = void(* __ptrauth_swift_value_witness_function_pointer(45796))(void * _Nonnull, unsigned, void * _Nonnull) SWIFT_NOEXCEPT_FUNCTION_PTR;

struct EnumValueWitnessTable {
  ValueWitnessTable vwTable;
  EnumValueWitnessGetEnumTagTy _Nonnull getEnumTag;
  EnumValueWitnessDestructiveProjectEnumDataTy _Nonnull destructiveProjectEnumData;
  EnumValueWitnessDestructiveInjectEnumTagTy _Nonnull destructiveInjectEnumTag;
};

#undef SWIFT_NOEXCEPT_FUNCTION_PTR


// type metadata address for Bool.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $sSbN;
// type metadata address for Int8.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss4Int8VN;
// type metadata address for UInt8.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss5UInt8VN;
// type metadata address for Int16.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss5Int16VN;
// type metadata address for UInt16.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss6UInt16VN;
// type metadata address for Int32.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss5Int32VN;
// type metadata address for UInt32.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss6UInt32VN;
// type metadata address for Int64.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss5Int64VN;
// type metadata address for UInt64.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss6UInt64VN;
// type metadata address for Float.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $sSfN;
// type metadata address for Double.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $sSdN;
// type metadata address for OpaquePointer.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $ss13OpaquePointerVN;
// type metadata address for Int.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $sSiN;
// type metadata address for UInt.
SWIFT_IMPORT_STDLIB_SYMBOL extern size_t $sSuN;

#ifdef __cplusplus
}
#endif


} // namespace _impl


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<>
static inline const constexpr bool isUsableInGenericContext<bool> = true;

template<>
struct TypeMetadataTrait<bool> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$sSbN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<int8_t> = true;

template<>
struct TypeMetadataTrait<int8_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss4Int8VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<uint8_t> = true;

template<>
struct TypeMetadataTrait<uint8_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss5UInt8VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<int16_t> = true;

template<>
struct TypeMetadataTrait<int16_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss5Int16VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<uint16_t> = true;

template<>
struct TypeMetadataTrait<uint16_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss6UInt16VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<int32_t> = true;

template<>
struct TypeMetadataTrait<int32_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss5Int32VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<uint32_t> = true;

template<>
struct TypeMetadataTrait<uint32_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss6UInt32VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<int64_t> = true;

template<>
struct TypeMetadataTrait<int64_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss5Int64VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<uint64_t> = true;

template<>
struct TypeMetadataTrait<uint64_t> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss6UInt64VN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<float> = true;

template<>
struct TypeMetadataTrait<float> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$sSfN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<double> = true;

template<>
struct TypeMetadataTrait<double> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$sSdN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<void *> = true;

template<>
struct TypeMetadataTrait<void *> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$ss13OpaquePointerVN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<swift::Int> = true;

template<>
struct TypeMetadataTrait<swift::Int> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$sSiN;
  }
};

template<>
static inline const constexpr bool isUsableInGenericContext<swift::UInt> = true;

template<>
struct TypeMetadataTrait<swift::UInt> {
  static SWIFT_INLINE_THUNK void * _Nonnull getTypeMetadata() {
    return &_impl::$sSuN;
  }
};

#pragma clang diagnostic pop

} // namespace swift

#endif
#endif
#ifdef __cplusplus
namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {
namespace _impl {
extern "C" {
#endif

SWIFT_EXTERN void $s11SwiftTagLib9AudioFileV6formatAC6FormatOvg(SWIFT_INDIRECT_RESULT void * _Nonnull, SWIFT_CONTEXT const void * _Nonnull _self) SWIFT_NOEXCEPT SWIFT_CALL; // _
SWIFT_EXTERN void $s11SwiftTagLib9AudioFileV8metadataAC8MetadataVvg(SWIFT_INDIRECT_RESULT void * _Nonnull, SWIFT_CONTEXT const void * _Nonnull _self) SWIFT_NOEXCEPT SWIFT_CALL; // _
SWIFT_EXTERN void $s11SwiftTagLib9AudioFileV8metadataAC8MetadataVvs(const void * _Nonnull value, SWIFT_CONTEXT void * _Nonnull _self) SWIFT_NOEXCEPT SWIFT_CALL; // _
SWIFT_EXTERN void $s11SwiftTagLib9AudioFileV10propertiesAC10PropertiesVvg(SWIFT_INDIRECT_RESULT void * _Nonnull, SWIFT_CONTEXT const void * _Nonnull _self) SWIFT_NOEXCEPT SWIFT_CALL; // _

#ifdef __cplusplus
}
}
}
namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {



class SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV6FormatO") Format;
} // end namespace 

namespace swift SWIFT_PRIVATE_ATTR {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<>
static inline const constexpr bool isUsableInGenericContext<SwiftTagLib::Format> = true;
#pragma clang diagnostic pop
} // namespace swift

namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {
class SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV8MetadataV") Metadata;
} // end namespace 

namespace swift SWIFT_PRIVATE_ATTR {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<>
static inline const constexpr bool isUsableInGenericContext<SwiftTagLib::Metadata> = true;
#pragma clang diagnostic pop
} // namespace swift

namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {
class SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV10PropertiesV") Properties;
} // end namespace 

namespace swift SWIFT_PRIVATE_ATTR {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<>
static inline const constexpr bool isUsableInGenericContext<SwiftTagLib::Properties> = true;
#pragma clang diagnostic pop
} // namespace swift

namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {
class SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV") AudioFile;
} // end namespace 

namespace swift SWIFT_PRIVATE_ATTR {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<>
static inline const constexpr bool isUsableInGenericContext<SwiftTagLib::AudioFile> = true;
#pragma clang diagnostic pop
} // namespace swift

namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {
namespace _impl {

class _impl_AudioFile;

// Type metadata accessor for AudioFile
SWIFT_EXTERN swift::_impl::MetadataResponseTy $s11SwiftTagLib9AudioFileVMa(swift::_impl::MetadataRequestTy) SWIFT_NOEXCEPT SWIFT_CALL;


} // namespace _impl

class SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV") AudioFile final {
public:
  SWIFT_INLINE_THUNK ~AudioFile() noexcept {
    auto metadata = _impl::$s11SwiftTagLib9AudioFileVMa(0);
    auto *vwTableAddr = reinterpret_cast<swift::_impl::ValueWitnessTable **>(metadata._0) - 1;
#ifdef __arm64e__
    auto *vwTable = reinterpret_cast<swift::_impl::ValueWitnessTable *>(ptrauth_auth_data(reinterpret_cast<void *>(*vwTableAddr), ptrauth_key_process_independent_data, ptrauth_blend_discriminator(vwTableAddr, 11839)));
#else
    auto *vwTable = *vwTableAddr;
#endif
    vwTable->destroy(_getOpaquePointer(), metadata._0);
  }
  SWIFT_INLINE_THUNK AudioFile(const AudioFile &other) noexcept {
    auto metadata = _impl::$s11SwiftTagLib9AudioFileVMa(0);
    auto *vwTableAddr = reinterpret_cast<swift::_impl::ValueWitnessTable **>(metadata._0) - 1;
#ifdef __arm64e__
    auto *vwTable = reinterpret_cast<swift::_impl::ValueWitnessTable *>(ptrauth_auth_data(reinterpret_cast<void *>(*vwTableAddr), ptrauth_key_process_independent_data, ptrauth_blend_discriminator(vwTableAddr, 11839)));
#else
    auto *vwTable = *vwTableAddr;
#endif
    _storage = swift::_impl::OpaqueStorage(vwTable->size, vwTable->getAlignment());
    vwTable->initializeWithCopy(_getOpaquePointer(), const_cast<char *>(other._getOpaquePointer()), metadata._0);
  }
  SWIFT_INLINE_THUNK AudioFile &operator =(const AudioFile &other) noexcept {
    auto metadata = _impl::$s11SwiftTagLib9AudioFileVMa(0);
    auto *vwTableAddr = reinterpret_cast<swift::_impl::ValueWitnessTable **>(metadata._0) - 1;
#ifdef __arm64e__
    auto *vwTable = reinterpret_cast<swift::_impl::ValueWitnessTable *>(ptrauth_auth_data(reinterpret_cast<void *>(*vwTableAddr), ptrauth_key_process_independent_data, ptrauth_blend_discriminator(vwTableAddr, 11839)));
#else
    auto *vwTable = *vwTableAddr;
#endif
    vwTable->assignWithCopy(_getOpaquePointer(), const_cast<char *>(other._getOpaquePointer()), metadata._0);
  return *this;
  }
  SWIFT_INLINE_THUNK AudioFile &operator =(AudioFile &&other) = delete;
  [[noreturn]] SWIFT_INLINE_PRIVATE_HELPER AudioFile(AudioFile &&) noexcept {
  swift::_impl::_fatalError_Cxx_move_of_Swift_value_type_not_supported_yet();
  swift::_impl::_swift_stdlib_reportFatalError("swift", 5, "C++ does not support moving a Swift value yet", 45, 0);
  abort();
  }
  SWIFT_INLINE_THUNK Format getFormat() const SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV6formatAC6FormatOvp");
  SWIFT_INLINE_THUNK Metadata getMetadata() const SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV8metadataAC8MetadataVvp");
  SWIFT_INLINE_THUNK void setMetadata(const Metadata& value) SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV8metadataAC8MetadataVvp");
  SWIFT_INLINE_THUNK Properties getProperties() const SWIFT_SYMBOL("s:11SwiftTagLib9AudioFileV10propertiesAC10PropertiesVvp");
private:
  SWIFT_INLINE_THUNK AudioFile(swift::_impl::ValueWitnessTable * _Nonnull vwTable) noexcept : _storage(vwTable->size, vwTable->getAlignment()) {}
  static SWIFT_INLINE_THUNK AudioFile _make() noexcept {
    auto metadata = _impl::$s11SwiftTagLib9AudioFileVMa(0);
    auto *vwTableAddr = reinterpret_cast<swift::_impl::ValueWitnessTable **>(metadata._0) - 1;
#ifdef __arm64e__
    auto *vwTable = reinterpret_cast<swift::_impl::ValueWitnessTable *>(ptrauth_auth_data(reinterpret_cast<void *>(*vwTableAddr), ptrauth_key_process_independent_data, ptrauth_blend_discriminator(vwTableAddr, 11839)));
#else
    auto *vwTable = *vwTableAddr;
#endif
    return AudioFile(vwTable);
  }
  SWIFT_INLINE_THUNK const char * _Nonnull _getOpaquePointer() const noexcept { return _storage.getOpaquePointer(); }
  SWIFT_INLINE_THUNK char * _Nonnull _getOpaquePointer() noexcept { return _storage.getOpaquePointer(); }

  swift::_impl::OpaqueStorage _storage;
  friend class _impl::_impl_AudioFile;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-identifier"
  typedef char $s11SwiftTagLib9AudioFileVD;
  static inline constexpr $s11SwiftTagLib9AudioFileVD __swift_mangled_name = 0;
#pragma clang diagnostic pop
#pragma clang diagnostic pop
};

namespace _impl {

class _impl_AudioFile {
public:
  static SWIFT_INLINE_THUNK char * _Nonnull getOpaquePointer(AudioFile &object) { return object._getOpaquePointer(); }
  static SWIFT_INLINE_THUNK const char * _Nonnull getOpaquePointer(const AudioFile &object) { return object._getOpaquePointer(); }
  template<class T>
  static SWIFT_INLINE_PRIVATE_HELPER AudioFile returnNewValue(T callable) {
    auto result = AudioFile::_make();
    callable(result._getOpaquePointer());
    return result;
  }
  static SWIFT_INLINE_THUNK void initializeWithTake(char * _Nonnull destStorage, char * _Nonnull srcStorage) {
    auto metadata = _impl::$s11SwiftTagLib9AudioFileVMa(0);
    auto *vwTableAddr = reinterpret_cast<swift::_impl::ValueWitnessTable **>(metadata._0) - 1;
#ifdef __arm64e__
    auto *vwTable = reinterpret_cast<swift::_impl::ValueWitnessTable *>(ptrauth_auth_data(reinterpret_cast<void *>(*vwTableAddr), ptrauth_key_process_independent_data, ptrauth_blend_discriminator(vwTableAddr, 11839)));
#else
    auto *vwTable = *vwTableAddr;
#endif
    vwTable->initializeWithTake(destStorage, srcStorage, metadata._0);
  }
};

} // namespace _impl

} // end namespace 

namespace swift SWIFT_PRIVATE_ATTR {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<>
struct TypeMetadataTrait<SwiftTagLib::AudioFile> {
  static SWIFT_INLINE_PRIVATE_HELPER void * _Nonnull getTypeMetadata() {
    return SwiftTagLib::_impl::$s11SwiftTagLib9AudioFileVMa(0)._0;
  }
};
namespace _impl{
template<>
static inline const constexpr bool isValueType<SwiftTagLib::AudioFile> = true;
template<>
static inline const constexpr bool isOpaqueLayout<SwiftTagLib::AudioFile> = true;
template<>
struct implClassFor<SwiftTagLib::AudioFile> { using type = SwiftTagLib::_impl::_impl_AudioFile; };
} // namespace
#pragma clang diagnostic pop
} // namespace swift

namespace SwiftTagLib SWIFT_PRIVATE_ATTR SWIFT_SYMBOL_MODULE("SwiftTagLib") {


































  SWIFT_INLINE_THUNK Format AudioFile::getFormat() const {
  return _impl::_impl_Format::returnNewValue([&](char * _Nonnull result) SWIFT_INLINE_THUNK_ATTRIBUTES {
    _impl::$s11SwiftTagLib9AudioFileV6formatAC6FormatOvg(result, _getOpaquePointer());
  });
  }
  SWIFT_INLINE_THUNK Metadata AudioFile::getMetadata() const {
  return _impl::_impl_Metadata::returnNewValue([&](char * _Nonnull result) SWIFT_INLINE_THUNK_ATTRIBUTES {
    _impl::$s11SwiftTagLib9AudioFileV8metadataAC8MetadataVvg(result, _getOpaquePointer());
  });
  }
  SWIFT_INLINE_THUNK void AudioFile::setMetadata(const Metadata& value) {
  alignas(alignof(Metadata)) char copyBuffer_consumedParamCopy_value[sizeof(Metadata)];
  auto &consumedParamCopy_value = *(new(copyBuffer_consumedParamCopy_value) Metadata(value));
  swift::_impl::ConsumedValueStorageDestroyer<Metadata> storageGuard_consumedParamCopy_value(consumedParamCopy_value);
  _impl::$s11SwiftTagLib9AudioFileV8metadataAC8MetadataVvs(_impl::_impl_Metadata::getOpaquePointer(consumedParamCopy_value), _getOpaquePointer());
  }
  SWIFT_INLINE_THUNK Properties AudioFile::getProperties() const {
  return _impl::_impl_Properties::returnNewValue([&](char * _Nonnull result) SWIFT_INLINE_THUNK_ATTRIBUTES {
    _impl::$s11SwiftTagLib9AudioFileV10propertiesAC10PropertiesVvg(result, _getOpaquePointer());
  });
  }

} // namespace SwiftTagLib

#undef SWIFT_SYMBOL
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
