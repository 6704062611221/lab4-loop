#include<stdio.h>
int main(){
	int x,a,i,j;
	char y;
	scanf("%c %d %d",&y,&x,&a);
	for(j = 0 ; j< a ; j++){
		for(i = 0 ;i<x ;i++){
			printf("%c",y);
		}
		printf("\n");
	}
}
