/* Copyright (c) 2015-2020 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef BLE_CLIAPP_ADVERTISINGDATABUILDER_H
#define BLE_CLIAPP_ADVERTISINGDATABUILDER_H

#include "CLICommand/CommandSuite.h"
#include "ble/gap/AdvertisingDataBuilder.h"

class AdvertisingDataBuilderCommandSuiteDescription {

public:
    static const char* name() {
        return "advDataBuilder";
    }

    static const char* info() {
        return "All commands applicable to the AdvertisingDataBuilder instance of this device";
    }

    static const char* man() {
        return "advDataBuilder <command> <command arguments>.";
    }

    static const mbed::Span<const uint8_t> get();

    // see implementation
    static ConstArray<const Command*> commands();
};


#endif //BLE_CLIAPP_ADVERTISINGDATABUILDER_H
