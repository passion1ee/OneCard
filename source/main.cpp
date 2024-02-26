#include <iostream>

#include "GameManager.h"

using namespace std;

int main() {
	GameManager gameManager;
	gameManager.init(); //초기 카드 5~10장의 지급
	
	gameManager.update();
}
