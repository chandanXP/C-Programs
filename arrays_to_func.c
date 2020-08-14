#include<stdio.h>
void printarray(int *ptr, int n){
     for(int i=0; i<n; i++){
          printf("The value of element %d is %d\n", i+1, *(ptr+i));
          // ptr[2]= 5555;//this will change the actual value in array.
     }
}
int main(){
     int arr[]={1,2,2243,23,45,55,66};
     printarray(arr, 7);
     //if you placed 8 intead of 7 then it will not show any error but print a garbage value which is a missbehve of a program.
     return 0;
}