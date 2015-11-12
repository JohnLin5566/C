/* The card shuffling and dealing program using structure */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* card structure definition */
struct card 
{
	const char *face, *suit;
};

/* new type name for struct card */
typedef struct card Card;

void fillDeck(Card *const wDeck, const char *wFace[], const char * wSuit[]);
void shuffle (Card * const wDeck);
void deal(const Card * const wDeck);

int main()
{
	Card deck[52];	/* define array of Cards */
	const char *suit[4] = {"H", "D", "C", "S"}; 
	const char *face[13] = {"A", "2", "3", "4", "5","6", "7", "8", "9", "10", "J", "Q", "K"};
	srand(time(NULL));
	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	printf("\n");
	return 0;
}
void fillDeck(Card *const wDeck, const char *wFace[], const char * wSuit[])
{
	int i;
	for (i=0; i<=51; i++)
	{
		wDeck[i].face=wFace[i%13];
		wDeck[i].suit=wSuit[i/13];
	}
}
void shuffle (Card * const wDeck)
{
	int i, j;
	j = rand() % 52;
	Card temp;	/* define temporary structure for swapping Cards */
	for (i=0; i<=51; i++)
	{
		temp=wDeck[i];
		wDeck[i]=wDeck[j];
		wDeck[j]=temp;
	}
}
void deal(const Card * const wDeck)
{
	int i;
	for (i=0; i<=51; i++)
	{
		printf("%3s of %-3s%c", wDeck[i].face, wDeck[i].suit, (i+1)%4 == 0 ? '\n':'\t');
	}
}
