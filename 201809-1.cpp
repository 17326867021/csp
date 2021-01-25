# include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num[n], ave[n];
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			ave[i] = (num[i] + num[i+1])/2;
		}else if(i == n-1){
			ave[i] = (num[i-1] + num[i])/2;
		}else{
			ave[i] = (num[i-1] + num[i] + num[i+1])/3;
		}
	}
	for(int i = 0; i < n; i++)
		cout << ave[i] << " ";
	return 0;
} 
