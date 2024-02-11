#include <iostream>
#include "Bar.h"
#include "Foo.h"


void foo()
{
  std::cout << "========== Foo ==============\n";
  //THIS comment alone IS  AMANX5's biggest contribution to this repo
  Foo a, b;

  Foo c = a + b;

  std::cout << "=============================\n";

}


void bar()
{
  std::cout << "========== Bar ==============\n";

  Bar a, b;

  Bar c = a + b;

  std::cout << "=============================\n";

}

int main()
{
  foo();
  bar();
}
