# include<iostream>
# include<iomanip>
# include<limits.h>
using namespace std;

int main(){
	int n;
	long long max, min;
	double mid = 0.0;
	cin >> n;
	int num[n];
	
	for(int i = 0; i < n; i++){ //输入数列 
		cin >> num[i];	
	} 
	
	if(num[0] > num[1]) {
		max = num[0];
		min = num[n-1];
	}else{
		max = num[n-1];
		min = num[0];
	}
	
	if(n%2){ //奇数 
		mid = num[n/2];
	}else{ // 偶数 
		mid = (double)(num[n/2-1]+num[n/2])/2;
	}
	
	cout << max << " ";
	if(mid == (double)((int)mid)){
		cout << fixed <<  setprecision(0) << mid << " ";
	}else{
		cout << fixed <<  setprecision(1) << mid << " ";
	}
	cout << min << " ";
	
	return 0;
}

/*
3
-1 2 4

3
3 2 1 

4
-2 -1 3 4

4
-2 0 3 4
*/
