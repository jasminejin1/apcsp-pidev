#include <stdio.h>
#include <string.h>

int main()
{
  char str1[27];
  char str2[] = "abcdefghijklmnopqrstuvwxyz";
  char c = 'a';
  for (int i = 0; i < 27 ; i++)
    {
      str1[i] = c;
      c++;
    }
  str1[26] = '\0';
  printf("String 1 is %s.\n", str1);
  printf("String 2 is %s.\n", str2);
  if (strcmp(str1,str2) == 0)
    printf("The strings are identical.\n");
  else 
    printf("The strings are not identical.\n");
  for (int i = 0; i < 27; i++)
    {
      str2[i] -= 32;
      c++;
    }
  str2[26] = '\0';
  printf("String 1 is now %s.\n", str1);
  printf("String 2 is now %s.\n", str2);
  if (strcmp(str1, str2) == 0)
    printf("The strings are still identical.\n");
  else
    printf("The strings are not identical now.\n");
  char str3[53];
  strcpy(str3, str1);
  strcat(str3, str2);
  str3[52] = '\0';
  printf("The combined string is %s.\n", str3);
}

