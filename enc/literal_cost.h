// Copyright 2013 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Literal cost model to allow backward reference replacement to be efficient.

#ifndef BROTLI_ENC_LITERAL_COST_H_
#define BROTLI_ENC_LITERAL_COST_H_

#include <stddef.h>
#include <stdint.h>

namespace brotli {

// Input: length of data, and the bytes.
// Output: estimate of how many bits the literal will take entropy coded.
void EstimateBitCostsForLiterals(size_t len, const uint8_t *data, float *cost);

}  // namespace brotli

#endif  // BROTLI_ENC_LITERAL_COST_H_
