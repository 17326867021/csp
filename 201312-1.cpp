# include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0, max = 0, temp = 0;
	int num[10000] = {0};
	for(int i = 0; i < n; i++){
		cin >> temp;
		num[temp]++;
	}
	
	for(int i = 0; i < 10000; i++){
		if(num[i] > max){
			max = num[i];
			count = i;
		} 
		
	}
	
	cout << count;

	return 0;
}
