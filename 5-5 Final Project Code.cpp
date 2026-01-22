/*	 Weis, E. Balanta, G., and Varney, J.
5.5 Coding Your Final Project in C
01-20-2026	*/

#include<stdio.h>
#include<time.h>	///allows the usage of the time libary
#include<math.h>  ///allows the round fucntion to work
#include<ctype.h>  ///allows the for the use of toupper()
#include<string.h>
#include <stdlib.h> //used to clear the screen 
float percent(int tryinc, int trycor); ////prototype function for percentage
int write();
int read();
float multiplication();
float addition();
char selection(); ///prototype finction for user choice
int main()
{
	int choice, count, num, num2, answer, trycor, tryinc, correct;   ////declares the variables for count(used to exit while loop) and choice
	float total, percents;  ////declares real number variable
	time_t current_time;
	
	
	system("CLS");  ///clears the screen 
	
	char prompt[]={"Main Menu\n"}; 
	char* c_time_string;

	
	
	count=5;   ///sets the number for count
	current_time = time(NULL);   ////gets current time
	c_time_string = ctime(&current_time);  
	
	
	
	puts(prompt);  ///shows text and lets user know use of program
	printf("Current time is %s", c_time_string);    ///shows the currrent time 
	
	
	while(count>2)   ///used to loop until user wants to exit
	{
	printf("Enter 	option 1\n");   ///prompts user to enter any number between 1-5 that corelates with the choice they want
	printf("	option 2\n");
	printf("	option 3");
	printf("	option 4\n");
	printf("	E to exit\n");
	
	///put new fuction here
	choice = selection();
	
		if( choice ==5)
			{
			count=count-7;   ///changes the count number which then ends the while loop
			}
		else
		{		
		if(choice==1)   ////user choose the write file function
			{
			printf("You choose to write a file\n");	
				
			} 
		else if(choice==2)  
			{
			printf("You choose to read the file\n"); ////user choose read the file 
		
			}
		else if(choice==3) 
			{
			printf("You choose Calculation 1 which is multiplication\n");  ///user choose calculation 1 which is multiplication
			
			total = multiplication();
			
			printf("The total is %.2f", total);
						
			}
		else if(choice==4)    ///user choose calculation 2 which is addition
			{
			printf("You choose Calculation 2 which is addition\n");	
				
				total = addition(); ///calls up function
				printf("The sum is %.2f", total);
				
			}
			
	
		}
	}
	

return 0; ///ends program
}






float multiplication()
{
	
		float answer, num, num2, correct; ///declares the variables   ans is the user input
		
		printf("Enter your first number: ");
		scanf("%f", &num);    ///limits the user imput
		
		printf("Enter your second number: ");
		scanf("%f", &num2);  
		
		printf("%f + %f = ? ", num, num2);
		
		correct=num+num2; ///adds the numbers together to check against user input
			
	
	return correct;	
}


float addition()
{
	float answer, num, num2, sum; ///declares the variables   ans is the user input
		
		printf("Enter your first number: ");
		scanf("%d", &num);    ///limits the user imput
		
		printf("Enter your second number: ");
		scanf("%d", &num2);  
		
		printf("%f + %f = ? ", num, num2);
		
		sum=num+num2; ///adds the numbers together to check against user input
			

	return sum;
}




char selection()    ///used for user selection
{
	int num, count, result;  ///used to return a number value
	char choice2;

	count=2; 
	

	while(count<=2)
	{
		scanf("%s", &choice2);      ///reads and stores user choice
		
			if(choice2=='A' || choice2=='a'|| choice2=='S' || choice2=='s' || choice2 =='M' || choice2=='m' || choice2=='D'|| choice2=='d' || choice2=='E' || choice2=='e' )
			{
				
						if(choice2=='A' || choice2=='a')
						{
						num=1;
						count=5;
						}
						else if(choice2=='S' || choice2=='s')
						{
						num=2;
						count=5;
						}
						else if(choice2=='M' || choice2=='m')
						{
						num=3;
						count=5;
						}
						else if(choice2=='D'|| choice2=='d')
						{
						num=4;
						count=5;
						}
						else if(choice2=='E' || choice2=='e' )
						{
						num=5;
						count=5;
						}	
			}
				else
				{
				puts("Please enter a valid letter: "); ///prompts user for valid letter	
				getchar();
				count=2;
				}	
		
	}
		
	return num;  ///returns the number value to the main function for the user seclection  
}
	
	
	

