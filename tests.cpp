/*
	CONVERTENDO NUMEORS ROMANOS

	Aluna: Marcella Pantarotto
	Matrícula: 13/0143880
	Disciplina: Métodos de Programação - UnB
	Professor: Jan Correa
*/

#include <stdio.h>
#include <gtest/gtest.h>
#include "conversão_algarismos.c"

double roman (const double);

TEST (RomanConversionTest, Positive) { 
    EXPECT_EQ (3, roman (III));
    EXPECT_EQ (4, roman (IV));
    EXPECT_EQ (5, roman (V));
    EXPECT_EQ (11, roman (XI));
    EXPECT_EQ (22, roman (XXII));
    EXPECT_EQ (40, roman (XL));
    EXPECT_EQ (75, roman (LXXV));
}
 
/*
TEST (RomanConversionTest, Negative) { 

}
*/

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);   //testar sem os primeiros ::
  return RUN_ALL_TESTS();
}
