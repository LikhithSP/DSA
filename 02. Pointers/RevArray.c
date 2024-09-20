#include<stdio.h>

void main(){
  int N;
  printf("------Reverse an Array using Pointers-----\n");
  printf(" \n");
  printf("Enter the size of array : ");
  scanf("%d",&N);
  int a[N];
  int *p;
  printf(" \n");
  for(p=a;p<=a+N-1;p++){
    printf("Enter element of array : ");
    scanf("%d",p);
    }
    printf(" \n");
  printf("Elements in Reverse Order : \n");
  for(p=a+N-1;p>=a;p--){
    printf("%d\t ",*p);
  }

  }
