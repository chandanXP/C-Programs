#include<stdio.h>
void display( int *ptr , int n, int m){
     for(int i=0; i < n; i++){
          for(int j=0; j < m; j++){
               printf("%d", *ptr+i);
          }
          printf("\n");
     }
}
int main(){
     int arr[2][2] ={{1,2}, {3,4}};
     int *ptr= &arr;
     display(arr, 2, 2);

     return 0;
}