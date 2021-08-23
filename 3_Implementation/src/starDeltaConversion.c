/**
 * @file starDeltaConversion.c
 * @author Sangeetha nambiraj
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
int starDeltaConversion()
{
struct Star_circuit_resistors
{
    float R_1;
    float R_2;
    float R_3;
}res_1,res_2,res_3;
struct Delta_circuit_resistors
{
    float R_a;
    float R_b;
    float R_c;
}res_a,res_b,res_c;
struct Star_circuit_inductors
{
    float L_1;
    float L_2;
    float L_3;
}ind_1,ind_2,ind_3;
struct Delta_circuit_inductors
{
    float L_a;
    float L_b;
    float L_c;
}ind_a,ind_b,ind_c;
struct Star_circuit_capacitors
{
    float C_1;
    float C_2;
    float C_3;
}cap_1,cap_2,cap_3;
struct Delta_circuit_capacitors
{
    float C_a;
    float C_b;
    float C_c;
}cap_a,cap_b,cap_c;

int comp;
printf("Select the component required\n-----------------------------------\n");
            printf("1-Resistor\n2-Inductor\n3-Capacitor");
            printf("\nSelect the component: ");
            scanf("%d",&comp);
if(comp==1) 
//Check the required component is resistor
{
int c;
printf("Select the transformation\n---------------------------------------\n");
printf("1.Star-->Delta conversion\n2.Delta-->Star conversion\n-------------------------\n");
printf("The transformation is: ");
scanf("%d",&c);
// Get the transformation type from the user
switch(c)
{
    case 1: 
    // Star to Delta tranformation of Resistors
        printf("Enter the values of star connected resistors\n");
        printf("R_1= ");
        scanf("%f",&res_1.R_1);
        printf("R_2= ");
        scanf("%f",&res_2.R_2);
        printf("R_3= ");
        scanf("%f",&res_3.R_3);
        float sum=(res_1.R_1 * res_2.R_2)+(res_2.R_2 * res_3.R_3)+(res_1.R_1 * res_3.R_3);
        float R_a=sum/res_2.R_2;
        float R_b=sum/res_3.R_3;
        float R_c=sum/res_1.R_1;
        printf("The equivalent delta config. are \nR_a= %.2f Ohms\nR_b= %.2f Ohms\nR_c= %.2f Ohms\n",R_a,R_b,R_c);
        break;
    case 2:
    // Delta to star transformation of resistor
        printf("Enter the values of delta resistors\n");
        printf("R_a= ");
        scanf("%f",&res_a.R_a);
        printf("R_b= ");
        scanf("%f",&res_b.R_b);
        printf("R_c= ");
        scanf("%f",&res_c.R_c);
        float sum1=res_a.R_a + res_b.R_b + res_c.R_c;
        float R_1=(res_a.R_a*res_b.R_b)/sum1;
        float R_2=(res_b.R_b*res_c.R_c)/sum1;
        float R_3=(res_a.R_a*res_c.R_c)/sum1;
        printf("The equivalent star config. are \nR_1= %.2f Ohms\nR_2= %.2f Ohms\nR_3= %.2f Ohms\n",R_1,R_2,R_3);
        break;
    default:
        printf("Enter valid option");
}
}
else if(comp==2)
//Check the required component is inductor
{
int c;
printf("Select the transformation\n---------------------------------------\n");
printf("1.Star-->Delta conversion\n2.Delta-->Star conversion\n-------------------------\n");
printf("The transformation is: ");
scanf("%d",&c);
// Get the transformation type from the user
switch(c)
{
    case 1: 
    // Star to delta transformation of inductor
        printf("Enter the values of star connected inductors\n");
        printf("L_1= ");
        scanf("%f",&ind_1.L_1);
        printf("L_2= ");
        scanf("%f",&ind_2.L_2);
        printf("L_3= ");
        scanf("%f",&ind_3.L_3);
        float sum=(ind_1.L_1 * ind_2.L_2)+(ind_2.L_2 * ind_3.L_3)+(ind_1.L_1 * ind_3.L_3);
        float L_a=sum/ind_2.L_2;
        float L_b=sum/ind_3.L_3;
        float L_c=sum/ind_1.L_1;
        printf("The equivalent delta config. are \nL_a= %.2f mH\nL_b= %.2f mH\nL_c= %.2f mH\n",L_a,L_b,L_c);
        break;
    case 2:
    // Delta to star transformation of inductor
        printf("Enter the values of delta inductors\n");
        printf("L_a= ");
        scanf("%f",&ind_a.L_a);
        printf("L_b= ");
        scanf("%f",&ind_b.L_b);
        printf("L_c= ");
        scanf("%f",&ind_c.L_c);
        float sum1=ind_a.L_a + ind_b.L_b + ind_c.L_c;
        float L_1=(ind_a.L_a*ind_b.L_b)/sum1;
        float L_2=(ind_b.L_b*ind_c.L_c)/sum1;
        float L_3=(ind_a.L_a*ind_c.L_c)/sum1;
        printf("The equivalent star config. are \nL_1= %.2f mH\nL_2= %.2f mH\nL_3= %.2f mH\n",L_1,L_2,L_3);
        break;
    default:
        printf("Enter valid option");
}
}
else if(comp==3)
//Check the required component is capacitor
{
int c;
printf("Select the transformation\n---------------------------------------\n");
printf("1.Star-->Delta conversion\n2.Delta-->Star conversion\n-------------------------\n");
printf("The transformation is: ");
scanf("%d",&c);
// Get the transformation type from the user
switch(c)
{
    case 1: 
    //Star to delta transformation of capacitor
        printf("Enter the values of star connected capacitors\n");
        printf("C_1= ");
        scanf("%f",&cap_1.C_1);
        printf("C_2= ");
        scanf("%f",&cap_2.C_2);
        printf("C_3= ");
        scanf("%f",&cap_3.C_3);
        float sum=cap_1.C_1 + cap_2.C_2 + cap_3.C_3;
        float C_a=sum/(cap_1.C_1 * cap_3.C_3);
        float C_b=sum/(cap_1.C_1 * cap_3.C_3);
        float C_c=sum/(cap_1.C_1 * cap_3.C_3);
        printf("The equivalent delta config. are \nC_a= %.2f uF\nC_b= %.2f uF\nC_c= %.2f uF\n",C_a,C_b,C_c);
        break;
    case 2:
    // Delta to star transformation of capacitor
        printf("Enter the values of delta capacitors\n");
        printf("C_a= ");
        scanf("%f",&cap_a.C_a);
        printf("C_b= ");
        scanf("%f",&cap_b.C_b);
        printf("C_c= ");
        scanf("%f",&cap_c.C_c);
        float sum1=(cap_a.C_a * cap_b.C_b)+(cap_b.C_b * cap_c.C_c)+(cap_a.C_a * cap_c.C_c);
        float C_1=sum1/cap_c.C_c;
        float C_2=sum1/cap_a.C_a;
        float C_3=sum1/cap_b.C_b;
        printf("The equivalent star config. are \nC_1= %.2f uF\nC_2= %.2f uF\nC_3= %.2f uF\n",C_1,C_2,C_3);
        break;
    default:
        printf("Enter valid option");
}
}
else
printf("Enter valid component character");
// if the value of component is other than R,L,C
}
