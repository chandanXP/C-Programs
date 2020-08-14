#include<stdio.h>

int main(){
     int i = 30;
     int *j =&i;//j will store the address of i
     printf("The value of i is: %d", i);
     printf("\nThe value of i(using *j) is: %d", *j);
     printf("\nThe address of i is: %u", j);
     printf("\nThe address of i is: %u", &i);
     printf("\nThe address of j is: %u", &j);
     printf("\nThe value of j is: %d", *(&j));
     return 0;
}