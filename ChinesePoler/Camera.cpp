#include "Camera.h"
Camera::Camera()
{
	SetCameraNearFar(0.1f, 1000.0f);	
	m_pos = VGet(0.0f, 40.0f, -40.0f);
}
Camera::~Camera()
{
}
void Camera::Update()
{
	SetCameraPositionAndTarget_UpVecY(m_pos, VGet(0.0f, 0.0f, 0.0f));
}