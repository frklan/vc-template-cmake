#include <iostream>
#include <vector>

#include <catch2/catch.hpp>

#include "vct.h"

TEST_CASE( "vct string", "[vct]" ) {
  REQUIRE( vct() == "hello from vct_lib" );
}

