#pragma once
#include <iostream>
#include <vector>
//player
class Hand {
private:
	int _money;
	int _count;
public:
	Hand(Deck);
	void plus_card(Deck);
	int get_count() {
		return _count;
	}
};
enum name { c2 = 2, c3, c4, c5, c6, c7, c8, c9, c10, J = 10, Q = 10, K = 10, A };
enum c_suit { heart, diamond, spade, club };
//values of cards

//card
struct Card {
	name name;
	c_suit suit;
};


//deck
class Deck {
private:
	std::vector<Card> deck;
public:
	Deck();
	Card get_card();
};

//table
class Table {
private:
	std::vector <Hand> players;
};