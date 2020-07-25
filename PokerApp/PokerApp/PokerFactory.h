#pragma once

#include "IFactory.h"

#include "Table.h";
#include "CardDeck.h"
#include "Player.h"

class PokerFactory : public IFactory
{
public:
	ITableModel* CreateTable()
	{
		return new Table(new CardDeck());
	}

	IPlayer* CreatePlayer()
	{
		return new Player();
	}
};