#include <iostream>
#include <algorithm>
#include <vector>

void print(auto&& r) {
  std::ranges::for_each(r, [](auto&& i) { std::cout << i << ' '; });
}


int main(int argc, char** argv)
{
  std::cout << "Hello, gushi!" << std::endl;

  auto v = std::vector{-1, 5, 2, -3, 4, -5, 5};
  std::erase(v, 5);                               // v: [-1,2,-3,4,-5]
  for(auto x: v) std::cout << x << ' ';
  std::cout << std::endl;
  
  std::erase_if(v, [](auto x) { return x < 0; }); // v: [2, 4]

  for(auto x : v) std::cout << x << ' ';
  std::cout << std::endl;

  std::cout << "bye, gushi!" << std::endl;

  auto v1 = std::vector<int>(4);
  std::ranges::fill(v1, -1);
  print(v1); 
// Prints "-1 -1 -1 -1 "

  
  return 0;
}
