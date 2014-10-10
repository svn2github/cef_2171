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

#ifndef CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CLIENT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CLIENT_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_urlrequest.h"
#include "include/capi/cef_urlrequest_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefURLRequestClientCToCpp
    : public CefCToCpp<CefURLRequestClientCToCpp, CefURLRequestClient,
        cef_urlrequest_client_t> {
 public:
  explicit CefURLRequestClientCToCpp(cef_urlrequest_client_t* str)
      : CefCToCpp<CefURLRequestClientCToCpp, CefURLRequestClient,
          cef_urlrequest_client_t>(str) {}
  virtual ~CefURLRequestClientCToCpp() {}

  // CefURLRequestClient methods
  virtual void OnRequestComplete(CefRefPtr<CefURLRequest> request) OVERRIDE;
  virtual void OnUploadProgress(CefRefPtr<CefURLRequest> request,
      uint64 current, uint64 total) OVERRIDE;
  virtual void OnDownloadProgress(CefRefPtr<CefURLRequest> request,
      uint64 current, uint64 total) OVERRIDE;
  virtual void OnDownloadData(CefRefPtr<CefURLRequest> request,
      const void* data, size_t data_length) OVERRIDE;
  virtual bool GetAuthCredentials(bool isProxy, const CefString& host, int port,
      const CefString& realm, const CefString& scheme,
      CefRefPtr<CefAuthCallback> callback) OVERRIDE;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_URLREQUEST_CLIENT_CTOCPP_H_

