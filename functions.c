#include<stdio.h>
int sum(int a , int b);//function prototype

int main(){
     int a = 10, b = 30;
     printf("the value of a+b is: %d\n", sum(a, b)); //function call
     printf("value of a and b is %d, %d", a ,b);
     return 0;
}
int sum(int a, int b){
     a=1234;
     b=3453;
     int c = a+b;

}