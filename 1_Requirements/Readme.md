# Requirements 📝

## Introduction
In this project, a new system is designed to perform various electrical and electronics calculations and conversions. This system allows the user to solve problems quickly and in an efficient manner.

## Research

### Ohm’s Law
*	In electronics, Ohm’s law is vitally important to describe the circuits, as it relates voltage to the current with the resistance value.
*	This law was derived by the German Physicist, George Simon Ohm.
*  Ohm’s law is used to maintain the desired voltage drop across the electronic components and it is used in DC ammeter and other DC shunts to divert the current. Its application also ranges from household appliances to massive projects.
### Equivalent resistance of n parallel resistors
*  Resistors are in parallel if their terminals are connected to the same two nodes.
*	The equivalent overall resistance is smaller than the smallest parallel resistor. 
*	The equivalent parallel resistor is the reciprocal of the sum of reciprocals
### Duty cycle
*	Duty cycle is the ratio of time a load or circuit is ON compared to the time the load or circuit is OFF.
*	It is expressed as a percentage of ON time.

### Motor parameters
*	The motor parameters include frequency, output power, speed and torque. The speed of a motor depends on the rotational velocity of the motor shaft and torque is a rotating force produced by an engine’s crankshaft. 
*	The relation between torque and speed are inversely proportional to each other. 
*	Frequency is the rate at which current changes its direction per second in a machine. The output power is   calculated with the help of input power and losses in the motor.

### Phasor voltage
*	The electrical power system operates in a balanced three-phase sinusoidal operation symmetrical components can transform an unbalanced condition into symmetrical components, compute the system response by straight forward circuit analysis on simple circuit models, and transform the results back into original phase variables.
*	The theory of symmetrical components resolves any set of unbalanced voltages or currents into three sets of symmetrical balanced phasors. These are known as positive, negative and zero sequence components.

### PCB Trace Width
*	The trace is a conducting track that connects connects components electrically and allows electric current to flow with little resistance.
*	The single trace on Printed circuit Board(PCB) is the equivalent of a wire for conducting signals. Each trace consists of flat, narrow part of the copper foil that remains after etching.
*	The PCB trace widths are dependent on the needs of the signal. The thinner traces are for general purpose Transistor-Transistor Logic(TTL) signals and the thicker traces are optimized for current carrying capacity and used for high power-related functions

### Resistor Colour Code
*	In 1920, the resistor colour code was developed by Radio Manufacturers Association (RMA) as a fixed resistor colour coding. This colour coding is used to quickly identify the resistive value and its percentage of tolerance. 
*	The most popular mnemonic created to easily memorize the sequence of colours is BBROYGBVGW.
*	The composition has 3 to 6 resistor colour bands.  The three band resistor is for multiplier with no tolerance, 4 band resistor with one tolerance band, 5 band resistor with 4 multipliers and one tolerance bond, 6 band resistor have an additional band as temperature coefficient.

### Current division & Voltage division
*	Current Divider Circuits are parallel circuits in which the source or supply current divides into a number of parallel paths.
*	All the components have their terminals connected together sharing the same two end nodes.
*	A voltage divider is a simple circuit which turns a large voltage into a smaller one.
*	Voltage division is the result of distributing the input voltage among the components of the divider.

### Star and Delta Conversions
*	In a 3-phase, 3-wire supply or 3-phase load is connected in one type (Star/Delta), it can be easily changed into an equivalent type (Delta/Star) by using either Start Delta transformation or Delta Star transformation.
*	When three branches are connected nose to tail, they form a triangular closed loop, it is referred as Delta connection. Whereas the terminals are connected to a common point to form a Y like pattern, is is referred as Star connection.
*	This conversion is used to establish equivalence for the networks within the terminals.

### Selection of multi and single core wire
*	The conductor cross-section shall be chosen such that the conductor withstands prospective short circuit current for a specified duration of time.
*	Area of cross-section of the conductor shall be sized to carry estimated load current continuously such that the temperature rise of the conductor is within the acceptable limits for the installation conditions foreseen
*	Voltage drop within the cable is within the permissible limits so that the functionality of the connected load by the cable remains unaffected


## Cost and Features
*	This system saves a lot of time for the user and results in quick and accurate manner.
*	The heavy calculations are made simple with this system and it can be accessed easily.

## Defining our system
*	In this system, the essential parameters are obtained from the user as input and this system will compute the values depending on the choice made by the user for calculation.

## SWOT ANALYSIS🔍
![Screenshot (1)](https://user-images.githubusercontent.com/86397294/130183334-019dbea3-915c-4701-9086-12e86f145b1f.png)


# 4W&#39;s and 1&#39;H ❓

## 1️⃣Who?
- Any person who intends to play with some fundamentals of Electrical and Electronics arena.

## 2️⃣What?
- A virtual and command line interface based project which does basic calculation and conversions of basic electrical concepts, analysis and monitoring of various parameters of     electrical machines.

## 3️⃣When?
- The project is developed as a part of "Applied SDLC Module" of Genesis internship program.
- The project can be employed when there is need in calculation of basic Electrical concepts either in day-to-day aplplication or for labrotary procedures. 

## 4️⃣Where?
- The program is developed in Visual StudioCode IDE.
- Users can use this application on their desktop or laptop terminal
 
## 1️⃣How?
- The module was build solely by using C and concepts like "Make Files" has been implemented.
- Testing has been carried out by "Unity"
- And the code quality is ensured by screening the code in various code reviewing entities such as "Codacy", "Git Inspector", etc.

# Detail requirements

## High Level Requirements
| ID | Description | Status (Implemented) |
| ---- | ----------- | --------------------------- |
| HA01 | Calculation based on color code of the resistance| Implemented|
| HA02 | Calculation of Current and Voltage using Current Division and Voltage Division Rule | Implemented |
| HA03 | Star & Delta Conversions | Implemented |
| HA04 | Calculation of maximum current in the cable across the Load| Implemented |
| HA05 | Determining the voltage and current using ohms law| Implemented |
| HA06 | Obtaining Series and Parallel resistance | Implemented|
| HA07 | Finding the Traces of PCB designing and calculation of its Traces | Implemented|
| HA08 | Calculation of Duty cycle |Implemented|
| HA09 | Determing the Parameteres of Electrical Machines| Implemented |
| HA10 | Obtaining Value of Phasor Voltages using Symmetrical Voltage components| Implemented |




## Low level Requirements
| ID | Description |HLR|Status (To be implemented)| 
| ---- | ----------- | --------------------------- |-----------|
| LA01 | Calculation of Rasistance from the resistor color band | HA01 |To be implemented|
| LA02 | Current Divsion Calculation using combination of resistance values| HA02 |To be implemented|
| LA03 | Voltage Divsion Calculation using combination of resistance values| HA02 |To be implemented|
| LA04 | Conversion of Star Network to Delta Network by evaluating value of Ra Rb RC | HA03 |To be implemented|
| LA04 | Conversion of Delta Network to Star Network by evaluating value of Ra Rb RC | HA03 |To be implemented|
| LA06 | maximisng the Value of Current and finding the Voltage Drop Across the  Load |HA04| To be implemented|
| LA07 | Calculating Current, Resistance, Voltage using Ohms Law  |HA05|To be implemented|
| LA08 | Equivalent Resistance(Series)  when Current accross the Resistor are same. (Decreasing of Current) |HA06| To be implemented|
| LA09 | Equivalent Resistance(Parallel) when voltage accross the Resistor are same. (Increasing of Current) |HA06| To be implemented|
| LA10 | We have to give current value to "trace" which  results in  increase in trace temperature below a specified limit. |HA07|To be implemented|
| LA11 | By giving the length of the trace, total resistance, voltage drop, and power loss due to trace resistance are also calculated. |HA07|To be implemented|
| LA11 | Duty Cycle is Being calculated by calculating Ton Period and Toff Period of the wave and Output Voltage of the wave .| HA08|To be implemented|
| LA12 | Calculating Power Input and Output using Voltage and Current | HA09|To be implemented|
| LA13 | Calculating Speed, Torque of Motor/Generator  | HA09|To be implemented|
| LA14 | Inputting of 3 Symmetrical Voltage component as V0 V1 V2 |HA10|To be implemented|
| LA15 | Calculating of Phase Voltage Va Vb Vc with a Phase shift Factor {a= 1<120 Degree} | HA10 | To be implemented|
