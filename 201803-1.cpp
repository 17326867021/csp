# include<iostream>
using namespace std;

int main(){
	int num[30] = {0};
	int n = 0, count = 0, sum = 0;
	for(int i = 0; i < 30; i++){
		cin >> num[i];
		n++;
		if(num[i] == 0){
			break;
		}
	}
	for(int i = 0; i < n; i++){
		switch(num[i]){
			case 1:
				count = 0;
				sum += 1;
				break;
			case 2:
				if(count == 0){
					count = 1;
				}else{
					count++;
				}
				sum += 2*count;
				break;
			case 0:break;
			default:break;
		}
	}
	
	cout << sum ;
	
	return 0;
}
