
#include <stdio.h>

int arr[100];
int arrSize = 100;
int incrementBy = 10;

void arrayAdd(int s, int n)
{
  printf("\nArray values adjusted by %d.\n", n);
  for (int i = 0; i < s; i++)
  {
    arr[i] = arr[i] + n;
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  for (int i=0; i < 100; i++)
  {
    arr[i] = i*1;
    printf("%d ", arr[i]);
  }
  printf("\n");
  arrayAdd(arrSize, incrementBy); 
}
