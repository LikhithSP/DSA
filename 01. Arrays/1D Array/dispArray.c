#include<stdio.h>

void main(){
  int N;
  printf("-----Displaying an Array with Input-------\n");
  printf("Enter the value of N : ");
  scanf("%d",&N);
  int a[N],i ;
  for (i=0;i<N;i++){
    printf("Enter the input for index %d : ",i);
    scanf("%d",&a[i]);
  }
  printf("\n The Array Elements are : \n");
  for(i=0;i<N;i++){
    printf("%d\t",a[i]);
  }

}