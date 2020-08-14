#include<stdio.h>

int main(){
     int marks[4];
     int *ptr;
     ptr = &marks[0];//pointing the first element of the array.
     // ptr = marks;//we can also write like this, this will also point the first element of th array.  
     for ( int i=0;  i < 4; i++)
     {
         
          printf("Enter the value for student %d: \n", i+1);
          scanf("%d", ptr);
          ptr++;//this pointer will point to the next number
     }
     for(int i=0; i<4; i++){
          printf("The value of student %d is %d \n",i+1, marks[i]);
     }
     
     return 0;
}