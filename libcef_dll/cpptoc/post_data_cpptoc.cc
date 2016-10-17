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

#include <algorithm>
#include "libcef_dll/cpptoc/post_data_cpptoc.h"
#include "libcef_dll/cpptoc/post_data_element_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_post_data_t* cef_post_data_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefPostData> _retval = CefPostData::Create();

  // Return type: refptr_same
  return CefPostDataCppToC::Wrap(_retval);
}


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK post_data_is_read_only(struct _cef_post_data_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefPostDataCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK post_data_has_excluded_elements(
    struct _cef_post_data_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefPostDataCppToC::Get(self)->HasExcludedElements();

  // Return type: bool
  return _retval;
}

size_t CEF_CALLBACK post_data_get_element_count(struct _cef_post_data_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  size_t _retval = CefPostDataCppToC::Get(self)->GetElementCount();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK post_data_get_elements(struct _cef_post_data_t* self,
    size_t* elementsCount, struct _cef_post_data_element_t** elements) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: elements; type: refptr_vec_same_byref
  DCHECK(elementsCount && (*elementsCount == 0 || elements));
  if (!elementsCount || (*elementsCount > 0 && !elements))
    return;

  // Translate param: elements; type: refptr_vec_same_byref
  std::vector<CefRefPtr<CefPostDataElement> > elementsList;
  if (elementsCount && *elementsCount > 0 && elements) {
    for (size_t i = 0; i < *elementsCount; ++i) {
      elementsList.push_back(CefPostDataElementCppToC::Unwrap(elements[i]));
    }
  }

  // Execute
  CefPostDataCppToC::Get(self)->GetElements(
      elementsList);

  // Restore param: elements; type: refptr_vec_same_byref
  if (elementsCount && elements) {
    *elementsCount = std::min(elementsList.size(), *elementsCount);
    if (*elementsCount > 0) {
      for (size_t i = 0; i < *elementsCount; ++i) {
        elements[i] = CefPostDataElementCppToC::Wrap(elementsList[i]);
      }
    }
  }
}

int CEF_CALLBACK post_data_remove_element(struct _cef_post_data_t* self,
    struct _cef_post_data_element_t* element) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: element; type: refptr_same
  DCHECK(element);
  if (!element)
    return 0;

  // Execute
  bool _retval = CefPostDataCppToC::Get(self)->RemoveElement(
      CefPostDataElementCppToC::Unwrap(element));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK post_data_add_element(struct _cef_post_data_t* self,
    struct _cef_post_data_element_t* element) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: element; type: refptr_same
  DCHECK(element);
  if (!element)
    return 0;

  // Execute
  bool _retval = CefPostDataCppToC::Get(self)->AddElement(
      CefPostDataElementCppToC::Unwrap(element));

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK post_data_remove_elements(struct _cef_post_data_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefPostDataCppToC::Get(self)->RemoveElements();
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefPostDataCppToC::CefPostDataCppToC() {
  GetStruct()->is_read_only = post_data_is_read_only;
  GetStruct()->has_excluded_elements = post_data_has_excluded_elements;
  GetStruct()->get_element_count = post_data_get_element_count;
  GetStruct()->get_elements = post_data_get_elements;
  GetStruct()->remove_element = post_data_remove_element;
  GetStruct()->add_element = post_data_add_element;
  GetStruct()->remove_elements = post_data_remove_elements;
}

template<> CefRefPtr<CefPostData> CefCppToC<CefPostDataCppToC, CefPostData,
    cef_post_data_t>::UnwrapDerived(CefWrapperType type, cef_post_data_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCppToC<CefPostDataCppToC, CefPostData,
    cef_post_data_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefPostDataCppToC, CefPostData,
    cef_post_data_t>::kWrapperType = WT_POST_DATA;
