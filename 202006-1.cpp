# include<stdio.h>

int n,m,j=0,k=0;
int pointA[1001][2],pointB[1001][2];

int Judge(int a,int b,int c){
	int reslut=1;
	if((a+pointA[0][0]*b+pointA[0][1]*c)>0){ 
		for(int i=0;i<j;i++){
			if((a+pointA[i][0]*b+pointA[i][1]*c)<0){
				reslut=0;
				break;
			}
		}
		for(int i=0;i<k;i++){
			if((a+pointB[i][0]*b+pointB[i][1]*c)>0){
				reslut=0;
				break;
			}	
		}				
	} else { 
		for(int i=0;i<j;i++){
			if((a+pointA[i][0]*b+pointA[i][1]*c)>0){
				reslut=0;
				break;
			}
		}
		for(int i=0;i<k;i++){
			if((a+pointB[i][0]*b+pointB[i][1]*c)<0){
				reslut=0;
				break;
			}	
		}		
	}
	return reslut;
}
int main(){
	int a,b,c,flag=0;
	char type;
	scanf("%d%d",&n,&m); //n<=1000,m<=20
	int x,y; 
	for(int i=0;i<n;i++){
		scanf("%d%d %c",&x,&y, &type);
		if(type == 'A'){
			pointA[j][0] = x;
			pointA[j++][1] = y;
		} else {
			pointB[k][0] = x;
			pointB[k++][1] = y; 
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&a,&b,&c);
		flag=Judge(a,b,c);
		if(flag==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}	
	}
	return 0;
}
