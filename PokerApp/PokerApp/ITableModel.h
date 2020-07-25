#pragma once

#include "IPlayer.h"

class ITableModel 
{
public:
	virtual void AddPlayer(IPlayer* player) = 0;
	virtual void DistributeCards() = 0;
};