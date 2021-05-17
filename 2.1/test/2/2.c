#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 10
#define min 1
int main()
{
	int i,n,num;
	srand(time(0));
	i=1;
	num=rand()%(max-min)+min;
	printf("输入猜测的数字，在1-10之间：\n");
	while(i){
		scanf("%d",&n);
		if(n>num){
			printf("猜大了，请继续输入: ");
			//scanf("%d",&n);
		}
		if(n<num){
                	printf("猜小了，请继续输入: ");
			//scanf("%d",&n);
		}
		if(n==num){
			printf("恭喜您猜中了，游戏结束。\n");
			i=0;
		}
	}
}
