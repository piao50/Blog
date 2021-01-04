#ifndef _HELLO_H_
#define _HELLO_H_

class Widget{
 public:
  Widget();
  Widget(Widget&& rhs);
  void hello();

  template<typename T>
    void f(const T& param);
};

#endif
