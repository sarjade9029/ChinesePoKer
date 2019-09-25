#include <iostream>
#include "Game.h"
Game::Game()
	:m_FullScreen(false)
	,m_IsGameQuit(false)
	,m_screenHeight(1024)
	,m_screenWidth(768)
	,m_nowScene(nullptr)
{
}
void Game::draw()
{
	if (!m_nowScene)
	{
		return;
	}
	m_nowScene->draw();
}
int Game::update()
{
	if (!m_nowScene)
	{
		printf("ƒV[ƒ“‚ÌŽæ“¾‚ª‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½");
		return 0;
	}

	SceneBase* tmpScene;
	tmpScene = m_nowScene->update();
	if (tmpScene != m_nowScene)
	{
		delete m_nowScene;

		m_nowScene = tmpScene;
		m_nowScene->init();
		return 1;
	}
	return 0;
}
void Game::init()
{
	if (!m_FullScreen)
	{
		ChangeWindowMode(TRUE);
	}
	DxLib_Init();
	SetMouseDispFlag(true);
}
Game::~Game()
{
}
void Game::Run()
{
	init();

	bool ProgramLooping = true;
	m_nowScene->init();

	while (ProgramLooping)
	{
		if (ProcessMessage() != 0)
		{
			break;
		}
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)
		{
			break;
		}
		input();
		m_nowScene->update();
		if (update())continue;
		if (m_IsGameQuit)break;
		m_nowScene->draw();
		ScreenFlip();

	}
	DxLib_End();
}
void Game::setScreen(int width, int height, bool Fullscreen)
{
	m_screenWidth = width;
	m_screenHeight = height;
	m_FullScreen = Fullscreen;
}