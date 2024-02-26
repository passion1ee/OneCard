#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "manager.h"
#include "player.h"
#include "CircularVector.h"


class GameManager {
private:
	Manager manager;
	CircularVector<Player> players;
	int increaseFactor;

public:
	GameManager();

	void init();
	inline void update();
	inline void render(int Turn);
	inline void eventCard(Card*);

	inline bool isDeckEmpty();
};


#endif // GAMEMANAGER_H
