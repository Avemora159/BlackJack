#include "blackjack.h"


Hand::Hand(Deck deck) {
	_money = 20;
	_count = 0;
	plus_card(deck);
	plus_card(deck);
}

int Hand::get_count()
{
	return _count;
}

void Hand::plus_card(Deck deck) {
	if (deck.get_card().get_value() == 11) {
		//ask 1 or 11 mb switch
		_count += 11;
	}
	else
	_count += deck.get_card().get_value();
}

Card::Card(name value, c_suit suit) {
	_value = value;
	_suit = suit;
}

int Card::get_value() {
	return _value;
}

int Card::get_suit() {
	return _suit;
}

Deck::Deck() {

}

Card Deck::get_card() {
	Card back = deck.back();
	deck.pop_back();
	return back;
}