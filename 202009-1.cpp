# include<stdio.h>
int main(){
	int n,X,Y;
	scanf("%d",&n);
	scanf("%d",&X);
	scanf("%d",&Y);
	int x[n]={0}, y[n]={0}, dist[2][n]={0};
	for(int i=0;i<n;i++){
		scanf("%d",x+i);
		scanf("%d",y+i);
	}
	for(int i=0;i<n;i++){
		dist[0][i]=i+1;
	}
	for(int i=0;i<n;i++){
		dist[1][i]=(X-x[i])*(X-x[i])+(Y-y[i])*(Y-y[i]);
	}	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(dist[1][j]>dist[1][j+1]){
				int temp1 = dist[1][j+1];
				int temp2 = dist[0][j+1];
				dist[1][j+1] = dist[1][j];
				dist[0][j+1] = dist[0][j];
				dist[1][j] = temp1;
				dist[0][j] = temp2;
			}
		}
	}
	for(int i=0;i<3;i++){
		printf("%d\n",dist[0][i]);
	}
	return 0;
}


/*void sort(int **a,int lenth){
	for(int i=0;i<lenth-1;i++){
		for(int j=0;j<lenth-1-i;j++){
			if(a[1][j]>a[1][j+1]){
				int temp1 = a[1][j+1];
				int temp2 = a[0][j+1];
				
				a[1][j+1] = a[1][j];
				a[0][j+1] = a[0][j];
				
				a[1][j] = temp1;
				a[0][j] = temp2;
			}
		}
	}
}*/

