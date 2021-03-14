#include<iostream>
using namespace std;

void Nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
		}
	}
int max(int a[], int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max) max = a[i];
	}
	return max;
	}
int min(int a[], int n){
	int min = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] < min) {
		min = a[i];
		}
	}
	return min;
} 
int sum(int a[], int n){
	for(int i = 0; i< n; i++){
		int sum = 0;
		if(i % 2==0){
			sum += a[i];
		}
		return sum;
}
int 
int main(){
		int a[1000];
	int n;
	cin >> n; 
	Nhap(a,n);
	for(int i = 0; i< n; i++){
		int sum = 0;
		int count = 0;
		if(i % 2==0){
			sum += a[i];
		}
		else{
			count++;
		}
		cout <<"Sum of odd number"<< sum<< endl<<"even number"<< count;
	}
	cout << "Min:"<< min(a,n) <<endl << "Max:"<< max(a,n)<< endl 
	return 0;	
}
