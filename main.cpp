
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

string open(string fname)
{
  string fileinp;
  char b;
  ifstream file;
  file.open(fname);
  if (file.is_open())
  {
    while (file.good())
    {
      b = file.get();
      if (b != '\n')
      {
        fileinp = fileinp + b;
      }
    }
  } else {
    cout << "ERROR, Could Not Open File" << endl;
    
  }
  return fileinp;
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



int main() 
{
  string m = open("test.test");
  string n[512];
  string o = "";
  int i = 0;
  int k = 0;
  while (i < m.length())
  {
    if (m[i] != ';')
    {
      o = o + m[i];
    }
    else
    {
      n[k] = o;
      o = "";
      k++;
    }
    i++;
  }
  cout << n[2] << endl;

  return 69;
}
