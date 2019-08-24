#pragma once
#include "SceneBase.h"
class CardManager;
class Camera;

class GameScene :public SceneBase
{
public:
	GameScene();
	~GameScene();
	SceneBase* update();
	void init();
	void draw();
};

