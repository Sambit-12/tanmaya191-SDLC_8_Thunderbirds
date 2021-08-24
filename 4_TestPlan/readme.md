# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Circuit Calculator passive element parameters | Success | Success | Success | Application based |
|  H_02       | Calculator for Calculating the Duty Cycle and the output voltage of the waveform | Success | Success | Success | Application based |
|  H_03       | Calculator for Displaying the Half Adder and Subtractor (via Truth Table) | Success | Success | Success | Application based |
|  H_04       | Calculate the Different Machine Parameters | Success | Success | Success | Application based |
|  H_05       | Calculation to find Multi or Single core Wires | Success | Success | Success | Application based |
|  H_06       | Calculator for the conversion of star and delta | Success | Success | Success | Application based |



## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Calculate the Different Machine Parameters | Success | Success | Success | Requirement based |
|  L_02       | Calculate the Different Machine Parameters | Success | Success | Success | Scenario based    |
|  L_03       | Calculate the Different Machine Parameters | Success | Success | Success | Boundary based    |
|  L_04       | Calculation to find Multi or Single core Wires | Success | Success | Success | Requirement based |
|  L_05       | Calculation to find Multi or Single core Wires | Success | Success | Success | Scenario based    |
|  L_06       | Calculation to find Multi or Single core Wires | Success | Success | Success | Boundary based    |
|  L_07       | Calculation of Duty Cycle By giving input as Ton and Toff | Success | Success | Success | Requirement based |
|  L_08       | Calculation of output voltage with respect to given input voltage (v0) and calculated Duty Cycle value | Success | Success | Success | Scenario based |
|  L_09       | Input of Duty Cycle should always be less than 1 as its a ratio it cant be >=1                         | Success | Success | Success | Boundary based |
|  L_10       | Display of the Half adder and Half Subtractor                                                          | Success | Success | Success | Requirement based |
|  L_11       | Operations like XOR operation and AND operation in the given input gives the output as Sum Carry Difference Borrow|Success | Success | Success | Scenario based |
|  L_12       | The Input Value has boundary constrain as it is Half adder and Subtractor binary input range is 0-4               |Success | Success | Success | Boundary based |
|  L_13       | The passive elements required for the conversion are displayed                                             | Success | Success | Success | Requirement based |
|  L_14       | Conversion of output (star/delta) for each element with respective inputs (delta/star) |Success | Success | Success | Scenario based |
| L_15        |Finding Voltage from Voltage Division Circuit                                           |Success | Success | Success | requirement based|
|L_16         |Finding Current from Current Division Circuit                                           |Success | Success | Success | requirement based|
