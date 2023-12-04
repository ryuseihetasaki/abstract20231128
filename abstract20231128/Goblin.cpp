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
	//�S�u�������G�֍U��
	cout << "�S�u�����̍U���I" << endl;
	cout << "�G�� " << _atk << " �̃_���[�W�I" << endl;
	attack(enemy);
}

