// g++ hello.cpp -o hello
#include <iostream>
#include <vector>
#include "hello.h"
using namespace std;

Widget::Widget(){}

void Widget::hello()
{
  cout << "hello from Widget ..." << endl;
}

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

  int sum = 0, val = 1;
  while(val <= 10){
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to 10 inclusive is "
	    << sum << std::endl;

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

  Widget *w = new Widget();
  w->hello();
  delete w;

  vector<int> v;
  for(int i = 0; i < 10; i++)
    v.push_back(i);
  for(int i = 0; i < v.size(); i++)
    cout << " (" << i << ") ";
  cout << endl;
  for (auto &i : v) i *= i;
  for (auto i : v) cout << i << " ";
  cout << endl;

  int i = sum = 0;
  int n = 10;
  for(i = sum = 0; i < n; i++)
    sum += i;
  printf("sum = %d\r\n", sum);

  printf("the best, average, worst case\r\n");
  
  std::cout << "bye, gushi!" << std::endl;
  return 0;
}
