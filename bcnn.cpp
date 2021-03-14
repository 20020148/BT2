#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b, bcnn;
	cin >> a >> b;
	for(int i = max(a,b); i <= a*b; i++ ){
		if(i % a == 0 && i % b == 0){
			bcnn = i;
			break;
		}
	}
	cout << bcnn;
	return 0;
}
