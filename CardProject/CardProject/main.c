#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define CARDS 52
#define FACES 13
#define SUITES 4
#define HAND 5

enum pokerOrder {
	noPoker,
	singlePair,
	doublePair,
	triple,
	straight,
	flush,
	quad
};

struct card {
	const char *face;
	const char *suit;
	unsigned int nFace;
	unsigned int nSuite;
};

typedef struct card Card;

void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]) {
	for (size_t i = 0; i < CARDS; ++i) {
		wDeck[i].face = wFace[i % FACES];
		wDeck[i].suit = wSuit[i / FACES];
		wDeck[i].nFace = i % FACES;
		wDeck[i].nSuite = i / FACES;
		
	}
}

void shuffle(Card * const wDeck) {
	for (size_t i = 0; i < CARDS; ++i) {
		int rn = rand();
		size_t j = rn % CARDS;
		Card temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}

void deal(const Card * const wDeck, size_t size) {
	for (size_t i = 0; i < size; ++i) {
		printf("%s of %s\n", wDeck[i].face, wDeck[i].suit);
	}
	printf("\n");
}

void pokerHand(const Card * const wDeck, Card * const wHand, int playerNumber, int numberOfPlayers) {
	
	switch (playerNumber) {
		case 0: {
			size_t j = 0;
			for (size_t i = 0; i < HAND; ++i) {
				if (numberOfPlayers == 1) {
					j = i;
				}
				else if (numberOfPlayers == 2) {
					j = i * 2;
				}
				wHand[i] = wDeck[j];
			}
			break;
		}
		case 1: {
			size_t j = 0;
			for (size_t i = 0; i < HAND; ++i) {
				if (numberOfPlayers == 2) {
					j = i * 2 + 1;
				}
				wHand[i] = wDeck[j];
			}
			break;
		}
	}
}

//Flush Check
enum pokerOrder flushCheck(unsigned int wSuiteCounter[]) {
	for (size_t s = 0; s < SUITES; s++) {
		if (wSuiteCounter[s] == 5) {
			return flush;
		}
	}
	return noPoker;
}

//Straight Check
enum pokerOrder straightCheck(unsigned int wFaceCounter[]) {
	int cn = 0;
	for (size_t i = 0; i < FACES; i++) {
		if (cn == 5) {
			return straight;
		}
		if (wFaceCounter[i] == 1) {
			cn++;
		}
		else if (wFaceCounter[i] == 0) {
			if (cn > 0) {
				cn--;
			}
		}
	}
	return noPoker;
}

//Check for Triple, Quad
enum pokerOrder quadTripleCheck(unsigned int wFaceCounter[]) {
	for (size_t s = 0; s < FACES; s++) {
		if (wFaceCounter[s] == 4) {
			return quad;
		}
		else if (wFaceCounter[s] == 3) {
			return triple;
		}
	}
	return noPoker;
}

//Check for Single or Double Pair
enum pokerOrder doublePairCheck(unsigned int wFaceCounter[]) {
	unsigned int pairCounter = 0;

	for (size_t s = 0; s < FACES; s++) {
		if (wFaceCounter[s] == 2) {
			pairCounter++;
		}
	}
	if (pairCounter == 2) {
		return doublePair;
	}
	if (pairCounter == 1) {
		return singlePair;
	}
	return noPoker;
}

enum pokerOrder checkHand(const Card * const wHand, size_t size) {
	unsigned int faceCounter[FACES] = { 0 };
	unsigned int suiteCounter[SUITES] = { 0 };
	
	for (size_t i = 0; i < size; i++) {
		++faceCounter[wHand[i].nFace];
		++suiteCounter[wHand[i].nSuite];
	}
	
	enum pokerOrder po;

	po = flushCheck(suiteCounter);
	if (po != noPoker) {
		return po;
	}

	po = straightCheck(faceCounter);
	if (po != noPoker) {
		return po;
	}

	po = quadTripleCheck(faceCounter);
	if (po != noPoker) {
		return po;
	}
	
	po = doublePairCheck(faceCounter);
	if (po != noPoker) {
		return po;
	}
	
	return noPoker;
}

void printPokerOrder(enum pokerOrder po) {
	switch (po) {
	case noPoker:
		printf("No Poker Hand!\n");
		break;
	case singlePair:
		printf("You have a single pair!\n");
		break;
	case doublePair:
		printf("You have a double pair!\n");
		break;
	case triple:
		printf("You have a triple!\n");
		break;
	case straight:
		printf("You have a straight!\n");
		break;
	case quad:
		printf("You have a quadruple!\n");
		break;
	case flush:
		printf("You have a flush!\n");
		break;
	}
}

int main(void) {
	Card deck[CARDS];
	Card hand1[HAND];
	Card hand2[HAND];

	char arr[100][25];

	enum pokerOrder pokerCheck1, pokerCheck2;
	
	FILE *rfPtr;

	const char *face[FACES] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	const char *suit[SUITES] = { "Hearts", "Diamonds", "Clubs", "Spades" };


	srand(time(NULL));

	fillDeck(deck, face, suit);
	shuffle(deck);

	printf("One Player Poker:\n");
	pokerHand(deck, hand1, 0, 1);
	deal(hand1, HAND);
	pokerCheck1 = checkHand(hand1, HAND);
	printPokerOrder(pokerCheck1);

	for (size_t i = 0; i < 100; i++) {
		fillDeck(deck, face, suit);
		shuffle(deck);

		printf("\n\n\nTwo Player Poker:\n");
		printf("Player 1:\n");
		pokerHand(deck, hand1, 0, 2);
		deal(hand1, HAND);
		pokerCheck1 = checkHand(hand1, HAND);
		printPokerOrder(pokerCheck1);
		printf("\n");

		printf("Player 2:\n");
		pokerHand(deck, hand2, 1, 2);
		deal(hand2, HAND);
		pokerCheck2 = checkHand(hand2, HAND);
		printPokerOrder(pokerCheck2);
		printf("\n");

		if (pokerCheck1 > pokerCheck2) {
			printf("Result: Player 1 Won!");
			strcpy(arr[i], "Player 1 Won!\n");
		}
		else if (pokerCheck1 < pokerCheck2) {
			printf("Result: Player 2 Won!");
			strcpy(arr[i], "Player 2 Won!\n");
		}
		else {
			printf("Result: No contest!");
			strcpy(arr[i], "No contest!\n");
		}
	}

	rfPtr = fopen("results.txt", "w");
	if (rfPtr == NULL) {
		printf("Could not open file.");
		return;
	}

	for (size_t i = 0; i < 100; i++) {
		fprintf(rfPtr, arr[i]);
	}

	fclose(rfPtr);

	getch();
}