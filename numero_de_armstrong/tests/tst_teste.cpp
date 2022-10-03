#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../funcoes.hpp"

TEST_CASE("zero é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(0) == true);
}

TEST_CASE("número de um dígito é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(5) == true);
}

TEST_CASE("nenhum número de dois dígitos é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(10) == false);
}

TEST_CASE("número de três dígitos que é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(153) == true);
}

TEST_CASE("número de três dígitos que não é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(100) == false);
}

TEST_CASE("número de quatro dígitos que é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(9474) == true);
}

TEST_CASE("número de quatro dígitos que não é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(9475) == false);
}

TEST_CASE("número de sete dígitos que é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(9926315) == true);
}

TEST_CASE("número de sete dígitos que não é número de armstrong")
{
    REQUIRE(eh_numero_armstrong(9926314) == false);
}
