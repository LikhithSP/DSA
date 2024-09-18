#include<stdio.h>
void main(){
  int N;
  printf("------Reversing an Array------\n");
  printf("Enter the value of N : ");
  scanf("%d",&N);
  int a[N],i;
  for (i=0;i<N;i++){
    printf("Enter the element for index %d : ",i);
    scanf("%d",&a[i]); 
  }
  printf("\nOriginal Order : \n");
  for (i=0;i<N;i++){
    printf("%d\t",a[i]);
  }
  printf("\n");
  printf("\nReverserd Order : \n");
  for(i=N-1;i>=0;i--){
    printf("%d\t",a[i]);
  }
}