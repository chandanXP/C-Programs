#include<stdio.h>

int main(){
     int length;
     int breadth;
     printf("Enter the length: ");
     scanf("%d", &length); //'&' will save the value of input or length on 'lenght' variable
     printf("Enter the breadth: ");
     scanf("%d", &breadth); //'&' will save the value of input or breadth on 'breadth' variable
     printf("(%d, %d)\n", length, breadth);//Note '\n' should be in ""
     int area=length*breadth;
     printf("The Area of Rectangle is: %d", area); 
     return 0;
}