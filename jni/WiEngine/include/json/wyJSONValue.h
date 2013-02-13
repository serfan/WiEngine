/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __wyJSONValue_h__
#define __wyJSONValue_h__

#include "wyJSONObject.h"
#include "wyJSONArray.h"

/**
 * @class wyJSONValue
 *
 * help class of json value casting
 */
class WIENGINE_API wyJSONValue {
public:
	/// cast value to boolean
	static bool castToBool(wyJSONObject::KeyValue& kv);

	/// cast value to integer
	static int castToInt(wyJSONObject::KeyValue& kv);

	/// cast value to long
	static long castToLong(wyJSONObject::KeyValue& kv);

	/// cast value to float
	static float castToFloat(wyJSONObject::KeyValue& kv);

	/// cast value to double
	static double castToDouble(wyJSONObject::KeyValue& kv);

	/// cast value to json object
	static wyJSONObject* castToObject(wyJSONObject::KeyValue& kv);

	/// cast value to json array
	static wyJSONArray* castToArray(wyJSONObject::KeyValue& kv);

	/// cast value to string value
	static const char* castToString(wyJSONObject::KeyValue& kv);

	/// return an empty string
	static const char* copyString(const char* s);
};

#endif // __wyJSONValue_h__
