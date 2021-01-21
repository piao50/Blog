#ifndef _DATA_H_
#define _DATA_H_

// Abstract Data Types

class Hello
{
 public:
  Hello();
  ~Hello();
  void hello();
 protected:
  int m_data = 0;
};

#endif
