/**
 * @file test_Thunderbirds.c
 * @author Shashank Bhati
 * @brief For the testing of the every functon paramters taken into account.
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Thunderbirds.h"
#include "unity.h"

/// Required by the unity test framework 
void setUp(){}
/// Required by the unity test framework 
void tearDown(){}

/// Prototypes for all the test functions 
void test_power_input(void);
void test_power_output(void);
void test_resistance(void);
void test_freq(void);
void test_speed(void);
void test_torque(void);
void test_secondary_turns(void);
void test_load_current(void);



/* Write all the test functions */ 
/**
 * @brief Since the project uses concept of pointer and the functions doesn't take any input parameters and return 0 value, the teting is done to check 0 return value of all fuctions.
 * 
 */
void test_load_current(void) 
{
  TEST_ASSERT_EQUAL(11,load_current(2420,220));
  //help to check the load current to find the correct wire
}

void test_power_input(void) 
{
  TEST_ASSERT_EQUAL(10,power_input(5,2));
  //help to check the input power is the machine
}
void test_power_output(void) 
{

  TEST_ASSERT_EQUAL(8,power_output(4,2));

  //help to check the output power is the machine
}
void test_resistance(void)

{
  TEST_ASSERT_EQUAL(4,resistance(12,3));
   //help to check the resistance is the machine
}
void test_freq(void) 
{

  TEST_ASSERT_EQUAL(24,freq(12,2));
   //help to check the frequency is the machine
}
void test_speed(void) 
{
  TEST_ASSERT_EQUAL(30,speed(8,2));
   //help to check the speed is the machine
}
void test_torque(void) 
{
  TEST_ASSERT_EQUAL(10,torque(5,2));
   //help to check the torque is the machine
}
void test_secondary_turns(void) 
{

  TEST_ASSERT_EQUAL(40,secondary_turns(20,40,20));
   //help to check the secondary_turns is the machine
}   

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_power_input);
  RUN_TEST(test_power_output);
  RUN_TEST(test_resistance);
  RUN_TEST(test_freq);
  RUN_TEST(test_speed);
  RUN_TEST(test_torque);
  RUN_TEST(test_secondary_turns);
  RUN_TEST(test_load_current);
 


  /* Close the Unity Test Framework */
  return UNITY_END();
}
