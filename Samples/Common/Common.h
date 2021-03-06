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
#ifndef __SampleCommon_h__
#define __SampleCommon_h__
//----------------------------------------------------------------------------
#include "Engine/YumeApplication.h"
#include "Core/YumeEventHub.h"
#include "Renderer/StaticModel.h"
//----------------------------------------------------------------------------
namespace YumeEngine
{
	class YumeSceneNode;
	class YumeDebugOverlay;
	class YumeOptionsMenu;

	class BaseApplication : public YumeApplication,
		public InputEventListener,
		public EngineEventListener,
		public YumeTimerEventListener
	{
	public:
		BaseApplication();
		virtual ~BaseApplication();

		virtual void Setup();
		virtual void Start();
		virtual void Exit();

		//Input
		virtual void HandleKeyDown(unsigned key,unsigned mouseButton,int repeat);
		virtual void HandleKeyUp(unsigned key,unsigned mouseButton,int repeat) { }
		virtual void HandleMouseButtonDown(int button,unsigned buttons) { }
		virtual void HandleMouseButtonUp(int button,unsigned buttons) { }
		//~

		StaticModel* CreateModel(const YumeString& name,DirectX::XMFLOAT3 Pos = DirectX::XMFLOAT3(0,0,0),DirectX::XMFLOAT4 rot = DirectX::XMFLOAT4(0,0,0,0),DirectX::XMFLOAT3 scale = DirectX::XMFLOAT3(1,1,1));

		virtual void HandlePostRenderUpdate(float timeStep);

		void ToggleShaderParameter(YumeHash param);
		void SetupWindowProperties();

		YumeSceneNode* cameraNode_;
		SharedPtr<YumeDebugOverlay> overlay_;
		SharedPtr<YumeOptionsMenu> optionsMenu_;

		int ssaoCommandIndex_;
		int gbufferDebugIndex_;
		bool ssaoDebug_;

		float yaw_;
		float pitch_;

		bool toggleGDebug_;

		bool drawDebug_;
	};
}


//----------------------------------------------------------------------------
#endif
