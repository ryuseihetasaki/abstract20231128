#include "Goblin.h"
#include "PoisonSlime.h"
#include <iostream>
using namespace std;

Goblin::Goblin()
{
	_hp = 20;
	_atk = 5;
}

void Goblin::attack(Enemy& enemy) 
{
	enemy.damage(_atk);
}

void Goblin::playBase(Enemy& enemy)
{
	//ƒSƒuƒŠƒ“‚ª“G‚ÖUŒ‚
	cout << "ƒSƒuƒŠƒ“‚ÌUŒ‚I" << endl;
	cout << "“G‚É " << _atk << " ‚Ìƒ_ƒ[ƒWI" << endl;
	attack(enemy);
}

