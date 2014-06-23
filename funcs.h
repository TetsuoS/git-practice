int sum(int *array, int length){
  int total=0;
  for(int i=0; i<length; i++){
    total += *array;
    array++;
  }
  return total;
}

void swap(int *a, int *b){
  int c;
  c=*a;
  *a=*b;
  *b=c;
}

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