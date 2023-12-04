#pragma once
#include "Enemy.h"
class Goblin :
    public Enemy
{
public:
    Goblin();
    void attack(Enemy& enemy);
    void playBase(Enemy& enemy);
};

