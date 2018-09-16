/***************************************************************************
 *
 * Project         _____    __   ____   _      _
 *                (  _  )  /__\ (_  _)_| |_  _| |_
 *                 )(_)(  /(__)\  )( (_   _)(_   _)
 *                (_____)(__)(__)(__)  |_|    |_|
 *
 *
 * Copyright 2018-present, Leonid Stryzhevskyi, <lganzzzo@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ***************************************************************************/

/**
 * This is list of default configuration params and values which you can
 * configure in the build-time
 */

#ifndef oatpp_base_Config_hpp
#define oatpp_base_Config_hpp

/**
 * If NOT DISABLED, counting of all object of class oatpp::base::Controllable is enabled
 * for debug purposes and detection of memory leaks.
 * Disable object counting for Release builds using '-D OATPP_DISABLE_ENV_OBJECT_COUNTERS' flag for better performance
 */
//#define OATPP_DISABLE_ENV_OBJECT_COUNTERS

/**
 * DISABLE logs level V
 */
//#define OATPP_DISABLE_LOGV

/**
 * DISABLE logs level D
 */
//#define OATPP_DISABLE_LOGD

/**
 * DISABLE logs level E
 */
//#define OATPP_DISABLE_LOGE


#endif /* oatpp_base_Config_hpp */