#include <stdio.h>
#include <iostream>
#include <strings.h>

using namespace std;

const string cipher(string str, int offset)
{
  string ret = str;

  for (int i = 0; i < ret.length(); i++)
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
    string userPass = argv[1];
    string encodedUserPass = cipher(userPass, 13);
    cout << encodedUserPass << endl;

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
