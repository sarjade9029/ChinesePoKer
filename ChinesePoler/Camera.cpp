#include "Camera.h"



Camera::Camera()
{
	//距離
	SetCameraNearFar(0.1f, 1000.0f);
	
	m_pos = VGet(0.0f, 40.0f, -40.0f);
}

Camera::~Camera()
{
}

void Camera::Update()
{
		// キー入力取得
	//int Key = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//// 上を押していたら上に進む
	//if (Key & PAD_INPUT_UP)
	//{
	//	pos.z += 1;
	//}

	//// 下を押していたら下に進む
	//if (Key & PAD_INPUT_DOWN)
	//{
	//	pos.z -= 1;
	//}

	//// 右を押していたら右に進む
	//if (Key & PAD_INPUT_RIGHT)
	//{
	//	pos.x += 1;
	//}

	//// 左を押していたら左に進む
	//if (Key & PAD_INPUT_LEFT)
	//{
	//	pos.x -= 1;
	//}
	SetCameraPositionAndTarget_UpVecY(m_pos, VGet(0.0f, 0.0f, 0.0f));
}
