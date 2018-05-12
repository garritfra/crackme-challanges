#include <stdio.h>
#include <strings.h>

const char *cipher(char *str[], int offset)
{
  char *ret = malloc(strlen(str));

  for (int i = 0; i < strlen(ret); i++)
  {
    ret[i] = str[i] + offset;
  }

  return ret;
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("Usage: %s <password>\n", argv[0]);
    return 1;
  }
  else if (argc == 2)
  {
    const char *userPass[] = argv[1];
    printf(cipher(userPass, 13));

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
