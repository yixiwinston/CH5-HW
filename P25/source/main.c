#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]);

int main() {

	const char* suit[4] = { "Hearts","Diamond","Clubs","Spades" };

	
	const char* face[13] = { "A","2","3","4","5","6","7",
							"8","9","10","J","Q","K" };
							
	/*
	const char* face[13] = { "Ace","Deuce","three","four","five","six","sevem",
							"eight","nine","ten","Jack","Queen","King" };
							*/

	int deck[4][13] = { 0 };

	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);

	system("pause");
	return 0;

}

void shuffle(int wDeck[][13]) {

	int row, col, card;

	for (card = 1; card <= 52; card++) {
		do {
			row = rand() % 4;
			col = rand() % 13;
		} while (wDeck[row][col] != 0);
	
		wDeck[row][col] = card;

	}

}

void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]) {

	int row, col, card;

	for (card = 1; card <= 52; card++) {
		for (row = 0; row <= 3; row++) {
			for (col = 0; col <= 12; col++) {
				if (wDeck[row][col] == card) {
					printf("%5s of %8s%c", wFace[col], wSuit[row], 
						card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}



}
