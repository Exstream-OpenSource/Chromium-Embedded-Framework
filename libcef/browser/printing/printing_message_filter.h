// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_PRINTING_PRINTING_MESSAGE_FILTER_H_
#define CEF_LIBCEF_BROWSER_PRINTING_PRINTING_MESSAGE_FILTER_H_

#include <stdint.h>

#include <string>

#include "base/compiler_specific.h"
#include "base/macros.h"
#include "build/build_config.h"
#include "content/public/browser/browser_message_filter.h"

#if defined(OS_WIN)
#include "base/memory/shared_memory.h"
#endif

struct PrintHostMsg_ScriptedPrint_Params;

namespace base {
class DictionaryValue;
class FilePath;
}

namespace content {
class WebContents;
}

namespace printing {

class PrintJobManager;
class PrintQueriesQueue;
class PrinterQuery;

// This class filters out incoming printing related IPC messages for the
// renderer process on the IPC thread.
class CefPrintingMessageFilter : public content::BrowserMessageFilter {
 public:
  explicit CefPrintingMessageFilter(int render_process_id);

  // content::BrowserMessageFilter methods.
  void OverrideThreadForMessage(const IPC::Message& message,
                                content::BrowserThread::ID* thread) override;
  bool OnMessageReceived(const IPC::Message& message) override;

 private:
  ~CefPrintingMessageFilter() override;

  // GetPrintSettingsForRenderView must be called via PostTask and
  // base::Bind.  Collapse the settings-specific params into a
  // struct to avoid running into issues with too many params
  // to base::Bind.
  struct GetPrintSettingsForRenderViewParams;

  // Checks if printing is enabled.
  void OnIsPrintingEnabled(bool* is_enabled);

  // Get the default print setting.
  void OnGetDefaultPrintSettings(IPC::Message* reply_msg);
  void OnGetDefaultPrintSettingsReply(scoped_refptr<PrinterQuery> printer_query,
                                      IPC::Message* reply_msg);

  // The renderer host have to show to the user the print dialog and returns
  // the selected print settings. The task is handled by the print worker
  // thread and the UI thread. The reply occurs on the IO thread.
  void OnScriptedPrint(const PrintHostMsg_ScriptedPrint_Params& params,
                       IPC::Message* reply_msg);
  void OnScriptedPrintReply(scoped_refptr<PrinterQuery> printer_query,
                            IPC::Message* reply_msg);

  // Modify the current print settings based on |job_settings|. The task is
  // handled by the print worker thread and the UI thread. The reply occurs on
  // the IO thread.
  void OnUpdatePrintSettings(int document_cookie,
                             const base::DictionaryValue& job_settings,
                             IPC::Message* reply_msg);
  void OnUpdatePrintSettingsReply(scoped_refptr<PrinterQuery> printer_query,
                                  IPC::Message* reply_msg);

  void OnCheckForCancel(int32_t preview_ui_id,
                        int preview_request_id,
                        bool* cancel);

  const int render_process_id_;

  scoped_refptr<PrintQueriesQueue> queue_;

  DISALLOW_COPY_AND_ASSIGN(CefPrintingMessageFilter);
};

}  // namespace printing

#endif  // CEF_LIBCEF_BROWSER_PRINTING_PRINTING_MESSAGE_FILTER_H_
