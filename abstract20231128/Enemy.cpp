#include "Enemy.h"
#include"common.h"
#include <iostream>
using namespace std;

void Enemy::damage(int damage)
{
	_hp -= damage;
}

bool Enemy::play(Enemy& enemy)
{
	cout << "==========ターン開始==========" << endl;

	playBase(enemy);
	cout << "相手の残りHP :" << enemy.get_hp() << endl;
	cout << "自分の残りHP :" << get_hp() << endl;

	cout << "==========ターン終了==========" << endl;

	if (enemy.get_hp() <= 0) 
	{
		cout << "敵を倒した！" << endl;
		return false;
	}
	else
	{
		return true;
	}
}