#include "vct/vct.h"
#include "version.h"

#include <iostream>

int main() {
  std::clog << "--- vc-template-cmake ---\n";
  std::clog << "Build version: " << version() << '\n';
  
  std::clog << "Hello world!\n" << vct() << '\n';
  
  return 0;
}
