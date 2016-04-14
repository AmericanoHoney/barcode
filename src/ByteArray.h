#pragma once
/*
* Copyright 2016 Huy Cuong Nguyen
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <vector>
#include <cstdint>

namespace ZXing {

/// <summary>
/// ByteArray is an extension of std::vector<unsigned char>.
/// </summary>
class ByteArray : public std::vector<uint8_t>
{
public:
	ByteArray()													{}
	explicit ByteArray(int len) : std::vector<uint8_t>(len, 0)	{}
	int length() const											{ return static_cast<int>(size()); }
	const char* charPtr() const									{ return reinterpret_cast<const char*>(data()); }
	char* charPtr()												{ return reinterpret_cast<char*>(data()); }
};

} // ZXing