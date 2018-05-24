#include <stdio.h>

int main()
{
  int div = 8;  
  // usual for loop

  for (int i = 0; i < 100; i++)
  {
    if ((i%div == 0))
      printf("i is equal to %d\n", i);
  }
  
}
