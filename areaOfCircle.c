#include<stdio.h>
#include<math.h>

int main(){
     int radius;
     float area;
     printf("Enter the radius of the circle: ");
     scanf("%d", &radius);
     // printf("%d", radius);
     area=3.14*radius;
     printf("The area of Circle is: %f", area);
     return 0;
}