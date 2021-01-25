# include<iostream>
using namespace std;

int main(){
	int n, count = 0;
	cin >> n;
	int num[n], sum[n] = {0};
	for(int i = 0; i < n; i++){
		cin >> num[i];
	} 
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(num[i] == num [j]){
				if(sum[j] == 0){
					sum[j] = ++count;
				}
			}
		}
		count = 0;
	} 
	
	for(int i = 0; i < n; i++){
		cout << sum[i] << " ";
	} 
	
	return 0;
}
