#include "inc/Thunderbirds.h"
#include "inc/halfadder.h"
#include "inc/halfsubtractor.h"
#include "inc/DutyCycle.h"
#include "inc/project.h"
int main()


{
   Welcome_screen();


   
   int  a ,b ,c,result;

   switch (Parameter_s())

   {

   case 1:
      {
         
      printf("Enter the value of voltage and current: \n");
      scanf("%d %d",&a,&b);
      result = power_input(a,b);
      printf("The Input Power of the machine is : %d", result);
      break;
      }

   case 2:
   {
      
      printf("Enter the value of voltage and current: \n");
      scanf("%d %d",&a,&b);
      result = power_output(a,b);
      printf("The Output Power of the machine is : %d", result);

      break;
   }
   case 3:
   {
      printf("Enter the value of voltage and current: \n");
      scanf("%d %d",&a,&b);
      result = resistance(a,b);
      printf("The Resistance of the machine is : %d", result);

      break;
   }
   case 4:
   {  
      printf("Enter the value of N-turns and current : \n");
      scanf("%d %d",&a,&b);
      result = freq(a,b);
      printf("The Frequency of the machine is : %d", result);

      break;
   }
   case 5:
   {
      printf("\nEnter the value of Freq and Poles :\n");
      scanf("%d %d",&a,&b);
      result = speed(a,b);
      printf("The Speed of the machine is : %d", result);
      break;
   }
   case 6:
   {
       printf("Enter the value of Force and radius :\n");
      scanf("%d %d",&a,&b);
      result = torque(a,b);
      printf("The Torque of the machine is : %d", result);
      break;
   }
   case 7:
   {
        
      printf("Enter the value of Turn_primary, V1 and V2 :\n");
      scanf("%d %d %d",&a,&b,&c);
      result = secondary_turns(a,b,c);
      printf("The Secondary side turn of Transformer : %d", result);
      break;
   }
    // Sambit's code
   case 8:
   {
       adder();
       break;
   }

   case 9:
   {
       subtractor();
       break;
   }

   case 10:
   {
       Sambit();
       break;
   }
    case 11:
    ohm(); 
    break;

    // Case for performing tensile strength calculation
    case 12:
    tscalci();
    break;

    // Case for performing Kirchoff's voltage law
    case 13:
    kvl();
    break;

    // Case for performing Kirchoff's Current law
    case 14:
    kcl(); 
    break;
   }
         
         //title();
         Parameter_s();
    
    Factor_s();
   

    int Power,Voltage;
    switch (Wire_selection())
    {
        case 1:
        {
            printf("+++If the volage is in range of 120-220 for domestic purposes+++\n");
            printf("Enter the value of Power and Voltage\n");
            scanf("%d %d",&Power,&Voltage);
            result = load_current(Power,Voltage);
            printf("The seletion of wire on the bases of Load_current =  %d \n",result);
            
             if (result == 11)
             {
                 printf("The number and diameter of the wire = 1/0.044 ");
                 printf("The Cross-section of the wire = 0.0015 ");
             }
             else if (result == 13)
             {
                 printf("The number and diameter of the wire = 3/0.029 ");
                 printf("The Cross-section of the wire = 0.002 ");
             }
             else if (result == 16)
             {
                 printf("The number and diameter of the wire = 3/0.034 ");
                 printf("The Cross-section of the wire = 0.003 ");

             }
             else if (result == 21)
             {
                 printf("The number and diameter of the wire = 7/0.029");
                 printf("The Cross-section of the wire = 0.0045 ");

             }
              else if (result == 28)
             {
                 printf("The number and diameter of the wire = 7/0.036 ");
                 printf("The Cross-section of the wire = 0.007 ");

             }
              else if (result == 34)
             {
                 printf("The number and diameter of the wire = 7/0.044 ");
                 printf("The Cross-section of the wire = 0.01 ");

             }
             else
             {
                 printf("The Load current is high so use the case 2 for industrial purposes");
             }
             break;



        }
         case 2:
        {
            printf("+++If the volage is in range of 420-440 for industrial purposes+++\n");
            printf("Enter the value of Power and Voltage\n");
            scanf("%d %d",&Power,&Voltage);
            result = load_current(Power,Voltage);
            printf("The seletion of wire on the bases of Load_current =  %d \n",result);
             if (result == 43)
             {
                 printf("The number and diameter of the wire = 7/0.052 ");
                 printf("The Cross-section of the wire = 0.145 ");
             }
             else if (result == 56)
             {
                 printf("The number and diameter of the wire = 7/0.064 ");
                 printf("The Cross-section of the wire = 0.0225 ");
             }
             else if (result == 66)
             {
                 printf("The number and diameter of the wire = 19/0.044 ");
                 printf("The Cross-section of the wire = 0.03 ");

             }
             else if (result == 77)
             {
                 printf("The number and diameter of the wire = 19/0.044 ");
                 printf("The Cross-section of the wire = 0.04 ");

             }
              else if (result == 89)
             {
                 printf("The number and diameter of the wire = 19/0.054 ");
                 printf("The Cross-section of the wire = 0.05 ");

             }
              else if (result == 105)
             {
                 printf("The number and diameter of the wire = 19/0.064 ");
                 printf("The Cross-section of the wire = 0.06 ");

             }
             else
             {
                 printf("The load is too high such wire are not avalable in marke ");
             }
             break;

      default:
      {
      printf("wrong choice : \n");
      break;
      }
   }
   return 0;
}

   }
