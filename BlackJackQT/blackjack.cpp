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


Deck::Deck() {
	for (int j = 0; j < 4; j++) {
		for (int i = 2; i <= 10; i++) {
			deck.push_back(Card{ (name)i, (c_suit)j});
		}
		deck.push_back(Card{ J, (c_suit)j });
		deck.push_back(Card{ Q, (c_suit)j });
		deck.push_back(Card{ K, (c_suit)j });
		deck.push_back(Card{ A, (c_suit)j });
	}
	std::shuffle(std::begin(deck), std::end(deck), std::default_random_engine());
}

Card Deck::get_card() {
	Card back = deck.back();
	deck.pop_back();
	return back;
}