///////////////////////////////////////////////////////////////////////////////////
/// Yume Engine MIT License (MIT)

/// Copyright (c) 2015 arkenthera

/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
/// 
/// File : YumeConfig.h
/// Date : 8.27.2015
/// Comments : 
///
///////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------------------------------------
#ifndef __YumeConfig_h__
#define __YumeConfig_h__
//---------------------------------------------------------------------------------
#include "Core/YumeBuildSettings.h"
//---------------------------------------------------------------------------------

#define YUME_MEMORY_ALLOCATOR_STD 1
#define YUME_MEMORY_ALLOCATOR_NED 2
#define YUME_MEMORY_ALLOCATOR_USER 3
#define YUME_MEMORY_ALLOCATOR_NEDPOOLING 4

#ifndef YUME_MEMORY_ALLOCATOR
#define YUME_MEMORY_ALLOCATOR YUME_MEMORY_ALLOCATOR_NEDPOOLING
#endif

#define YUME_SSE
//---------------------------------------------------------------------------------
#endif
//~End of YumeConfig.h