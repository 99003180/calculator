#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator(void)
{
  TEST_ASSERT_EQUAL(5, sum(3,2));
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculator);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}