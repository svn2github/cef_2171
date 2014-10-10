// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/ctocpp/browser_process_handler_ctocpp.h"
#include "libcef_dll/ctocpp/print_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefBrowserProcessHandlerCToCpp::OnContextInitialized() {
  if (CEF_MEMBER_MISSING(struct_, on_context_initialized))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->on_context_initialized(struct_);
}

void CefBrowserProcessHandlerCToCpp::OnBeforeChildProcessLaunch(
    CefRefPtr<CefCommandLine> command_line) {
  if (CEF_MEMBER_MISSING(struct_, on_before_child_process_launch))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: command_line; type: refptr_diff
  DCHECK(command_line.get());
  if (!command_line.get())
    return;

  // Execute
  struct_->on_before_child_process_launch(struct_,
      CefCommandLineCppToC::Wrap(command_line));
}

void CefBrowserProcessHandlerCToCpp::OnRenderProcessThreadCreated(
    CefRefPtr<CefListValue> extra_info) {
  if (CEF_MEMBER_MISSING(struct_, on_render_process_thread_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extra_info; type: refptr_diff
  DCHECK(extra_info.get());
  if (!extra_info.get())
    return;

  // Execute
  struct_->on_render_process_thread_created(struct_,
      CefListValueCppToC::Wrap(extra_info));
}

CefRefPtr<CefPrintHandler> CefBrowserProcessHandlerCToCpp::GetPrintHandler() {
  if (CEF_MEMBER_MISSING(struct_, get_print_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_print_handler_t* _retval = struct_->get_print_handler(struct_);

  // Return type: refptr_same
  return CefPrintHandlerCToCpp::Wrap(_retval);
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefBrowserProcessHandlerCToCpp,
    CefBrowserProcessHandler, cef_browser_process_handler_t>::DebugObjCt = 0;
#endif

