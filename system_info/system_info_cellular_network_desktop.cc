// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "system_info/system_info_cellular_network.h"

#include "system_info/system_info_utils.h"

using namespace system_info;

void SysInfoCellularNetwork::Get(picojson::value& error,
                                 picojson::value& data) {
  SetPicoJsonObjectValue(error, "message",
      picojson::value("Cellular Network is not support on desktop."));
}
