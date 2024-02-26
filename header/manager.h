#ifndef MANAGER_H
#define MANAGER_H

#include "deck.h"

class Manager {
private:
	vector<Card*> deck;

public:
	Manager() { initFull(); }

public:
	inline void initFull();

	inline void shuffleDeck();

	inline Card* dealCard(); 



};


#endif //MANAGER_H