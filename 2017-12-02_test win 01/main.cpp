#include <Windows.h>
#include <stdio.h>

int WinMain(	HINSTANCE hInstance,
				HINSTANCE hPrevInstance,
				LPSTR lpCmdLine,
				int nCmdShow)

{
	char msg[128];
	for(int i = 0; i < 5;i++)
	{
		sprintf(msg,"Finestra %i", i+1);
		MessageBox(NULL,msg, "Finestra",0);
	}

	return 0;
}