#include "Manager.h"

inline void Manager::initFull() {
	deck.clear();

	for (int i = static_cast<int>(Suit::hearts); i <= static_cast<int>(Suit::spades); ++i) {
		for (int j = 1; j < 13; ++j)
			switch (j)
			{
			case 1:
			case 2:
				deck.push_back(new AttackCard(static_cast<Suit>(i), j));
				break;

			case 3:
				deck.push_back(new DefenseCard(static_cast<Suit>(i)));
				break;

			case 7:
				deck.push_back(new SuitChangeCard(static_cast<Suit>(i)));
				break;

			case 11:
				deck.push_back(new JumpCard(static_cast<Suit>(i)));
				break;

			case 12:
				deck.push_back(new ReverseCard(static_cast<Suit>(i)));
				break;

			case 13:
				deck.push_back(new DoubleTurnCard(static_cast<Suit>(i)));
				break;

			default:
				deck.push_back(new NomalCard(static_cast<Suit>(i), j));
				break;
			}
	}
}

inline void Manager::shuffleDeck() {
	if (deck.empty()) {
		return;
	}
	else {
		random_shuffle(deck.begin(), deck.end());
	}
}

inline Card* Manager::dealCard()
{
	Card* dealCard{ deck.back() };
	deck.pop_back();

	return dealCard;
}
