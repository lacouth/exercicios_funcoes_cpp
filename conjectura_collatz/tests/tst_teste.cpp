#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../funcoes.hpp"

TEST_CASE("zero passos para um")
{
    REQUIRE(conjectura_collatz(1) == 0);
}

TEST_CASE("divide se par")
{
    REQUIRE(conjectura_collatz(16) == 4);
}

TEST_CASE("passos para pares e ímpares")
{
    REQUIRE(conjectura_collatz(12) == 9);
}

TEST_CASE("número alto")
{
    REQUIRE(conjectura_collatz(1000000) == 153);
}

TEST_CASE("zero passos para zero")
{
    REQUIRE(conjectura_collatz(0) == 0);
}

TEST_CASE("zero passos para negativo")
{
    REQUIRE(conjectura_collatz(-1) == 0);
}
