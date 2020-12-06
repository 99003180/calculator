#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <calculator.h>
#include <string.h>
#define PROJECT_NAME "calculator"

/* Prototypes for all the test functions */
void test_multiplication(void);
void test_subtraction(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "mult", test_multiplication);
  CU_add_test(suite, "sub", test_subtraction);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void mult(void) {
  CU_ASSERT(12== mult(6,2));
  CU_ASSERT(21== mult(7,3));
  CU_ASSERT(75==mult(15,5));
  CU_ASSERT(81 == mult(9,9));
  CU_ASSERT( 20== mult(10,2));

  /* Dummy fail*/
  CU_ASSERT(15 == mult(4,3));
}

void sub(void) {
  CU_ASSERT(5== sub(10,5));
  CU_ASSERT(2  == sub(7,5));
  CU_ASSERT( 1 == sub(3,-2));
  CU_ASSERT(3 == sub(6,3));

  /* Dummy fail*/
  CU_ASSERT( 4== sub(8,2));
}
