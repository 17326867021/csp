# include<iostream>
# include<algorithm>
using namespace std;

int main(){
	int n, mid ,small = 0, big = 0;
	cin >> n;
	int num[n], temp;
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	
	sort(num,num + n); // ≈≈–Ú
	mid = num[n/2];
	for(int i = 0; i < n; i++){
		if(num[i] > mid){
			big++;
		}else if(num[i] < mid){
			small++;
		}
	}
	if(big!=small){
		mid = -1;
	}		
	
	cout << mid;
	
	return 0;
}
