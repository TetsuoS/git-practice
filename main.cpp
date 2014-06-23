#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	int hoge1;
	int* p_piyo1;
	hoge1 = 10;
	p_piyo1 = &hoge1;
	int hoge2;
	int* p_piyo2;
	hoge2=8;
	p_piyo2=&hoge2;
	swap(p_piyo1,p_piyo2);
	cout << *p_piyo1 << ',' << *p_piyo2 << endl;
	return 0;

}

