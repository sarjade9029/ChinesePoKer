#pragma once
#include "DxLib.h"
#include "Card.h"
class Camera
{
public:
	Camera();
	~Camera();
	void Update();//’èˆÊ’u
	const VECTOR& GetPos()const { return m_pos; }
private:
	VECTOR m_pos;
};

