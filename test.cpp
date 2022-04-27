#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE);
	DxLib_Init();
	LoadGraphScreen(0, 0, "../mino.png", TRUE);
	WaitKey();
	DxLib_End();
	return 0;
}