#include "inc/Thunderbirds.h"
#include "inc/halfadder.h"
#include "inc/halfsubtractor.h"
#include "inc/DutyCycle.h"
#include "inc/project.h"
#include "inc/trace_width.h"
#include "inc/conversion.h"
#include "inc/division.h"
int main()


{
   int num;
    printf("------------------------------------WELCOME-------------------------------------\n");
    printf("Select the type of calculation\n");
    printf("1. Motor parameters\n2. Wire Selection\n3. Star and Delta Conversions\n4. Laws\n5. Tensile strength\n6. Duty cycle\n7. Adders_Subtractors\n8. PCB Trace width\n9. Division");
    printf("Type : ");
    scanf("%d",&num);
    int x,no;
    
    char ch;
    switch(num)
    {
        case 1:
        printf("<------------------------------Motor Parameters--------------------------------->\n");
        Parameter_s();
        break;
        case 2:
        printf("----------------------------------Wire selection-------------------------------\n");
        Factor_s();
        break;
        case 3:
        printf("<-------------------------------------------Star and Delta Conversion------------------------------------------>\n");
        starDeltaConversion();
        break;
        case 4:
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
        case 5:
            printf("------------------------------------------------tensileCalci----------------------------------\n");
            tscalci();
            break;
        case 6:
        printf("-----------------------------------------------DutyCycle---------------------------------\n");
            Sambit();
            break;
        case 7:
        printf("------------------------------Adder and Subtractor---------------------------------\n");
            scanf("%d",&x);
            if(x==1)
            adder();
            else if(x==2)
            subtractor();
            else
            printf("Invalid");
            break;
        case 8:
            printf("--------------------------------------PCB trace width-----------------------------\n");
            trace_width_calculator();
            break;
        case 9: 
            printf("---------------------------------------Division-------------------------------------\n");
            division();
            break;
   }
   return 0;

   }
