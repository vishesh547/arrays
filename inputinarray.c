#include<stdio.h>
int main() { //simle program to take input in array and print it
  int arr[5];
  for(int i=0;i<=4;i++){
    printf("enter the element : ");
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<=4;i++){
    printf("%d ",arr[i]);
  }
 
 return 0;
}