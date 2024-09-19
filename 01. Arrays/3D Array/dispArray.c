#include<stdio.h>
void main(){
  printf("--------Three Dimenssion Array----------\n");
  int i,j,k,l,m,n;
  printf(" \n");
  printf("Enter set of array : ");
  scanf("%d",&l);
  printf("Enter row of array : ");
  scanf("%d",&m);
  printf("Enter column of array : ");
  scanf("%d",&n);

  int arr[l][m][n];
  printf(" \n");

  for(i=0;i<l;i++){
    for(j=0;j<m;j++){
      for(k=0;k<n;k++){
        printf("Enter the array Elements : ");
        scanf("%d",&arr[i][j][k]);
      }
    }
  }
  printf("\n");
  printf("The 3D array elements are : \n");
  for(i=0;i<l;i++){
    for(j=0;j<m;j++){
      for(k=0;k<n;k++){
        printf("%d\t",arr[i][j][k]);
      }
    }
  }
}