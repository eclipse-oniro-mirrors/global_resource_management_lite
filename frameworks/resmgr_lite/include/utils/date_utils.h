/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
 */

#ifndef RESOURCE_MANAGER_DATEUTILS_H
#define RESOURCE_MANAGER_DATEUTILS_H

#include <sys/time.h>
#include <unistd.h>
#include "common.h"

namespace OHOS {
namespace Global {
namespace Resource {
/**
 * Returns the current time in milliseconds.
 *
 * @return  the difference, measured in milliseconds, between
 *          the current time and midnight, January 1, 1970 UTC.
 */
inline long CurrentTimeMillis()
{
    struct timeval time;
    gettimeofday(&time, nullptr);
    return (time.tv_sec * KILO + time.tv_usec / KILO);
}

/**
 * Returns the current time in microseconds.
 *
 * @return  the difference, measured in microseconds, between
 *          the current time and midnight, January 1, 1970 UTC.
 */
inline long CurrentTimeUsec()
{
    struct timeval time;
    gettimeofday(&time, nullptr);
    return (time.tv_sec * MILLION + time.tv_usec);
}
} // namespace Resource
} // namespace Global
} // namespace OHOS
#endif
