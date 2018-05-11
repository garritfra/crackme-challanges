#include <stdio.h>
#include <strings.h>

int main(int argc, char const *argv[])
{
  if (argc != 2)
  {
    printf("Usage: %s <password>\n", argv[0]);
    return 1;
  }
  else if (argc == 2)
  {
    if (strcmp(argv[1], "mypassword") == 0)
    {
      printf("Access Granted\n");
    }
    else
    {
      printf("Invalid Password!\n");
    }
  }
  return 0;
}
