#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h> 
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[100], hi[4400];
	FILE *in;
	//getch(); 
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
    
    
	for(i=1;i<=7949;i++)
	{
		sprintf(FileName,"E:\\123\\字符动画\\123\\1 (%ld).txt",i);
        
	in=fopen(FileName,"r");
	fread(hi,1,4400
,in);
	printf("%s\n%d",hi,i);
	Sleep(29);
	gotoxy(1,1);fclose(in); 
	}
} 
void gotoxy(int x, int y) 
	{
		COORD pos;pos.X = x - 1;pos.Y = y - 1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}