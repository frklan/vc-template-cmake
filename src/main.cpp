#include <iostream>

#include "vct/vct.h"

int main() {
  std::clog << "--- vc-template-cmake ---\n";
  
  std::clog << "Hello world!\n" << vct() << '\n';
  
  return 0;
}
