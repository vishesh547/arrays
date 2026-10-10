#include<stdio.h>
int main() { //reverse the array
  int arr[5];
  printf("enter the element: ");
  for(int i=0;i<=4;i++){
    scanf("%d",&arr[i]);
  }
for(int i=4;i>=0;i--){
  printf("%d ",arr[i]);
}
 return 0;
}