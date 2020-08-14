#include<stdio.h>

int main(){
     int n,m;
     int *a=&n,*b=&m;
     //n & m are the parameters of the array.
     printf("Enter the desired number of rows [i]\n");
     scanf("%d", &n);

     printf("Enter the desired number of columns [j]\n");
     scanf("%d", &m);

     printf("Array has %d rows %d columns.\n", n, m);

     // int arr[n][m];
     int *ptr[n][m];
     int **new = &ptr[n][m];
     printf("Address of ptr(array): %d\n", new);

     printf("Now enter the elements of your array(row by row)\n");
     for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
               printf("Enter the value of (%d, %d): ", i+1, j+1);
               scanf("%d", &ptr[i][j]);
          }
     }

     for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
               // printf("The value of your array is: \n");
               printf("%d ", *(&ptr[i][j]));
          }
          printf("\n");
     } 
     return 0;
}

 

//creating a 2d array by taking inputs from the user
//write a display function to print the content of the 2d array
//on the screen. 
//Process:
