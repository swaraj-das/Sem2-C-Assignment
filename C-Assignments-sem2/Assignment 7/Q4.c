// 4. Write a C program to find reverse of a string.
#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);

  int length = strlen(str);
  int i, j;
  for (i = 0, j = length - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  printf("The reversed string is: %s\n", str);

  return 0;
}