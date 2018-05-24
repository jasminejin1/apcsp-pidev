#include<stdio.h>

int main()
{
  int a = 10;
  char b = 4;
  double c = 6.54;
  float d = 2.1;
  unsigned char e = 1;
  unsigned int f= 65535;
  // print value and size of an int variable
  printf("int a has a size of %d bytes, char b has a size of %d bytes, double c has a size of %d bytes, float d has a size of %d bytes.\n", sizeof(a),sizeof(b),sizeof(c), sizeof(d));
  printf("An unsigned character value is a single numbers, positive integer. An unsigned integer value can be an integer between 0 and %d.\n",f);
}

