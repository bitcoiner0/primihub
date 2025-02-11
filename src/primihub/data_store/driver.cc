/*
 Copyright 2022 Primihub

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

      https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */


#include "src/primihub/data_store/driver.h"

namespace primihub {
///////////////////////////////// DataDriver //////////////////////////////////////////////
std::shared_ptr<Cursor>& DataDriver::getCursor() { return cursor; }
std::string DataDriver::getDriverType() const { return driver_type; }
std::string DataDriver::getNodeletAddress() const { return nodelet_address; }

}  // namespace primihub
