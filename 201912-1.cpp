# include<iostream>
using namespace std; 

int main (){
	int n, a = 0, b = 0, c = 0, d = 0, count;
	cin >> n;
	count = n;
	for(int i = 1; i <= count; i++){
		if(i % 7 == 0|| i % 10 == 7 || i / 10 == 7 || i / 10 %10 == 7 || i / 100 == 7){
			count ++;
			switch(i%4){
			case 1: a++;break;
			case 2: b++;break;
			case 3: c++;break;
			case 0: d++;break;
			default: break;
			}
		}
		
		
	}
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	
	return 0;
}
