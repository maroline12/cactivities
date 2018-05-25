
#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  // if statement to test is a not equal to 0
  if (a != 0)
  {
    printf("a is not equal to 0");
  }
  else
  {
    printf("a is equal to 0");
  }

  //if statement to test is a greater than 0
  if (a > 0)
  {
    printf("a is greater than 0");
  }
  else
  {
    printf("a is not greater than 0");
  }

  //if statement to test is a greater than or equal to 0
  if (a >= b)
  {
    printf("a is greater than or equal to 0");
  }
  else
  {
    printf("a is not greater than or equal to 0");
  }

  //if statement to test is a equal to 0  and is b equal to 0
  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and b is equal to 0");
  }
  else
  {
    printf("not a is equal to 0 and b is equal to 0");
  }

  //if statement to test is a equal to 0 or b is equal to 0
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 or b is equal to 0");
  }
  else
  {
    printf("not a is equal to 0 or b is equal to 0");
  }

  //if statement to test is a not equal to 0
  if (!(a == 0))
  {
    printf("a is not equal to 0");
  }
  else
  {
    printf("a is not not equal to 0");
  }
}



