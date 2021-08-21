/**
 * @file login.c
 * @author Shashank Bhati
 * @brief 
 * @version 0.1
 * @date 2021-07-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Thunderbirds.h"
/**
 * @brief For determining the login by the user
 * 
 */
void Welcome_screen(void)
{
   printf("********************LETS FIND THE PARAMETER OF***************\n");
   printf("*******************AC/DC MACHINE AND TRANFORMER*********************\n");
   printf("***Enter any key*****.......\n");
   system("cls");
}

void login_screen(void)
{

   char Username[15];
   char Password[10];
   char original_Usernmae[15] = "shashank";
   char original_Password[10] = "1234";

   printf("Enter Your Username and Password......: \n");
   printf("Your Username :\n");
   scanf("%s", Username);
   printf("Your Password :\n");
   scanf("%s", Password);
   if (strcmp(Username, original_Usernmae) == 0 && strcmp(Password, original_Password) == 0)
   {
      printf("Login Sucessful\n");
      system("cls");
      printf("Now we are ready to find the different Parameters :\n");
      printf("Let's Begin........!!\n");
      
   }
   else
   {
      printf("Login Unsucessful.......!!!\n");
   }
}
