# include<iostream>
using namespace std;

int main(){
	int n;
	int count = 0;
	cin >> n;
	int num[n];
	for(int i = 0; i < n; i++){
		cin >> num[i];
	} 
	
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(num[i] == -num[j]){
				count++;
			}
		}
	} 
	
	cout << count;
	
	return 0;
}
