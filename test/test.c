#include <ctest.h>
#include <../src/function.h>

CTEST(Test_1_checking, input_1)
{
    int result = checking(1);
	
    int expected = 2;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_2_checking, input_m_1)
{
    int result = checking(-1);
	
    int expected = 1;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_3_checking, input_0)
{
    int result = checking(0);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Test_1_diskriminant, input_3_2_1)
{
    float result = diskriminant(3,2,1);
	
    float expected = -8;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_diskriminant, input_1_3_2)
{
    float result = diskriminant(1,3,2);
	
    float expected = 1;
	
   ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_diskriminant, input_4_4_1)
{
    float result = (4,4,1);
	
    float expected = 0;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_1_Korni, input_1_1_3_2_1)
{
    float result = Korni(1,1,3,2,1);
	
    float expected = -1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_2_Korni, input_1_1_3_2_m_1)
{
    float result = Korni(1,1,3,2,-1);
	
    float expected = -2;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Test_3_Korni, input_0_4_4_1_m_1)
{
    float result = Korni(0,4,4,1,-1);
	
    float expected = -0.5;
	
    ASSERT_DBL_NEAR(expected, result);
}
