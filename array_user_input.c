#include<stdio.h>
int main(){
  //defining variable for size
  int size;
  //taking size of array from user
  printf("enter size of array.\n");
  scanf("%d",&size);
  // defining array 
  int arra[size];
  //for loop for array
  for(int i=0;i<size;i++){
    //entering no. to array
    printf("enter your no.");
    scanf("%d",&arra[i]);
  }
  for(int i=0;i<size; i++){
    //printing array
    printf("%d\n",arra[i]);
  }
}
