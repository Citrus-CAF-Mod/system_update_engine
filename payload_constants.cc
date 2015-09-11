//
// Copyright (C) 2014 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "update_engine/payload_constants.h"

namespace chromeos_update_engine {

const uint64_t kChromeOSMajorPayloadVersion = 1;
const uint64_t kBrilloMajorPayloadVersion = 2;

const uint32_t kFullPayloadMinorVersion = 0;
const uint32_t kInPlaceMinorPayloadVersion = 1;
const uint32_t kSourceMinorPayloadVersion = 2;

const char kLegacyPartitionNameKernel[] = "boot";
const char kLegacyPartitionNameRoot[] = "system";

const char kDeltaMagic[] = "CrAU";
const char kBspatchPath[] = "bspatch";

};  // namespace chromeos_update_engine
