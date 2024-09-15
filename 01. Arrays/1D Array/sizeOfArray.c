#include<stdio.h>
void main(){
  int i;
  printf("------Size of an Array--------\n");
  int arr[] = {4,2,344,342,123,442,456,77,65,889,65,42,1,44,555,231,4334,5,5422,445,567,866,43,32,44,56,778,997,33,567,23,455,4223,556,4334,55,332,34,21,33,67,865,78,};
  int a = sizeof(arr)/sizeof(arr[0]);
  printf("The size of the array is %d",a);

}