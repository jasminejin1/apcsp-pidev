#include <stdio.h>
#include <string.h>
float areaOfCircle(float i)
{
  return (3.14 *(i*i));
}
int main()
{
  char input[256], name[256], first[256], second[256];
  int firstNum = 0, secNum = 0;
  float r;
  printf("Finding areas of multiple circles\nEnter the starting radius: ");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &firstNum) == 1) break;
    printf("Not a valid radius - try again!\n");
  }
  printf("Enter the ending radius: ");
  while (1)
  {
      fgets(name, 256, stdin);
      if (sscanf(name, "%d", &secNum) == 1) break;
      printf("Not a valid radius - try again!\n");
  }
  for (float i = firstNum; i <= secNum; i++)
  {
    r = areaOfCircle(i);
    printf("The area of a circle with radius %f is %f.\n", i, r);
  }
}
