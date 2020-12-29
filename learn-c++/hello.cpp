#include <iostream>
using namespace std;

int addition(int a, int b)
{
  int r;
  r = a + b;
  return r;
}

int main()
{
  std::cout << "hello, gushi!" << std::endl;

  //  int cnt = 10; while(cnt-->0) std::cout << cnt << std::endl;

  char a;
  int b;
  unsigned c;
  float d;
  double e;
  bool f;

  string mystring;
  mystring = "hello, message ...";
  string mystring1 = "hello, OK!";
  string mystring2("hello, Win!");
  cout << mystring2 << endl;

  const double pi = 3.1415926L;
  cout << pi << endl;

  int x = 0;
  if (x > 0)
    cout << "x is positive";
  else if (x < 0)
    cout << "x is negative";
  else
    cout << "x is 0";
  cout << endl;

  int cnt = 10;
  while(cnt-->0) cout << cnt << ",";
  cout << endl;

  cnt = 10;
  do { cout << cnt << ","; } while (cnt-->0);
  cout << endl;

  cnt = 10;
  for (int i = 0; i < cnt; i++) cout << i << ",";
  cout << endl;

  for (int n = 0, i = 100; i < 10; ++n, --i) cout << "(" << i << "," << n << ") ";
  cout << endl;

  string str{"hello"};
  for(auto c : str) cout << "[" << c << "]";

  int z;
  z = addition(5, 3);
  cout << "The result of addtion(5,3) is " << z << endl;
  
  std::cout << "bye, gushi!" << std::endl;
  return 0;
}
