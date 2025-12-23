#include<stdio.h>
int main(){
	int i,score,n;
	scanf("%d",&n);
	for(i = 0 ; i < n; i++){
		scanf("%d",&score);
		if(score > 100 && score < 0){
			printf("Error\n");
		}
		else{
			if(score >= 85){
				printf("%d(A)\n",score);
			}
			else if(score >= 75){
				printf("%d(B)\n",score);
			}
			else if(score >= 70){
				printf("%d(C)\n",score);
			}
			else if(score >= 40){
				printf("%d(D)\n",score);
			}else{
				printf("%d(F)\n",score);
			}
		}
	}
}
