#pragma once
#include "DxLib.h"
#include "SceneBase.h"

#define GAMEINSTANCE Game::GameInstance()
class Game
{
private:
	Game();
	void input();
	void draw();
	int update();
	void init();
	int       m_screenWidth, m_screenHeight;// �E�B���h�E���E����
	bool      m_FullScreen;
	bool      m_IsGameQuit;

	SceneBase* m_nowScene;
public:
	static Game& GameInstance()
	{
		static Game GameSys;
		return GameSys;
	}
	~Game();
	void Run();
	void setScreen(int width, int height, bool Fullscreen);
	int  getScreenWidth() { return m_screenWidth; }
	int  getScreenHeight() { return m_screenHeight; }

	void setFirstScene(SceneBase* pScene) { m_nowScene = pScene; }

};

