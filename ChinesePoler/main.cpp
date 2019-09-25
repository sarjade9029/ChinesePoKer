#include "DxLib.h"
#include "Game.h"
#include "TitleScene.h"
int		WINAPI		myWinMain(HINSTANCE hInstance, HINSTANCE hPreInst, LPSTR     CmdLine, int CmdShow)
{
	// スクリーンセット
	GAMEINSTANCE.setScreen(800, 600, false);
	GAMEINSTANCE.setFirstScene(new GameScene);
	// ゲーム開始
	GAMEINSTANCE.Run();
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
// コンソール画面からWindowsのお作法に飛ぶためのコード
////////////////////////////////////////////////////////////////////////////////////////
void windowOpen()
{
	HINSTANCE hInstance = GetModuleHandle(0);
	int      iCmdShow = SW_SHOWDEFAULT;

	myWinMain(hInstance, NULL, NULL, iCmdShow);
}
// DOS窓時のエントリーポイント
int main(void)
{
	windowOpen();
	return 0;
}
// ウィンドウシステムの時のエントリーポイント
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	main();
	return 0;
}