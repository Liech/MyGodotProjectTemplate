#include "HelloWorld.h"

std::string HelloWorld::message() const
{
    return "Hello World from CPP Lib";
}

#ifdef ISTESTPROJECT
#include <catch2/catch_test_macros.hpp>

TEST_CASE("HelloWorld")
{
    REQUIRE(HelloWorld().message() == "Hello World");
}

#endif