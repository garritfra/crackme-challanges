#include <iostream>

void LOG(std::string str)
{
  std::cout << str << std::endl;
}

int main(int argc, char const *argv[])
{
  if (argc != 2)
  {
    LOG("Usage: login <password>");
    return 1;
  }
  else if (argc == 2)
  {
    if (strcmp(argv[1], "mypassword") == 0)
    {
      LOG("Access Granted!");
    }
    else
    {
      LOG("Invalid Password!");
    }
  }
  return 0;
}
