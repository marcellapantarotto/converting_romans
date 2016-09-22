/*
	CONVERTENDO NUMEROS ROMANOS

	Aluna: Marcella Pantarotto
	Matrícula: 13/0143880
	Disciplina: Métodos de Programação - UnB
	Professor: Jan Correa
*/
#include <iostream>
#include <gtest/gtest.h>
#include "roman.cpp"

double roman (const double);

//testes positivos sobre a conversao dos algarismo
TEST (RomanConversionTest, Positive) { 
    EXPECT_EQ (3, roman (III));
    EXPECT_EQ (4, roman (IV));
    EXPECT_EQ (178, roman (CLXXVIII));
    EXPECT_EQ (22, roman (XXII));
    EXPECT_EQ (47, roman (XLVII));
    EXPECT_EQ (254, roman (CCLIV));
    EXPECT_EQ (465, roman (CDLXV));
    EXPECT_EQ (475, roman (CDLXXV));
}
 
//testes positivos sobre a conversao dos algarismo
TEST (RomanConversionTest, Negative) { //tentativa:
	EXPECT_EQ (-1, roman (IIII));		//4
	EXPECT_EQ (-1, roman (XCV));		//95
	EXPECT_EQ (-1, roman (XCCV));		//195
	EXPECT_EQ (-1, roman (LL));			//100
	EXPECT_EQ (-1, roman (IIX));		//7
	EXPECT_EQ (-1, roman (VVI));		//11
	EXPECT_EQ (-1, roman (XD));			//490
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
