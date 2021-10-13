#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int strtoi(string str)
{
  int a;
  stringstream ss(str);
  ss >> a;
  return a;
}

class Pointer
{

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
      b = addr.substr(1);
      a = strtoi(b);
      a = memory[a];
    } else if (addr[0] == '_') {
      
    }
  }
};



int main() {
  Program program = Program();
  string raw = "ASIGN _0 69;";
  string parsed[64];
  string current;
  int i = 0;
  int k = 0;

  while (i < raw.length()+1)
  {
    if (raw[i] == ' ') 
    {
      parsed[k] = current;
      current = "";
      k++;
    } else {
      current = current+raw[i];
    }
    i++;
  }
  cout << "\rFinished Parsing :)";
  if (parsed[0] == "ASIGN") {
    cout << "\rDetected Asign ...      ";
    if ((parsed[1])[0] == '_')
    {
      cout << "\rAsigning to Cashe ...      ";
      int a = strtoi(parsed[1].substr(1));
      program.cashe[a] = strtoi(parsed[2]);
    } 
    else 
    {
      cout << "\rAsigning to Memory ...      ";
      
    }
  }
  cout << endl << program.cashe[0] << endl;
  return 0;
}