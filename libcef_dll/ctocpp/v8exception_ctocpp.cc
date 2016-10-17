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

#include "libcef_dll/ctocpp/v8exception_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefString CefV8ExceptionCToCpp::GetMessage() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_message))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_message(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefV8ExceptionCToCpp::GetSourceLine() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_source_line))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_source_line(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefV8ExceptionCToCpp::GetScriptResourceName() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_script_resource_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_script_resource_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

int CefV8ExceptionCToCpp::GetLineNumber() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_line_number))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_line_number(_struct);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetStartPosition() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_start_position))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_start_position(_struct);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetEndPosition() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_end_position))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_end_position(_struct);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetStartColumn() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_start_column))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_start_column(_struct);

  // Return type: simple
  return _retval;
}

int CefV8ExceptionCToCpp::GetEndColumn() {
  cef_v8exception_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_end_column))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_end_column(_struct);

  // Return type: simple
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefV8ExceptionCToCpp::CefV8ExceptionCToCpp() {
}

template<> cef_v8exception_t* CefCToCpp<CefV8ExceptionCToCpp, CefV8Exception,
    cef_v8exception_t>::UnwrapDerived(CefWrapperType type,
    CefV8Exception* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefV8ExceptionCToCpp, CefV8Exception,
    cef_v8exception_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefV8ExceptionCToCpp, CefV8Exception,
    cef_v8exception_t>::kWrapperType = WT_V8EXCEPTION;
