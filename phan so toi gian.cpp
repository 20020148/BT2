#include<iostream>
using namespace std;

int main(){
	int a, b,ucln;
	cin >> a >> b;
	for (int i =1; i <= a && i <= b; i++){
		if(a%i==0 && b%i==0){
			ucln = i;
		}
	}
	cout << (double) ( a / ucln) <<"/"<< (b / ucln);
	return 0;
}
