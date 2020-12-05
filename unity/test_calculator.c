#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <calculator.h>
#include <string.h>
#define PROJECT_NAME "calculator"

/* Prototypes for all the test functions */
void test_sum(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "addition", test_sum);
  
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
void multiplication(void) {
  CU_ASSERT(12== sum(6,6));
  
  /* Dummy fail*/
  
}
