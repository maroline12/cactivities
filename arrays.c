#include <stdio.h>

int arr[100];

for (int i = 0; i < 100; i++)
{
  arr[i] = i * i;
}

printf("1st and 3rd vals: %d, %d\n", arr[0], arr[2]);
printf(Or %d, %d\n", *arr, *(arr+2));
