#include "inc/Thunderbirds.h"
#include "inc/conversion.h"
#include "inc/halfadder.h"
#include "inc/halfsubtractor.h"
#include "inc/project.h"
#include "inc/division.h"
#include "inc/trace_width.h"
#include "inc/DutyCycle.h"
#include "regg.h"
int main()
{
    int num;
    printf("------------------------------------WELCOME-------------------------------------\n");
    printf("Select the type of calculation\n");
    printf("1. Motor parameters\n2. Cable\n3. Star and Delta Conversions\n4. Laws\n5. Tensile strength\n6. Duty cycle\n7. Adders_Subtractors\n8. PCB Trace width\n9. Division\n10. Series and parallel\n11. Resistor Colour code\n");
    printf("Type : ");
    scanf("%d",&num);
    int x,no,a;
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
            printf("Select the component required\n-----------------------------------\n");
            printf("1-Resistor\n2-Inductor\n3-Capacitor");
            printf("\nSelect the component: ");
            scanf("%d",&a);
            starDeltaConversion(a);
            break;
        }
        case 4:
        {
            printf("<------------------------------------------Basic laws---------------------------------------------\n");
            scanf("%d",&no);
            if(no==1)
            ohm();
            else if(no=2)
            kvl();
            else if(no=3)
            kcl();
            else
            printf("Invalid");
            break;
            break;
        }
        case 5:
        {
            printf("------------------------------------------------tensileCalci----------------------------------\n");
            tscalci();
            break;
        }
        case 6:
        {
            printf("-----------------------------------------------DutyCycle---------------------------------\n");
            Sambit();
            break;
        }
        case 7:
        {
            printf("------------------------------Adder and Subtractor---------------------------------\n");
            scanf("%d",&x);
            if(x==1)
            adder();
            else if(x==2)
            subtractor();
            else
            printf("Invalid");
            break;
        }
        case 8:
        {
            printf("--------------------------------------PCB trace width-----------------------------\n");
            trace_width_calculator();
            break;
        }
        case 9: 
        {
            printf("---------------------------------------Division-------------------------------------\n");
            division();
            break;
        }
        case 10:
        {
            printf("---------------------------------------Series and Parallel---------------------------\n");
            int a;
            scanf("%d",&a);
            if(a==1)
            series();
            else if(a==2)
            parallel();
            else
            printf("Invalid");
        }
        break;
        case 11:
        {
            printf("-------------------------------------Resistor Colour code------------------------------\n");
            
            getColorCode(colorCode);
             r_value =  getResistorValue(colorCode, colorValue, r_value);
             printf("\n\nThe resistor with color code %c %c %c %c has a value of %d Ohms.\n",
             colorCode[0], colorCode[1], colorCode[2], colorCode[3], r_value);
        }
        break;
        default:
        printf("Enter valid option");
   }
   return 0;
}
