#include<stdio.h>
void main(){
  int i,j,m,n;
  printf("--------Two Dimmensional Array---------\n");
  printf(" \n");
  printf("Enter the row of the array : ");
  scanf("%d",&m);
  printf("Enter the column of the array : ");
  scanf("%d",&n);

  int arr[m][n];
  printf(" \n");
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      printf("Enter the elements of array : ");
      scanf("%d",&arr[i][j]);
    }
  }
  printf(" \n");
  printf("The elements of 2D array are : \n");
  for (i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d\t",arr[i][j]);
    }
  }

}