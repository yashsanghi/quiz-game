#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printQue();

void life_line();

void checkAnswer();

char Aque[200] = {" What was the name of the last king of Burma, who spent his last days in Maharashtra?"}; // alternative question/ flip question

char Aoptions[4][200] = {                           // alternative question's/flip's options
                            "Mindon",
                            "Thibaw",
                            "Thalun",
                            "Narathu"
                        };

char Aanswer = 'b';                             //   correct option for flip question

char prize[15][40] ={                                               // list of prize money
		                "Rs.1000_______level 1",                    // there are four levels of the game 
        				"Rs.3000",
        				"Rs.5000",
        				"Rs.10,000_______level 2",
        				"Rs.20,000",
        				"Rs.40,000",
        				"Rs.80,000",
        				"Rs.1,60,000",
        				"Rs.3,20,000_______level 3",
        				"Rs.6,40,000",
        				"Rs.12,50,000",
        				"Rs.25,50,000",
        				"Rs.50,00,000_______level 4",
        				"Rs.1 CRORE",
        				"Rs.2 CRORES"
	};

char que[15][200] = {                     // stores the list of the questions
		               " Which of these legitimate deliveries in cricket would typically rise the highest after pitching?",
    			       " What does â€˜Râ€™ stand for in the name of the educational organization NCERT?",
    			       " Which of the following sparkles due to internal reflection of light?",
    			       " When returning from Lanka after emerging victorious, whom did Lord Rama send ahead as his messenger to Bharat?",
    			       " How many persons with the surname Patnaik have served as chief minister of Odisha?",
    			       " Which of these disease is not included in the Government of Indiaâ€™s vaccination drive, Mission Indradhanush?",
    			       " How many coastal states are there in India?",
    			       " Admiral Sushil Kumar, Navy chief from 1998-2001, has written the book â€œA Prime Minister to Rememberâ€,for which PM?",
    			       " What does â€˜Iâ€™ stand for in the RTI Act of 2005?",
    			       " Where in Haryana would you find an Indian Institute Of Management?",
    			       " Which former captain of the Indian cricket team shared his first name with the son of Gautam Buddha?",
    			       " 21 May is observed as Anti-Terrorism Day in India because of the assassination of which of these leaders of this day?",
    			       " Which place became the first in India to host a Paragliding World Cup in 2015?",
    			       " Who invented the electric telegraph in 1830â€™s?",
    			       " Which freedom fighter gave his name as Ram Mohammad Singh Azad while in British custody?"
	};

char options[15][4][200] = {                     // stores the list of options of respective questions
		                      { "Leg-break",
                                "Off-break",
                                "Yorker",
                                "Bouncer"},
		                      { "Regional",
                                "Review",
                                "Research",
                                "Reform"},
		                      { "Radium",
                                "Diamond",
                                "Gold",
                                "Silk"},
		                      { "Jambavant",
                                "Vibhishana",
                                "Angad",
                                "Hnauman"},
		                      { "Three",
                                "Two",
                                "Four",
                                "One"},
		                      { "Tetanus",
                                "Whooping Cough",
                                "Measles",
                                "Night-blindness"},
		                      { "7",
                                "8",
                                "9",
                                "10"},
		                      { "Atal Bihari Vajpayee",
                                "P V Narasimha Rao",
                                "Inder Kumar Gujaral",
                                "H D Deve Gowda"},
		                      { "India",
                                "Information",
                                "Institute",
                                "Indication"},
		                      { "Panipat",
                                "Gurugram",
                                "Rohtak",
                                "Jhajjar"},
		                      { "Ganguly",
                                "Tendulkar",
                                "Kumble",
                                "Dravid"},
		                      { "Beant Singh",
                                "Indira Gandhi",
                                "Vidya Charan Shukla",
                                "Rajiv Gandhi"},
		                      { "Bir Billing",
                                "Manali",
                                "Nainital",
                                "Kamshet"},
		                      { "Alexander Bell",
                                "Karl Jansky",
                                "Thomas Edison",
                                "Samuel Morse"},
		                      { "Bhagat Singh",
                                "Udham Singh",
                                "Chandrashekhar Azad",
                                "Sukhdev"}
	};
	
char Canswers[16] = "dcbdadcabcddadb";          // list of correct options

char money[40] = "null";                        //

char levels[40]  = "null";                      //

int a = 0;                                      // a is the count of the question, the most important part of the program

int lifeLine1 = 0, lifeLine2 = 0;               // counts the number of time a lifeline is used gets incremented if any lifeline is used once

int main()
{
	for(int i = 15; i>0; i--)
		printf("\t\t%2d  %s\n",i,prize[i-1]);     // print the list of prize money

	printf("press enter key to start the game");  // ask to press enter to start
    getchar();
    
	printQue();                                    //calls the function printQue
}

void printQue()               // function to print the question
{
	printf("\t\t\t\t\t\t\t\t\t---%s---\n\n",money);  // to print the box
	printf("\t\t\t ___________________________________________________________________________________________________________________________\n");
	printf("\t\t\t|                                                                                                                           |\n");
	printf("\t\t\tQ%d.%-120s |\n",a+1,que[a]);  // to print the question
	for(int i = 0; i<4; i++)
	{
		printf("\t\t\t%c. %-120s |\n",i+97,options[a][i]); // to print the options
	}
	printf("\t\t\t|___________________________________________________________________________________________________________________________|\n");
	
	if(a==1)                                               //conditional to specify minimum amount of prize money won by player for each level they cross
		strcpy(levels,prize[a-1]);
	if(a==4)
		strcpy(levels,prize[a-1]);
	if(a==9)
		strcpy(levels,prize[a-1]);
	if(a==13)
		strcpy(levels,prize[a-1]);
		
    if(lifeLine1==0 || lifeLine2==0)                      // calling life_line function given either of one is not used
        life_line();

    checkAnswer();                                       // function call to check answer
}

void checkAnswer()      // function to ask about answer and check it
{
    char answer;
    printf("\n\t\t\ttell the correct answer(a,b,c,d): ");
	scanf("%c",&answer);
	getchar();
	if(!(answer == 'a' || answer == 'b' || answer == 'c' || answer == 'd'))
    {
        printf("\n\t\t\tplease enter option only from (a,b,c,d)\n");
        checkAnswer();
    }
	if(answer == Canswers[a])                                                // matches input option with correct answer
	{
		printf("\n\t\t\t\t\t\t\t\t\tyour answer is CORRECT\n\n");
		strcpy(money,prize[a]);
		if(a==14)  // checking that if the last question is done
        {
            printf("\t\t\t\t-----------------------CONGRATULATIONS YOU WON 2 CRORES----------------------\n");
            exit(1);                                                         // printing the congratulation message of winning the game
        }
		a++;                                                                 // increments "a" so that functions move to next question later
		
		printQue();
	}
	else                                                                     // if answer is wrong
	{
	    printf("\n\t\t\t\t\t\t\t\t\tyour answer is wrong\n");
		strcpy(money,levels);                                                // levels variable store the money prize at nearest bottom game level
		printf("\n\t\t\t\t\t\t\t\t\tyou won Rs.%s\n",levels);                // print the final prize money
		exit(1);
	}
}

void flipQue()                                                               // function to flip the question
{
    strcpy(que[a],Aque);                                                     // replacing present question with alternative question
    for(int i = 0; i<4; i++)
    {
        strcpy(options[a][i],Aoptions[i]);                                   // replacing present options with alternative options
    }
	Canswers[a] = Aanswer;                                                   // replacing the present correct option with alternative correct option
	printQue();
}

void fiftyFifty()                                                            // function to omit two options other than correct option
{
    int x;
    x = (int)Canswers[a]-97;
    int x1,x2;
    while(1)                                                                 // rand() function calls random values 
    {
        x1 = rand()%4;
        
        if(x1!=x)                                                            // remove any 1 option other than correct answer
            break;
    }
    while(1)
    {
        x2 = rand()%4;                          
        
    	if(x2!=x1 && x2!=x)                                                  // remove any 1 option other than correct answer and x1
            break;
    }
    
    strcpy(options[a][x1],"------------wrong answer-----------");
    strcpy(options[a][x2],"------------wrong answer-----------");
    
    printQue();
}

void life_line()                                                             // function to ask for lifeline
{
    char lifeLine;
    printf("\n\n\t\t\ttell which lifeline you want to use(a lifeline could be used only once)\n");
	printf("\t\t\tfor (50-50) enter 'p , for flip the question enter 'f', for not using lifeline enter 'n' : ");
        scanf("%c",&lifeLine);
	getchar();
	if(lifeLine=='p')
	{
		if(lifeLine1==0)                                                     // make sure that a lifeline used only once
		{
			lifeLine1++;                                                     // increasing lifeline use count so that player cant reuse lifeline
			fiftyFifty();

		}
		else
		{
			printf("\n\t\t\tyou have already used this lifeline before\n");
			life_line();
		}
	}
	else if(lifeLine=='f')
	{
		if(lifeLine2==0)                                                     // make sure that a lifeline used only once
		{
			lifeLine2++;                                                     // increasing lifeline use count so that player cant reuse lifeline
			flipQue();

		}
		else
		{
			printf("\n\t\t\tyou have already used this lifeline before\n");
			life_line();
		}
	}
	else if(lifeLine=='n')
    {
        checkAnswer();
    }
    else
    {
        printf("\n\t\t\tyou have entered wrong option\n");
        life_line();
    }
}