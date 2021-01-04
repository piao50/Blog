#ifndef _HELLO_H_
#define _HELLO_H_

class Widget{
 public:
  Widget();
  Widget(Widget&& rhs);
  void hello();
};

#endif
