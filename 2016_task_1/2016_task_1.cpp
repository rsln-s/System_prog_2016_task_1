// 2016_task_1.cpp : Defines the entry point for the console application.
//

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

