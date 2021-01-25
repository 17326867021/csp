# include<iostream> 
using namespace std;

int main(){
	int N, M, sum = 0, max = 0, index;
	cin >> N >> M; 
	int a[N][M+1]={0},reduce[N+1]={0};

	for(int i = 0; i < N; i++){  
		for(int j = 0; j < M+1; j++){
			cin >> a[i][j];
			sum+=a[i][j];
		}
	}

	for(int i=0; i < N; i++){ //reduceÀï´æÊè¹ûÊý 
		for(int j=1; j <= M; j++)
			reduce[i] += a[i][j];
	}
	
	for(int i=0; i < N; i++){
		if(reduce[i]<max){
			max = reduce[i];
			index = i;
		}
	}
	
	cout << sum << " " ;
	cout << index+1 << " " ;
	cout << 0-max << " " ;
	
	return 0; 
}

/*
3 3
73 -8 -6 -4
76 -5 -10 -8
80 -6 -15 0

2 2
10 -3 -1
15 -4 0        
*/
