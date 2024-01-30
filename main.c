#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Function for adding score
void addScore(int *score, int player)
{
	(score[player])++;
}
void determineWinner(int player_scores[], int size, char player_one[], char player_two[]) //Funtion for declaring winner 
{
    if (player_scores[0] > player_scores[1]) {
        printf("%s is the winner with %d scores!\n",player_one, player_scores[0]);
       // printf("\n");
    } else if (player_scores[1] > player_scores[0]) {
        printf("%s is the winner with %d scores!\n",player_two, player_scores[1]);
    } else {
        printf("It's a draw! Both players have %d scores.\n", player_scores[0]);
    }
}

int main()
{
	//Declaring variables
	int i,j;
	int player_scores[2]={0,0};
	int size=2;
	char player_one[6];
	char player_two[6];
	char player_one_choice[4];
	char player_two_choice[4];
	char rock[] = "r";
    char paper[] = "p";
    char scissor[] = "s";
	printf("Welcome to Interactive Rock-Paper-Scissor Game\n");
	printf("\n");
	printf("--------------------------\n");
	printf("Enter player_one name: ");
	scanf("%s",player_one);
	printf("Enter player_two name: ");
	scanf("%s",player_two);
	printf("How many round you want to play: ");
	scanf("%d",&j);
	printf("\n");
	printf("-----Game Dashboard-----");
	printf("\n");
	for(i=0;i<j;i++){ //declaring a loop for having no of rounds 
	while(1){
		printf("\n");
		printf("Choose any one(Rock for 'r' ,Paper for 'p',Scissor for 's')\n");
		printf("Enter player one's choice: ");
		scanf("%s",player_one_choice);
		printf("Enter player_two's choice: ");
		scanf("%s",player_two_choice);
		if (strcmp(player_one_choice,"r")==0 && strcmp(player_two_choice,"s")==0) //conditions comparing choices of two players
		{
		//	printf("%s win! and %s lose!\n",player_one,player_two);
			printf("\n");
			printf("---SCORES---\n");
			addScore(player_scores, 0);
			break;
		}
		else if(strcmp(player_one_choice,"s")==0 && strcmp(player_two_choice,"r")==0)
		{
		//	printf("%s lose!and %s win!\n",player_one,player_two);
			    printf("\n");
				printf("---SCORES---\n");
				addScore(player_scores, 1);
			break;
		}
		else if(strcmp(player_one_choice,"r")==0 && strcmp(player_two_choice,"p")==0)
		{
		//	printf("%s lose! and %s win!\n",player_one,player_two);
			    printf("\n");
				printf("---SCORES---\n");
				addScore(player_scores, 1);
			break;
		}
		else if(strcmp(player_one_choice,"p")==0 && strcmp(player_two_choice,"r")==0)
		{
		//	printf("%s win! and %s lose!\n",player_one,player_two);
			printf("\n");
			printf("---SCORES---\n");
			addScore(player_scores, 0);
			break;
		}
		else if(strcmp(player_one_choice,"s")==0 && strcmp(player_two_choice,"p")==0)
		{
		//	printf("%s win! and %s lose!\n",player_one,player_two);
			printf("\n");
			printf("---SCORES---\n");
			addScore(player_scores, 0);
			break;	
		}
		else if(strcmp(player_one_choice,"p")==0 && strcmp(player_two_choice,"s")==0)
		{
			//	printf("%s lose! and %s win!\n",player_one,player_two);
				printf("\n");
				printf("---SCORES---\n");
				addScore(player_scores, 1);
			break;
		}
		else
		{
			printf("\n");
			printf("Invalid operations\n");
			break;
		}
	}
	printf("%s's score:%d\n",player_one,player_scores[0]); //declaring scores of player one
	printf("%s's score:%d\n",player_two,player_scores[1]);//declaring scores of player two
	printf("\n");
	determineWinner(player_scores, size, player_one, player_two);//declaring winner based on scores of both players
}
	return 0;
}
