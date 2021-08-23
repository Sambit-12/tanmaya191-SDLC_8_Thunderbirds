#include "inc/Thunderbirds.h"
#include "inc/conversion.h"
#include "inc/halfadder.h"
#include "inc/halfsubtractor.h"
#include "inc/project.h"
#include "inc/division.h"
#include "inc/trace_width.h"
#include "inc/DutyCycle.h"
#include "inc/CircularConvolution.h"
#include "inc/resistance_calculator.h"
int main()
{
    int num;
    printf("------------------------------------WELCOME-------------------------------------\n");
    printf("Select the type of calculation\n");
    printf("1. Motor parameters\n");
    printf("2. Cable\n");
    printf("3. Star Delta Conversion\n");
    printf("4. Ohms law\n");
    printf("5. KVL\n");
    printf("6. KCL\n");
    printf("7. Tensile calculator\n");
    printf("8. Dutycycle\n");
    printf("9. Adder\n");
    printf("10. Subtractor\n");
    printf("11. PCB Trace Width\n");
    printf("12. Division\n");
    printf("13. Paralle\n");
    printf("14. Series\n");
    printf("15. Resistor colour code\n");
    printf("16. Circular convolution\n");
    printf("Type : ");
    scanf("%d",&num);
   
    switch(num)
    {
        case 1:
        {
            printf("<------------------------------Motor Parameters--------------------------------->\n");
            Parameter_s();
            break;
        }
        case 2:
        {
            printf("----------------------------------Wire selection-------------------------------\n");
            Factor_s();
            break;
        }
        case 3:
        {
            printf("<-------------------------------------------Star and Delta Conversion------------------------------------------>\n");
            starDeltaConversion();
            break;
        }
        case 4:
        {
            printf("<------------------------------------------Ohms law---------------------------------------------\n");
            ohm();
            break;
        }
        case 5:
        {
            printf("<------------------------------------------KVL---------------------------------------------\n");
            kvl();
            break;
        }
        case 6:
        {
            printf("------------------------------------------KCL----------------------------------------\n");
            kcl();
            break;
        }
        case 7:
        {
            printf("------------------------------------------------tensileCalci----------------------------------\n");
            tscalci();
            break;
        }
        case 8:
        {
            printf("-----------------------------------------------DutyCycle---------------------------------\n");
            Sambit_Dutycycle();
            break;
        }
        case 9:
        {
            printf("------------------------------Adder---------------------------------\n");
            adder();
            break;
        }
        case 10:
        {
            printf("------------------------------Subtractor---------------------------------\n");
            subtractor();
            break;
        }
        case 11:
        {
            printf("--------------------------------------PCB trace width-----------------------------\n");
            trace_width_inputs();
            break;
        }
        case 12: 
        {
            printf("---------------------------------------Division-------------------------------------\n");
            division();
            break;
        }
        case 13:
        {
            printf("---------------------------------------Parallel---------------------------\n");
            parallel();
            break;
        }
        case 14:
        {
            printf("---------------------------------------Series---------------------------\n");
            series();
            break;
        }
       case 15:
        {
            
            printf("-------------------------------------Resistor Colour code------------------------------\n");
            resistance_calculator_paras();
            break;
        }
        case 16:
        {
            printf("----------------------------------------Circular Convolution-----------------------------\n");
            circular_convolution();
            break;
        }
        default:
        printf("Enter valid option");
   }
   return 0;
}
