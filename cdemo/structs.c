#include <stdio.h>
#include <string.h>

struct Student
{
  char firstname[50];
  char lastname[50];
  int age;
  int id;
};

void printStudent(struct Student* student)
{
  printf("The student's name is %s %s\n", student->firstname, student->lastname);
  printf("The student's age is %d.\n", student->age);
  printf("The student's id is %d.\n", student->id);
}

int main()
{
  char input[256];
  struct Student student[2];
  for (int i=0;  i < 2; i++)
    {
      printf("Enter the student's first name: \n");
      fgets(input, 256, stdin);
      sscanf(input, "%s", student[i].firstname);
      printf("Enter the student's last name: \n");
      fgets(input, 256, stdin);
      sscanf(input, "%s", student[i].lastname);
      printf("Enter the student's age: \n");
      fgets(input, 256, stdin);
      sscanf(input, "%d", &student[i].age);
      printf("Enter the student's id: \n");
      fgets(input, 256, stdin);
      sscanf(input, "%d", &student[i].id);
    }
  printStudent(&student[0]);
  printStudent(&student[1]);
}
