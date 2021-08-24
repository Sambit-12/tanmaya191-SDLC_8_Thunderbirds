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
#include "input_check.h"

int main()
{
    //execute();

    int num;

    printf("------------------------------------WELCOME-------------------------------------\n");
    printf("Select the type of calculation\n");
    printf("1. Motor parameters\n");  // Shashank
    printf("2. Wire Selection\n");   // Shashank
    printf("3. Star Delta Conversion\n");   // Sangeetha
    printf("4. Ohms law\n");    //Viswak
    printf("5. KVL\n"); //Viswak
    printf("6. KCL\n"); //Viswak
    printf("7. Tensile calculator\n");  //Viswak
    printf("8. Dutycycle\n");   //Sambit
    printf("9. Adder\n");   //Sambit
    printf("10. Subtractor\n"); //Sambit
    printf("11. PCB Trace Width\n");    //Tanmaya
    printf("12. Division\n");   //Arun
    printf("13. Parallel\n");   //Saivardhan and Sanjokta
    printf("14. Series\n");     //Saivardhan and Sanjokta
    printf("15. Resistor colour code\n");   //Paras
    printf("16. Circular convolution\n");   //sanjokta
    
    

    num= input_check();
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

        

    }

        // return to program
        printf("\nEnter 1 to return to main menu\n");
        printf("\nEnter 2 to exit the program\n");
        int menu_input;
        scanf("%d",&menu_input);
        if(menu_input==1){
            main();
        }
    
    
    
    
    


   
   return 0;
}
