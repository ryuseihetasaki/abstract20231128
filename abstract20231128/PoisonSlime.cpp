#include "PoisonSlime.h"
#include "Goblin.h"
#include <iostream>
using namespace std;

PoisonSlime::PoisonSlime()
{
	_hp = 40;
	_atk = 8;
}

void  PoisonSlime::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void PoisonSlime::playBase(Enemy& enemy)
{
	//ポイズンスライムが敵へ攻撃
	cout << "ポイズンスライムの体当たり！" << endl;
	cout << "敵に " << _atk << " のダメージ！" << endl;
	attack(enemy);
}