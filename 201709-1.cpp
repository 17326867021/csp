# include<iostream>
using namespace std;

int main(){
	int n, sum = 0, fiveNum = 0, threeNum = 0;
	cin >> n;
	
	n /= 10;s
	if(n >= 5){
		fiveNum = n/5;
		n -= fiveNum * 5;
	}
	if(n >= 3){
		threeNum = n/3;
		n -= threeNum * 3;
	}
	
	sum = fiveNum * 7 + threeNum * 4 + n;
	
	cout << sum;
	
	return 0;
}
