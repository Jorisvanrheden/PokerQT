#pragma once

#include "ITableModel.h"
#include "IPlayer.h"
#include "ICardDeck.h"

class IFactory 
{
public:
	virtual ITableModel* CreateTable() = 0;
	virtual IPlayer* CreatePlayer() = 0;
};