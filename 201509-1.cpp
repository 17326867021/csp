# include<iostream>
using namespace std;

int main(){
	int n, count = 1;
	cin >> n;
	int num[n];
	for(int i = 0; i < n; i++){
		cin >> num[i];
	} 
	for(int i = 1; i < n; i++){
		if(num[i] != num[i-1]){
			count++;
		}
	} 
	
	if( n == 0){
		count = 0;
	} 
	cout << count;
	
	return 0;
}
