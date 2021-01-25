#include<stdio.h>

int ReLU(int y){
	int reslut;
	if(y>0){
		reslut = y;
	}else{
		reslut = 0;
	}
	return reslut;
}

int main(){
	int n,sum=0,result = 0;
	scanf("%d",&n);
	int w[n]={0};
	int score[n]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&w[i]); 
		scanf("%d",&score[i]);
	}
	for(int i=0;i<n;i++){
		sum+=(w[i]*score[i]);
	}
	result=ReLU(sum);
	printf("%d",result);
	return 0;
} 
