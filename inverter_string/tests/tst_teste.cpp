#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../funcoes.hpp"

TEST_CASE("string vazia")
{
    REQUIRE(inverter_string("") == "");
}

TEST_CASE("uma palavra")
{
    REQUIRE(inverter_string("teste") == "etset");
}

TEST_CASE("uma palavra com letra maiúscula")
{
    REQUIRE(inverter_string("Teste") == "etseT");
}

TEST_CASE("uma frase com pontuação")
{
    REQUIRE(inverter_string("Oi, mundo!") == "!odnum ,iO");
}

TEST_CASE("palíndromo")
{
    REQUIRE(inverter_string("mirim") == "mirim");
}
