#include<stdio.h>

int main(){
     // int type array
     // int i = 34;
     // int *ptr = &i;
     // printf("The address of i is  %u\n", ptr);
     // ptr++;
     // //ptr = ptr+1;//this will increased by the type of integer "int"
     // ptr++;
     // //ptr--;
     // printf("The address of i is  %u\n", ptr);

     // // char type array
     // char c = 34;
     // char *ptr = &c;
     // printf("The value of is %u\n", ptr);
     // ptr++;
     // //ptr = ptr+1;//this will increased by the type of integer "char"
     // //ptr--;
     // printf("The address of i is  %u\n", ptr);

     // float type array
     float f = 3.4;
     float *ptr = &f;
     printf("The value of is %u\n", ptr);
     ptr++;
     //ptr = ptr+1;//this will increased by the type of integer "char"
     //ptr--;
     printf("The address of f is  %u\n", ptr);

     return 0;
}

//1.) add two ptr
//2.) we can subtract two ptr.
//3.) we can compare two ptr.