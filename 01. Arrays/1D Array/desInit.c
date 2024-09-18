#include<stdio.h>
void main(){
int arr[10] = {[0]=1, [5]=2,[6]=3};
int i;
for (i=0;i<10;i++){
    printf("%d\t",arr[i]);
}
}