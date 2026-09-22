//Author:lewis wangai
//Date:18/9/2026
//Reg no:bcs-05-0212/2026
//Description:a c program on requirements to acquire area and volume

#include <stdio.h>
int main(void) {
    float radius, height;
    float volume, surface_area;

    printf("Enter radius to get volume:");
    scanf("%f", &radius);
    printf("Enter height:");
    scanf("%f", &height);
    volume = (4.0/3.0) * 3.14159 * radius * radius * radius;
    surface_area = 4 * 3.14159 * radius * radius;
    printf("Volume of sphere with radius %.2f is %.2f\n", radius, volume);
    printf("Surface area of sphere with radius %.2f is %.2f\n", radius, surface_area);
return 0;
}       
