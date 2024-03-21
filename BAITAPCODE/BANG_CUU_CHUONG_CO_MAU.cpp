#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main(){
	printf("________________Bang cuu chuong________________\n\n");
	int i,j,k;
	for(i=1;i<=10;i++)
    {
		for(j=2;j<=10;j++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),j);
			printf("%dx%2d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
