# include<iostream>
# include<math.h>
using namespace std;

int main(){
	int n, min = 10000, value = 0;
	cin >> n;
	int num[n];
	
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			value = abs(num[i] - num[j]);
			if(value < min){
				min = value;
			}
		}
	}
	
	cout << min;
	
	return 0;
}
