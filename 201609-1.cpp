# include<iostream>
# include<math.h>
using namespace std;

int main(){
	int n, max = 0, temp = 0;
	cin >> n;
	int num[n];
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	
	for(int i = 0; i < n-1; i++){
		temp = abs(num[i] - num[i+1]);
		if(temp > max){
			max = temp;
		}
	}
	
	cout << max;
	
	return 0;
}
