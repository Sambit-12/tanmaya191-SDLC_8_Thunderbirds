
#include "project.h"

//Function defenition for finding voltage using ohm's law
float ohm_v(float current, float resistance)
{
    float voltage;
    voltage = current*resistance;
    return voltage;
}

//Function defenition for finding current using ohm's law
float ohm_c(float voltage, float resistance)
{
    float current;
    current = voltage/resistance;
    return(current);
}

//Function defenition for finding resistance using ohm's law
float ohm_r(float voltage, float current)
{
    float resistance;
    resistance = voltage/current;
    return(resistance);
}

//initialization parameters in ohm's law
float ohm()
{
    printf("\n ***************Calculation of Voltage, Current, Resistance using Ohm's Law*************** ");
    printf("\n Parameter to be found: \n1. Voltage \n2. Current \n3. Resistance");
    int choice;
    printf("\n Enter the option : ");
    scanf("%d",&choice);

    // Finding voltage with current and resistance
    if (choice==1)
    {
      float current, resistance;
      printf("\n Enter the current value : ");
      scanf("%f",&current);
      printf("\n Enter the resistance value : ");
      scanf("%f",&resistance);
      printf("Voltage : %f",ohm_v(current,resistance));
    }
    // Finding current with voltage and resistance
    else if (choice == 2)
    {
      float voltage, resistance;
      printf("\n Enter the voltage value : ");
      scanf("%f",&voltage);
      printf("\n Enter the resistance value : ");
      scanf("%f",&resistance);
      printf("current : %f",ohm_c(voltage,resistance));
    }
    // Finding resistance with voltage and current
    else if (choice == 3 )
    {
        float voltage, current;
        printf("\n Enter the voltage value : ");
        scanf("%d",&voltage);
        printf("\n Enter the current value : ");
        scanf("%d",&current);
        printf("Resistance : %f",ohm_r(voltage,current));
    }
    // Printing a default message for invalid options
    else
    {
    printf("\n You have entered an invalid option");
    }
}

