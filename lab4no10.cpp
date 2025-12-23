#include<stdio.h>
int main(){
	int score,n,sa,sb=0,sc,sd,sf;
	scanf("%d",&score);
	while(score != -1 ){
			if(score > 100 && score < 0){
			printf("Error\n");
			}
			else{
			if(score >= 85){
				sa++;
				printf("%d(A)\n",score);
			}
			else if(score >= 75){
				sb++;
				printf("%d(B)\n",score);
			}
			else if(score >= 70){
				sc++;
				printf("%d(C)\n",score);
			}
			else if(score >= 40){
				sd++;
				printf("%d(D)\n",score);
			}else{
				sf++;
				printf("%d(F)\n",score);
			}
			scanf("%d",&score);
		}
	}
	printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",sa,sb,sc,sd,sf);
}
