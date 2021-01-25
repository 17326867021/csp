# include<iostream>
using namespace std;

int main(){
	int n, k, result = 0, temp, sum = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp >= k){
			result++;
		}else{
			sum += temp;
			if(sum >= k){
				result++;
				sum = 0;
			}
		}
	}
	
	if(sum){
		result++;
	}
	
	cout << result;
	
	return 0;
}
