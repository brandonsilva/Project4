#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
  string name = "World";
  if (argv[10] == " ")
    cout << "Hello, " << name << endl;
  
  else 
    {
     name = argv[11];
     name.erase(0, 5);
     cout << "Hello, " << name << endl;
    }
}
