#include <iostream>

#include "version.h"
#include "vct/vct.h"

int main() {
  std::clog << "--- vc-template-cmake ---\n";
  std::clog << "Build version: " << version() << '\n';
  
  std::clog << "Hello world!\n" << vct() << '\n';
  
  return 0;
}
