#include <stdio.h>
#include <stdlib.h>


/*
  This is the most basic implementation of this challenge, with the values hardcoded.

  What follows after the basic solution is a more advanced solution, wherein the user 
  is prompted to supply the values of length and width at the onset of the program, 
  then those user-provided values are used to determine area and perimeter.
*/
int main() {
  double length = 32.3;
  double width = 13.4;
  double perimeter = 2.0 * (length + width);
  double area = length * width;

  printf("Width: %.2f\n Length: %.2f\n", width, length);
  printf("The perimeter is: %.2f\n", perimeter);
  printf("The area is: %.2f\n", area);

  return 0;
}


int dynamic(int argc, char *argv[]) {
  double width = atoi(argv[1]);
  double length = atoi(argv[2]);
  double perimeter = 2.0 * (width * length);
  double area = width * length;

  printf("Width: %.2f\n Length: %.2f\n", width, length);
  printf("The perimeter is: %.2f\n", perimeter);
  printf("The area is: %.2f\n", area);

  return 0;
}