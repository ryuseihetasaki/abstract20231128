#include "Slime.h"
#include"common.h"
#include <iostream>
using namespace std;

Slime::Slime()
{
	_hp = 20;
	_atk = 5;
}

void Slime::attack(Enemy& enemy)
{
	enemy.damage(_atk);
}

void Slime::playBase(Enemy& enemy)
{
	//スライムが敵へ攻撃
	cout << "スライムの体当たり！" << endl;
	cout << "敵に " << _atk << " のダメージ！" << endl;
	attack(enemy);
}