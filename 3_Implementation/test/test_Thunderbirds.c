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

// sambit's header files
#include "halfadder.h"
#include "halfsubtractor.h"
#include "DutyCycle.h"
#include "project.h"


//tanmaya's header files
#include "trace_width.h"

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
void test_series_capacitance(void);
void test_series_inductance(void);
void test_parallel_capacitance(void);
void test_parallel_inductance(void);
void test_series_resistance(void);
void test_parallel_resistance(void);

// sambit's test cases
void test_halfadd1(void);
void test_halfadd2(void);
void test_halfsub1(void);
void test_halfsub2(void);
void test_Dutycycle(void);
void test_VoltageOutputofDutyCycle(void);

void testohm_v(void);
void testohm_c(void);
void testohm_r(void);

// tanmaya's test cases
void test_trace_width_internal();
void test_trace_width_external();



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
double x[3]={10,10,10};
double y[3]={20,20,20};
double z[3]={30,30,30};
void test_series_inductance(void)
{
  TEST_ASSERT_EQUAL(30.000000,series_inductance(3,x));
  TEST_ASSERT_EQUAL(60.000000,series_inductance(3,y));
  TEST_ASSERT_EQUAL(90.000000,series_inductance(3,z));
}
void test_series_capacitance(void)
{
  TEST_ASSERT_EQUAL(3.333333,series_capacitance(3,x));
  TEST_ASSERT_EQUAL(6.666667,series_capacitance(3,y));
  TEST_ASSERT_EQUAL(10.000000,series_capacitance(3,z));
}
void test_parallel_inductance(void)
{
  TEST_ASSERT_EQUAL(3.000000,parallel_inductance(3,x));
  TEST_ASSERT_EQUAL(6.000000,parallel_inductance(3,y));
  TEST_ASSERT_EQUAL(10.000000,parallel_inductance(3,z));
}
void test_parallel_capacitance(void)
{
  TEST_ASSERT_EQUAL(30.333333,parallel_capacitance(3,x));
  TEST_ASSERT_EQUAL(60.666667,parallel_capacitance(3,y));
  TEST_ASSERT_EQUAL(90.000000,parallel_capacitance(3,z));
}
void test_series_resistance(void)
{
  TEST_ASSERT_EQUAL(30, series_resistance(3,x));
  TEST_ASSERT_EQUAL(60, series_resistance(3,y));
  TEST_ASSERT_EQUAL(90, series_resistance(3,z));
}
void test_parallel_resistance(void)
{
  TEST_ASSERT_EQUAL(3.33, parallel_resistance(3,x));
  TEST_ASSERT_EQUAL(6.67, parallel_resistance(3,y));
  TEST_ASSERT_EQUAL(10, parallel_resistance(3,z));
}
/// sambit's test cases
void test_halfadd1(void)
{
  TEST_ASSERT_EQUAL(1,halfadd(1,0));
  //To check the Sum of the Adder 1 Xor 0 gives 1

}
void test_halfadd2(void)
{

  TEST_ASSERT_EQUAL(1,halfadd(1,0));
  //To check the Carry of the Adder
}
void test_halfsub1(void)
{
  TEST_ASSERT_EQUAL(0,halfsub(1,1));
  //To check the Difference of the subtractor 1 Xor 1 gives 0

}
  void test_halfsub2(void)
{
  TEST_ASSERT_EQUAL(1,halfsub(0,1));
  //To check the Borrow  of the subtractor 

}
void test_Dutycycle(void)
{
  TEST_ASSERT_EQUAL(0.400000,Dutycycle(2,3));
  //Value give as 1 and 0 Ton and Toff to get an Duty cycle value as 1

}
void test_VoltageOutputofDutyCycle(void)
{

  TEST_ASSERT_EQUAL(10.000000,VoltageOutputofDutyCycle(0.5,10));
  //To check the output voltage by putting Duty cycle as 5 and input voltage as 1
}

void testohm_v(void)
{
    
    TEST_ASSERT_EQUAL(7.68, ohm_v(2.4, 3.2));
    TEST_ASSERT_NOT_EQUAL(1.9, ohm_v(2.4, 3.2)); 

    
    TEST_ASSERT_EQUAL(-1.00, ohm_v(-1, 3));
    TEST_ASSERT_NOT_EQUAL(1.9, ohm_v(-1, 3));

}

void testohm_c(void)
{
    
    TEST_ASSERT_EQUAL(2.33, ohm_c(5.6, 2.4));
    TEST_ASSERT_NOT_EQUAL(1.9, ohm_c(5.6, 2.4));

    
    TEST_ASSERT_EQUAL(-1.00, ohm_c(5.6, -1));
    TEST_ASSERT_NOT_EQUAL(1.9, ohm_c(5.6, -1));
}

void testohm_r(void)
{
    
    TEST_ASSERT_EQUAL(3.1, ohm_r(6.5, 2.1));
    TEST_ASSERT_NOT_EQUAL(1.9, ohm_r(6.5, 2.1));

    
    TEST_ASSERT_EQUAL(-1.00, ohm_r(-1, 2.1));
    TEST_ASSERT_NOT_EQUAL(1.9, ohm_r(-1, 2.1));  
}

// tanmaya's test cases
void test_trace_width_external()
{
  TEST_ASSERT_EQUAL(0, external_trace_width_calculator(5,2,0,6.6,8));
  TEST_ASSERT_NOT_EQUAL(0, external_trace_width_calculator(8,2.36,1.5,6.6,8));
}

void test_trace_width_internal()
{
  TEST_ASSERT_EQUAL(0, internal_trace_width_calculator(5,2,0,6.6,8));
  TEST_ASSERT_NOT_EQUAL(0, internal_trace_width_calculator(8,2.36,1.5,6.6,8));
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
  RUN_TEST(test_series_capacitance);
  RUN_TEST(test_series_inductance);
  RUN_TEST(test_parallel_capacitance);
  RUN_TEST(test_parallel_inductance);
  RUN_TEST(test_series_resistance);
  RUN_TEST(test_parallel_resistance);

 
 // Sambit's test cases
  RUN_TEST(test_halfadd1);
  RUN_TEST(test_halfadd2);
  RUN_TEST(test_halfsub1);
  RUN_TEST(test_halfsub2);
  RUN_TEST(test_Dutycycle);
  RUN_TEST(test_VoltageOutputofDutyCycle);


  RUN_TEST(testohm_v);
  RUN_TEST(testohm_c);
  RUN_TEST(testohm_r);


  // tanmaya's test cases
  RUN_TEST(test_trace_width_external);
  RUN_TEST(test_trace_width_internal);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
