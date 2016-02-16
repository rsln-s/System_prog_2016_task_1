// 2016_task_1.cpp : Defines the entry point for the console application.
//

// TODO: write own write to socket
//https://msdn.microsoft.com/ru-ru/library/windows/desktop/bb540476(v=vs.85).aspx
//TODO: take svc.cpp example. Install it: "<name> install". Then when recompiling do "net stop <name>", "net start <name>". We don't install it every time!
//remove can be taken from another example (only the remove API!) Then do "<name> remove"

#include "stdafx.h"

int _tmain1(int argc, TCHAR *argv[]);
int __cdecl main2(int argc, char **argv); 
int __cdecl main3(void);


int main(int argc, TCHAR *argv[])
{
	printf("hello\n");
	if ((argc == 2) && (!strcmp(argv[1], "cli"))) {
		return main2(argc, argv);
	}
	if ((argc == 2) && (!strcmp(argv[1], "srv"))) {
		return main3();
	}
    return _tmain1(argc, argv);
}

