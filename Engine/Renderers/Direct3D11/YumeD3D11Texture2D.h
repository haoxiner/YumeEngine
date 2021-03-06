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
// File : <Filename>
// Date : <Date>
// Comments :
//
//----------------------------------------------------------------------------
#ifndef __YumeD3D11Texture2D_h__
#define __YumeD3D11Texture2D_h__
//----------------------------------------------------------------------------
#include "YumeD3D11Required.h"
#include "Renderer/YumeTexture2D.h"

#include "YumeD3D11GpuResource.h"
#include "Core/YumeEventHub.h"
//----------------------------------------------------------------------------
namespace YumeEngine
{
	class YumeD3DExport YumeD3D11Texture2D : public YumeTexture2D,public YumeD3D11Resource,public RendererEventListener
	{
	public:
		YumeD3D11Texture2D();
		virtual ~YumeD3D11Texture2D();

		virtual void Release();
		virtual bool SetSize(int width,int height,unsigned format,TextureUsage usage = TEXTURE_STATIC,int arraySize = 1,int mips = 1);
		virtual bool SetData(unsigned level,int x,int y,int width,int height,const void* data);
		virtual bool SetData(unsigned level,int x,int y,int width,int height,unsigned f1,unsigned f2,unsigned f3,const void* data);
		virtual bool SetData(SharedPtr<YumeImage> image,bool useAlpha = false);

		virtual bool GetData(unsigned level,void* dest) const;

		virtual void HandleRenderTargetUpdate();

		virtual bool Create();

		virtual unsigned GetRowDataSize(int width) const;
		virtual void UpdateParameters();
		virtual void CheckTextureBudget(YumeHash type);
		virtual unsigned GetDataSize(int width,int height) const { return 0; }
		virtual unsigned GetSRVFormat(unsigned format);
		virtual unsigned GetDSVFormat(unsigned format);
		virtual unsigned GetSRGBFormat(unsigned format);
		virtual bool IsCompressed() const;

		virtual bool IsDataLost() { return false; };
		virtual void ClearDataLost() {}

		
	};
}


//----------------------------------------------------------------------------
#endif
