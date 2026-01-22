/*	 Weis, E. Balanta, G., and Varney, J.
5.5 Coding Your Final Project in C
01-20-2026	*/

#include<stdio.h>
#include<time.h>	///allows the usage of the time libary
#include<math.h>  ///allows the round fucntion to work
#include<ctype.h>  ///allows the for the use of write()
#include<string.h>  //used for writing on file
#include<stdlib.h> //used to clear the screen 
#include<iostream> //is needed for the void and write function
#include<fstream> ///used in addition with the iostream libary for the write file function 
using namespace std; ///used for the write function

void menu();
int write();
int read();
int multiplication();
int addition();
char selection(); ///prototype finction for user choice


int main()
{
	int choice, count, num, num2, answer, correct, total, intro;   ////declares the variables for count(used to exit while loop) and choice
	time_t current_time;
	
	

	char* c_time_string;

	
	
	count=5;   ///sets the number for count
	current_time = time(NULL);   ////gets current time
	c_time_string = ctime(&current_time);  
	
	
	

	printf("Current time is %s", c_time_string);    ///shows the currrent time 
	
	
	while(count>2)   ///used to loop until user wants to exit
	{
	
	menu(); //calls menu function
	
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
			 
			write();	
				
				
			} 
		else if(choice==2)  
			{
			printf("You choose to read the file\n"); ////user choose read the file 
			
			read(); ////calls read function
			
			
				
			}
		else if(choice==3) 
			{
			printf("You choose Calculation 1 which is multiplication\n");  ///user choose calculation 1 which is multiplication
			
			total = multiplication();
			
			printf("The total is %d", total);
					
					
			}
		else if(choice==4)    ///user choose calculation 2 which is addition
			{
			printf("You choose Calculation 2 which is addition\n");	
				
				total = addition(); ///calls up function
				printf("The sum is %d\n", total);
				
				
			}
			
	
		}
	}
	

return 0; ///ends program
}


int write()
{

	int words; ///declares value for user text limit

	fstream file; //writes data the file
	
	file.open("newFile.txt",ios::out);   ///makes a new file in write mode called newfile.txt
	
	if (!file)
	{
		cout << "There was an erorr making the file!" << endl; //shows text that an erorr has occurred 
		
		return 1;  ///Returns a value of 1 to indicate an error has occurred 
	}
	else
	{
		cout << "The new file was made!" << endl;  /// Displays text that the file was made successfully 
	
		printf("Enter text to be added to the file: "); ////prompts the user to enter text for the file
		scanf( "%d", &words);   ///reads user input
	 
	 
		file << ("%d", words);	

	}
	

	file.close(); ////closes the new file
	
	return 0; //goes back to main
}



int read()
{
	fstream file;  ////Specifies  file to read
	
	
	file.open("newFile.txt",ios::in);
	
	string line;
	
	if (!file)
	{
		
		cerr << "Erorr: Cannot open specified file!" << endl; ///show erorr if file can not be opened
		
		return 1;
	}
	else 
	{
		
		while (getline(file,line))
		{
			cout << line << endl; ///reads the lines and stores them
		}
		
	}
	
	file.close(); //closes the file
	
	return 0; //goes back to main
	
}



int multiplication()
{
	
		int answer, num, num2, correct; ///declares the variables   ans is the user input
		
		printf("Enter your first number: ");
		scanf("%d", &num);    ///limits the user imput
		
		printf("Enter your second number: ");
		scanf("%d", &num2);  
		
		printf("%d * %d = ? ", num, num2);
		
		correct=num*num2; ///adds the numbers together to check against user input
			
	
	return correct;	
}


int addition()
{
	int answer, num, num2, sum; ///declares the variables   ans is the user input
		
		printf("Enter your first number: ");
		scanf("%d", &num);    ///limits the user imput
		
		printf("Enter your second number: ");
		scanf("%d", &num2);  
		
		printf("%d + %d = ? ", num, num2);
		
		sum=num+num2; ///adds the numbers together to check against user input
			

	return sum;
}


void menu()
{
		/*
		
		system("CLS"); //clears the screen but it messus up out code too much
			the if we left it activ in the main it clears the screen too fast for the user to read the text
			if we put if after each fucntion is called the results do not show
		
		*/
		
		char prompt[]={"\nMain Menu\n"};   ///shows menu text
		puts(prompt);  ///shows text and lets user know use of program
		
		
	printf("Enter 	W to Write\n");   ///prompts user to enter any number between 1-5 that corelates with the choice they want
	printf("	R to Read\n");
	printf("	M to Multiply\n");
	printf("	A to Add\n");
	printf("	E to Exit\n");
	
	
}


char selection()    ///used for user selection
{
	int num, count, result;  ///used to return a number value
	char choice2;

	count=2; 
	

	while(count<=2)
	{
		scanf("%s", &choice2);      ///reads and stores user choice
		
			if(choice2=='A' || choice2=='a'|| choice2=='W' || choice2=='w' || choice2 =='M' || choice2=='m' || choice2=='R'|| choice2=='r' || choice2=='E' || choice2=='e' )
			{
				
						if(choice2=='W' || choice2=='w')
						{
						num=1;
						count=5;
						}
						else if(choice2=='R' || choice2=='r')
						{
						num=2;
						count=5;
						}
						else if(choice2=='M' || choice2=='m')
						{
						num=3;
						count=5;
						}
						else if(choice2=='A'|| choice2=='a')
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
	
	
	

