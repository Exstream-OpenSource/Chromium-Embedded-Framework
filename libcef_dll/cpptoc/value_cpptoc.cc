// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/cpptoc/value_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_value_t* cef_value_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefValue> _retval = CefValue::Create();

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK value_is_valid(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_is_owned(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->IsOwned();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_is_read_only(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_is_same(struct _cef_value_t* self,
    struct _cef_value_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->IsSame(
      CefValueCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_is_equal(struct _cef_value_t* self,
    struct _cef_value_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->IsEqual(
      CefValueCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _cef_value_t* CEF_CALLBACK value_copy(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefValue> _retval = CefValueCppToC::Get(self)->Copy();

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

cef_value_type_t CEF_CALLBACK value_get_type(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return VTYPE_INVALID;

  // Execute
  cef_value_type_t _retval = CefValueCppToC::Get(self)->GetType();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK value_get_bool(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->GetBool();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_get_int(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefValueCppToC::Get(self)->GetInt();

  // Return type: simple
  return _retval;
}

double CEF_CALLBACK value_get_double(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  double _retval = CefValueCppToC::Get(self)->GetDouble();

  // Return type: simple
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK value_get_string(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefValueCppToC::Get(self)->GetString();

  // Return type: string
  return _retval.DetachToUserFree();
}

struct _cef_binary_value_t* CEF_CALLBACK value_get_binary(
    struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefValueCppToC::Get(self)->GetBinary();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

struct _cef_dictionary_value_t* CEF_CALLBACK value_get_dictionary(
    struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDictionaryValue> _retval = CefValueCppToC::Get(
      self)->GetDictionary();

  // Return type: refptr_same
  return CefDictionaryValueCppToC::Wrap(_retval);
}

struct _cef_list_value_t* CEF_CALLBACK value_get_list(
    struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefListValue> _retval = CefValueCppToC::Get(self)->GetList();

  // Return type: refptr_same
  return CefListValueCppToC::Wrap(_retval);
}

int CEF_CALLBACK value_set_null(struct _cef_value_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetNull();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_bool(struct _cef_value_t* self, int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetBool(
      value?true:false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_int(struct _cef_value_t* self, int value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetInt(
      value);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_double(struct _cef_value_t* self, double value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetDouble(
      value);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_string(struct _cef_value_t* self,
    const cef_string_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Unverified params: value

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetString(
      CefString(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_binary(struct _cef_value_t* self,
    struct _cef_binary_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetBinary(
      CefBinaryValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_dictionary(struct _cef_value_t* self,
    struct _cef_dictionary_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetDictionary(
      CefDictionaryValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK value_set_list(struct _cef_value_t* self,
    struct _cef_list_value_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value)
    return 0;

  // Execute
  bool _retval = CefValueCppToC::Get(self)->SetList(
      CefListValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefValueCppToC::CefValueCppToC() {
  GetStruct()->is_valid = value_is_valid;
  GetStruct()->is_owned = value_is_owned;
  GetStruct()->is_read_only = value_is_read_only;
  GetStruct()->is_same = value_is_same;
  GetStruct()->is_equal = value_is_equal;
  GetStruct()->copy = value_copy;
  GetStruct()->get_type = value_get_type;
  GetStruct()->get_bool = value_get_bool;
  GetStruct()->get_int = value_get_int;
  GetStruct()->get_double = value_get_double;
  GetStruct()->get_string = value_get_string;
  GetStruct()->get_binary = value_get_binary;
  GetStruct()->get_dictionary = value_get_dictionary;
  GetStruct()->get_list = value_get_list;
  GetStruct()->set_null = value_set_null;
  GetStruct()->set_bool = value_set_bool;
  GetStruct()->set_int = value_set_int;
  GetStruct()->set_double = value_set_double;
  GetStruct()->set_string = value_set_string;
  GetStruct()->set_binary = value_set_binary;
  GetStruct()->set_dictionary = value_set_dictionary;
  GetStruct()->set_list = value_set_list;
}

template<> CefRefPtr<CefValue> CefCppToC<CefValueCppToC, CefValue,
    cef_value_t>::UnwrapDerived(CefWrapperType type, cef_value_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCppToC<CefValueCppToC, CefValue,
    cef_value_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefValueCppToC, CefValue,
    cef_value_t>::kWrapperType = WT_VALUE;
