/*
	CONVERTENDO NUMEORS ROMANOS

	Aluna: Marcella Pantarotto
	Matrícula: 13/0143880
	Disciplina: Métodos de Programação - UnB
	Professor: Jan Correa
*/
#include <stdio.h>
#include <gtest/gtest.h>
#include "roman.cpp"	//programa em que aplicará os testes

double roman (const double);

//testes positivos sobre a conversão dos algarismo
TEST (RomanConversionTest, Positive) { 
    EXPECT_EQ (3, roman (III));
    EXPECT_EQ (4, roman (IV));
    EXPECT_EQ (11, roman (XI));
    EXPECT_EQ (22, roman (XXII));
    EXPECT_EQ (40, roman (XL));
    EXPECT_EQ (75, roman (LXXV));
    EXPECT_EQ (49, roman (XLIX));
}
 
//testes positivos sobre a conversão dos algarismo
TEST (RomanConversionTest, Negative) { 	//tentativa:
	EXPECT_EQ (-1, roman (IIII));		//4
	EXPECT_EQ (-1, roman (XCV));		//95
	EXPECT_EQ (-1, roman (XCCV));		//195
	EXPECT_EQ (-1, roman (LL));		//100
	EXPECT_EQ (-1, roman (IIX));		//7
	EXPECT_EQ (-1, roman (VVI));		//11
}

//função que encadeia todos os testes
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
