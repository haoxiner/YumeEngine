//----------------------------------------------------------------------------
//Yume Engine
//Copyright (C) 2015  arkenthera
//This program is free software; you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation; either version 2 of the License, or
//(at your option) any later version.
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along
//with this program; if not, write to the Free Software Foundation, Inc.,
//51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.*/
//----------------------------------------------------------------------------
//
// File : YumeGraphics.h
// Date : 2.19.2016
// Comments :
//
//----------------------------------------------------------------------------
#ifndef __YumeD3D11ConstantBuffer_h__
#define __YumeD3D11ConstantBuffer_h__
//----------------------------------------------------------------------------
#include "YumeGLRequired.h"
#include "Renderer/YumeConstantBuffer.h"
#include "YumeGLGpuResource.h"

#include <boost/shared_array.hpp>
//----------------------------------------------------------------------------
namespace YumeEngine
{
	class YumeRHI;

	class YumeGLExport YumeGLConstantBuffer : public YumeConstantBuffer,public YumeGLResource
	{
	public:
		YumeGLConstantBuffer();

		virtual ~YumeGLConstantBuffer();

		void Release();
		bool SetSize(unsigned size);
		void Apply();

		void OnDeviceReset();
	};

}


//----------------------------------------------------------------------------
#endif
