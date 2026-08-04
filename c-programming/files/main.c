#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sys_path = "/home/iamchu/Desktop/";
char *file_name = "output.txt";

int main(int argc, char const *argv[])
{

  char *full_path = malloc(strlen(sys_path) + strlen(file_name) + 1);
  strcpy(full_path, sys_path);
  strcat(full_path, file_name);

  FILE *pFile = fopen(full_path, "w");

  char message[] = "Hello, World!";

  // check if the pointer to our file == NULL
  if (pFile == NULL)
  {
    printf("Error opening file!\n");
    return 1;
  }

  // writing to the file
  fprintf(pFile, "%s", message);

  fclose(pFile);

  return 0;
}
