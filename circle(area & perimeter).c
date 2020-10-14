#include<stdio.h>

main()

{

     int radius;
	 float p,a;

     printf("Enter the radius of the circle =\n ");

     scanf("%d", &radius);

     p=(2*3.14*radius);

     a=(3.14*radius*radius);

     printf ("the perimeter of the circle = %f \n The area of the circle = %f " ,p,a);

}
