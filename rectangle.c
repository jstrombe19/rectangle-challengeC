#include <stdio.h>

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