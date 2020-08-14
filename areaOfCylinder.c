#include<stdio.h>
#include<math.h>

int main(){
     int radius;
     float area;
     int height;
     printf("Enter the radius of the circle: ");
     scanf("%d", &radius);
     // printf("%d", radius);
     area=3.14*radius;
     printf("\nThe area of Circle is: %f", area);
     printf("\nEnter the height: ");
     scanf("%d", &height);
     float volume= 3.14*radius*radius*height;
     printf("\nThe volume of Cylinder is: %f", volume);
     return 0;
}