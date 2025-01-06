#include <stdio.h>
#include <math.h>

// Function to compute the volume of a cube
double volumeCube(double side)
{
 return pow(side, 3); // side^3
}

// Function to compute the volume of a cuboid
double volumeCuboid(double length, double width, double height)
{
 return length * width * height;
}

// Function to compute the volume of a cylinder
double volumeCylinder(double radius, double height)
{
 return M_PI * pow(radius, 2) * height; // π * r^2 * h
}

int main()
{
 int choice;
 printf("Choose a shape to compute volume:\n");
 printf("1. Cube\n2. Cuboid\n3. Cylinder\n");
 printf("Enter your choice (1-3): ");
 scanf("%d", &choice);

 switch (choice)
 {
 case 1:
 {
  double side;
  printf("Enter the side length of the cube: ");
  scanf("%lf", &side);
  printf("Volume of the cube: %.2f\n", volumeCube(side));
  break;
 }
 case 2:
 {
  double length, width, height;
  printf("Enter the length, width, and height of the cuboid: ");
  scanf("%lf %lf %lf", &length, &width, &height);
  printf("Volume of the cuboid: %.2f\n", volumeCuboid(length, width, height));
  break;
 }
 case 3:
 {
  double radius, height;
  printf("Enter the radius and height of the cylinder: ");
  scanf("%lf %lf", &radius, &height);
  printf("Volume of the cylinder: %.2f\n", volumeCylinder(radius, height));
  break;
 }
 default:
  printf("Invalid choice! Please select a valid option (1-3).\n");
  break;
 }

 return 0;
}
