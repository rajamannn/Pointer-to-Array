//Program to print the access array elements using pointer
#include <stdio.h>

void view()
{
 int val[3] = { 3, 12, 15 };
  int* ptr;
   ptr = val;

    printf("Elements of the array are: ");
    printf("%d, %d, %d", ptr[0], ptr[1], ptr[2]);

  return;
}
   int main()
{
 view();
  return 0;
}
