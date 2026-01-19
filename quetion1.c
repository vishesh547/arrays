//given an array of marks of students,if the mark of any student is less than 35 print its roll no. [roll no. here index of the array.]
#include<stdio.h>
int main() {
  int marks[10];
  for(int i=0;i<=9;i++){
    printf("enter the marks of students: ");
    scanf("%d",&marks[i]);
  }for(int i=0;i<=9;i++){
    printf("%d ",marks[i]);}
    printf("\n");
  for(int i=0;i<=9;i++){
    if(marks[i]<35){
      printf("%d ",i);
    }
  }
  return 0;
}