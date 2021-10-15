#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int strtoi(string str)
{
  int a;
  stringstream ss(str);
  ss >> a;
  return a;
}

string r(string str, char c)
{
  string a = "";
  int i = 0;
  while (i < str.length)
  {
    if (str[i] != c)
    {
      a = a + str[i];
    }
  }
  return a;
}

class Program
{
public:
  int8_t memory[2048];
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int strtoi(string str)
{
  int a;
  stringstream ss(str);
  ss >> a;
  return a;
}

string r(string str, char c)
{
  string a = "";
  int i = 0;
  while (i < str.length())
  {
    if (str[i] != c)
    {
      a = a + str[i];
    }
  }
  return a;
}

class Program
{
public:
  int8_t memory[2048];
  int8_t cashe[256];
  int8_t address_get(string addr)
  {
    int8_t a;
    if (addr[0] == '*')
    {
      string b = addr.substr(1);
      a = strtoi(b);
      a = memory[a];
    } else if (addr[0] == '_') {
      a = strtoi(addr.substr(1));      
    }
    return a;
  }
};



int main() {
  string fileinp;
  char b;
  ifstream file;
  file.open("test.test");
  if (file.is_open())
  {
    while (file.good())
    {
      b = file.get();
      fileinp = fileinp + b;
    }
  } else {
    cout << "ERROR, Could Not Open File" << endl;
    
  }
  cout << fileinp << endl;
  int a = 0;
  string s;
  while (a < fileinp.length())
  {
    cout << fileinp[a];
    s = s + fileinp[a];
    a++;
  }
  s = r(s, '\n');
  string lines[256];
  
  cout << fileinp << endl;
  s = r(s, '\n');
  int i = 0;
  while (i < s.length())
  {
    string lines[256];
  
    cout << fileinp << endl;

  }
  return 69;
}
