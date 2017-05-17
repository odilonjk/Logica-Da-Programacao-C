#include <stdio.h>
int main()
{
  char name[30];
  int i;
  printf("What's your name? ");
  scanf("%s", name);
  i=0;
  do
  {
    printf("%d - %s\n", (i+1), name );
    i++;
  }
  while (i != 10);
  return 0;
}
