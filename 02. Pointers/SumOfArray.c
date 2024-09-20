#include<stdio.h>
void main(){
  printf("-----Sum of Array using Pointers---------\n");
  printf(" \n");
  int N,i;
  int sum = 0, *p;
  printf("Enter number of elements in array : ");
  scanf("%d",&N);
  int a[N];
  printf(" \n");
  for(i=0;i<N;i++){
    printf("Enter the %d element : ",i);
    scanf("%d",&a[i]);
  }
  for(p=&a[0];p<=&a[N-1];p++){
    sum+= *p;
  }
  printf("\n");
  printf("Sum of the Array : %d",sum);
}