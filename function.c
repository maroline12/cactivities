 #include <stdio.h>

float areaOfCircle (float r)
{
  printf("r =\n");
  float x = 3.14 * (r * r);
  return x;
}
int main()
{
  float y;
  float r;
  for (float i = 3.5; i<12.5; i++);
  {
    y = areaOfCircle(i);
    printf("The area of the circle is %f\n",y);
  }


