#include <stdio.h>
int main()
{
  int i, num, r = 1;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++)
  {
    r = r * i;
  }
  printf("%d", r);

  return 0;
}