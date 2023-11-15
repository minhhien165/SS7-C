#include<stdio.h>

int main(){
	int id,air,nms,i;
	float pa;
	printf("so tien gui ban dau: ");
	scanf("%d",&id);
	printf("lai suat nam: ");
	scanf("%d",&air);
	printf("so thang gui: ");
	scanf("%d",&nms);
	printf("Thang	| Tien gui		| Tien lai	  |\n");
	do{
		pa=id*air/100/12;
		id=id+pa;
		printf("%d	| %d               	| %.1f            |\n",i,id,pa);
		i++;
	}while(i<=nms);
}