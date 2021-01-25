# include<iostream>
using namespace std;

int main(){
	int r, y, g, n, k, t, sum = 0;
	cin >> r >> y >> g;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> k >> t;
		switch(k){ 
			case 0: sum += t; break;
			case 1: sum += t; break;
			case 2: sum += t + r; break;
			case 3: sum += 0; break;
			default:break;
		} 
	}
	
	cout << sum;
	
	return 0;
}

/*
30 3 30
8
0 10
1 5
0 11
2 2
0 6
0 3
3 10
0 3
*/

