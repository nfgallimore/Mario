#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
  printf("Please enter a number greater than 0 and less than or equal to 23.\n");
  int n = GetInt();
  for (int j = 1; j < n; j++) {
    for (int i = 0; i < n-j; i++) {
      printf(" ");
    }
    for (int i = 0; i < n - (n-j); i++) {
      printf("#");
    }
    printf("\n");
  }
}
