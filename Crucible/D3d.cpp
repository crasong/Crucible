#include "D3d.h"

D3D::D3D()
{
	m_device = 0;
	m_commandQueue = 0;
	m_swapChain = 0;
	m_renderTargetViewHeap = 0;
	m_backBufferRenderTarget[0] = 0;
	m_backBufferRenderTarget[1] = 0;
	m_commandAllocator = 0;
	m_commandList = 0;
	m_pipelineState = 0;
	m_fence = 0;
	m_fenceEvent = 0;
}

D3D::D3D(const D3D& other)
{
}

D3D::~D3D()
{
}

bool D3D::Initialize(int screenHeight, int screenWidth, HWND hwnd, bool vsync, bool fullscreen)
{
	return false;
}

void D3D::Shutdown()
{
}

bool D3D::Render()
{
	return false;
}
