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
	if (deck.get_card().name == A) {
		//ask 1 or 11 mb switch
		_count += 11;
	}
	else
	_count += deck.get_card().name;
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