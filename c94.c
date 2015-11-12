/* Card shffling dealing program */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void shuffle( int wDeck[4][13] );
void deal(int wDeck[4][13], const char *wFace[13], const char *wSuit[4]);
int main()
{
	const char *suit[4] = {"H", "D", "C", "S"};
	const char *face[13] = {"A", "2", "3", "4", "5","6", "7", "8", "9", "10", "J", "Q", "K"};
	int deck[4][13] = {0};
	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);
	printf("\n");
}
void shuffle( int wDeck[4][13] )
{
	int row, column, card;
	/* for each of the 52 cards, choose slot of deck randomly */
	for (card =1; card <=52; card++)
	{
		do
		{
			row=rand()%4;	
			column=rand()%13; 	
		}while (wDeck[row][column] != 0);	/*The condition for loop continuing. */
		/* place card number in chosen slot of deck */
		wDeck[row][column] = card;
	}
}
void deal(int wDeck[4][13], const char *wFace[13], const char *wSuit[4])
{
	int card, row, column;
	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <=3; row++)
		{
			for (column = 0; column <=12; column++)
			{
				if (wDeck[row][column] == card)
				{
					printf("%3s of %3s%c", wFace[column], wSuit[row], 
					(card % 4 == 0) ? '\n':'\t');
				}
			}
		}
	}
}
