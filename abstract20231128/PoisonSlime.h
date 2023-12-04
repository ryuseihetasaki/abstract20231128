#pragma once
#include "Enemy.h"
class PoisonSlime :
    public Enemy
{
public:
    PoisonSlime();
    void attack(Enemy& enemy);
    void playBase(Enemy& enemy);
};

