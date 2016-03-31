/* Copyright 2013-present Barefoot Networks, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PI_CLI_UTILS_H_
#define PI_CLI_UTILS_H_

#include <stddef.h>

int count_tokens(const char *str);

// client needs to free memory when done using it
char *get_token_from_buffer(char *buffer, size_t index);

char *complete_p4_table(const char *text, int len, int state);
char *complete_p4_action(const char *text, int len, int state,
                         const char *table);

size_t parse_fixed_args(char *s, const char **dest, size_t expected);

#endif  // PI_CLI_UTILS_H_