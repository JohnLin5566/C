/* Using the structure member and structure pointer opeators */
#include<stdio.h>

/* card structure definition */
struct card
{
	char *face;	char *suit;
};	/* end structure card */

int main()
{
	struct card aCard;	/*define one struct card variable */
	struct card *cardPtr;	/*define a pointer to a struct card */

	/* place strings into aCard */
	aCard.face = "Ace";	aCard.suit = "Spades";
	/* assign address of aCard to caardPtr */
	cardPtr = &aCard;

	printf( " %s%s%s\n %s%s%s\n %s%s%s\n",
		aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit, 
		( *cardPtr ).face , " of ", ( *cardPtr ).suit );

	return 0;
}
