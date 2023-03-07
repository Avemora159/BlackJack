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

//values of cards
class C_Value {
protected:
	enum name { c2 = 2, c3, c4, c5, c6, c7, c8, c9, c10, J = 10, Q = 10, K = 10, A };
	enum c_suit { heart, diamond, spade, club };
//card
struct Card {
	name name;
	c_suit suit;
};

//card
class Card : private C_Value {
private:
	name _value;
	c_suit _suit;
	Card(name, c_suit);
public:
	int get_value();
	int get_suit();
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