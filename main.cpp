#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	int hoge1 = 10;
	int hoge2=8;
	swap(&hoge1,&hoge2);
	cout << hoge1 << ',' << hoge2 << endl;
	return 0;

}

