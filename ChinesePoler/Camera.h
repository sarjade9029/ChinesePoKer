#pragma once
#include "DxLib.h"
#include "Card.h"
class Camera
{
public:
	Camera();
	~Camera();
	void Update();//��ʒu

	const VECTOR& GetPos()const { return pos; }

private:
	VECTOR pos;
};

