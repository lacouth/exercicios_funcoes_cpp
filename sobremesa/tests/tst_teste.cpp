#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../funcoes.hpp"

TEST_CASE("um gera nada")
{
    REQUIRE(sobremesa(1) == "nada");
}

TEST_CASE("três gera Queijo")
{
    REQUIRE(sobremesa(3) == "Queijo");
}

TEST_CASE("cinco gera Goiabada")
{
    REQUIRE(sobremesa(5) == "Goiabada");
}

TEST_CASE("sete gera Rapadura")
{
    REQUIRE(sobremesa(7) == "Rapadura");
}

TEST_CASE("quatorze gera Rapadura")
{
    REQUIRE(sobremesa(14) == "Rapadura");
}

TEST_CASE("vinte e um gera Queijo e Rapadura")
{
    REQUIRE(sobremesa(21) == "Queijo e Rapadura");
}

TEST_CASE("seis gera Queijo")
{
    REQUIRE(sobremesa(6) == "Queijo");
}

TEST_CASE("nove gera Queijo")
{
    REQUIRE(sobremesa(9) == "Queijo");
}

TEST_CASE("dez gera Goiabada")
{
    REQUIRE(sobremesa(10) == "Goiabada");
}

TEST_CASE("quinze gera Queijo e Goiabada")
{
    REQUIRE(sobremesa(15) == "Queijo e Goiabada");
}

TEST_CASE("trinta gera Queijo e Goiabada")
{
    REQUIRE(sobremesa(30) == "Queijo e Goiabada");
}

TEST_CASE("trinta e cinco gera Goiabada e Rapadura")
{
    REQUIRE(sobremesa(35) == "Goiabada e Rapadura");
}



