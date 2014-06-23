#include<iostream>
using namespace std;

int sum(int *array, int length){
	int total=0;
	for(int i=0; i<length; i++){
		total += *array;
		array++;
	}
	return total;
}

int main(void){
	int leng;
	cin >> leng;
	int x[10000];

	for(int i=0; i<leng; i++){
		cin >> x[i];
	}

	cout << sum(x,leng);

	return 0;
}