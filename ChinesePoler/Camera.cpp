#include "Camera.h"



Camera::Camera()
{
	//����
	SetCameraNearFar(0.1f, 1000.0f);
	
	m_pos = VGet(0.0f, 40.0f, -40.0f);
}

Camera::~Camera()
{
}

void Camera::Update()
{
		// �L�[���͎擾
	//int Key = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	//// ��������Ă������ɐi��
	//if (Key & PAD_INPUT_UP)
	//{
	//	pos.z += 1;
	//}

	//// ���������Ă����牺�ɐi��
	//if (Key & PAD_INPUT_DOWN)
	//{
	//	pos.z -= 1;
	//}

	//// �E�������Ă�����E�ɐi��
	//if (Key & PAD_INPUT_RIGHT)
	//{
	//	pos.x += 1;
	//}

	//// ���������Ă����獶�ɐi��
	//if (Key & PAD_INPUT_LEFT)
	//{
	//	pos.x -= 1;
	//}
	SetCameraPositionAndTarget_UpVecY(m_pos, VGet(0.0f, 0.0f, 0.0f));
}
