#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 100
#define min 50
int main()
{
	int i,j,num;
	srand(time(0));
	printf("生成50-100的随机数：\n");
	for(i=0;i<50;i++){
		num=rand()%(max-min)+min;
		printf("%d ",num);
		if(++j%10==0)
			printf("\n");
	}
}
