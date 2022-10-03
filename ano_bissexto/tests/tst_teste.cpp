#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../funcoes.hpp"

TEST_CASE("não divisível por 4")
{
    REQUIRE(eh_ano_bissexto(2015) == false);
}

TEST_CASE("divisível por 2 não divisivel por 4")
{
    REQUIRE(eh_ano_bissexto(1970) == false);
}

TEST_CASE("divisível por 100 não divisível por 400")
{
    REQUIRE(eh_ano_bissexto(2100) == true);
}

TEST_CASE("divisível por 400")
{
    REQUIRE(eh_ano_bissexto(2000) == true);
}

TEST_CASE("divisível por 200 não divisível por 400")
{
    REQUIRE(eh_ano_bissexto(2000) == false);
}
