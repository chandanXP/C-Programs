#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int*a, int*b);

int main(){
     int x=3, y=4;
     printf("value of x and y is %d, %d\n", x ,y);
     // wrong_swap(x,y);//will not work ddue to call by value
     swap(&x, &y);//will work due to call by reference
     printf("value of x and y is %d, %d\n", x ,y);
     return 0;
}
void wrong_swap(int a, int b){
     int temp;
     temp=a;
     a=b;
     b=temp;

}

void swap(int*a, int*b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}

