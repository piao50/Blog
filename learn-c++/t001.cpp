#include <iostream>
#include <queue>
#include <list>

using namespace std;

#define ASPECT_RATIO 1.653

const double AspectRatio = 1.653;

template<typename T> void f(const T& v)
{
  cout << "f (" << v << ")" << endl;
}

template<typename T>
inline void callWithMax(const T& a, const T& b)
{
  f(a > b ? a : b);
}


int main(){
  std::cout << "hello, gushi ..." << std::endl;

  queue<int> q1;
  q1.push(1); q1.push(2); q1.push(3);

  while(!q1.empty()) {
    cout << q1.front() << ' ';
    q1.pop();
  }

  std::cout << "AspectRatio: " << AspectRatio << endl;

  cout << "callWithMax(1,2)" << endl;
  callWithMax(10,2);
  
  std::cout << "bye, gushi!" << std::endl;  
  return 0;
}
