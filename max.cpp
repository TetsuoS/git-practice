#include<iostream>
using namespace std;

int max(int *array,int length){
  int dam;
  for(int i=0;i<length;i++){
    if(array[0]<array[i]){
      dam=array[0];
      array[0]=array[i];
      array[i]=dam;
    }
  }

  return array[0];
}

int main(){
  int arr[3]={2,192,37};
  int m=max(arr,3);

  cout<<m<<"\n";

  return 0;
}
