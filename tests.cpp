/*
	CONVERTENDO NUMEORS ROMANOS

	Aluna: Marcella Pantarotto
	Matrícula: 13/0143880
	Disciplina: Métodos de Programação - UnB
	Professor: Jan Correa
*/

#include <stdio.h>
#include <gtest/gtest.h>
#include "roman.c"

double roman (const double);

TEST (RomanConversionTest, PositiveNos) { 
    EXPECT_EQ (4, roman (IV));
    EXPECT_EQ (5, roman (V));
    EXPECT_EQ (6, roman (VII));
    EXPECT_EQ (9, roman (IX));
}
 
TEST (RomanConversionTest, NegativeNos) { 

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
