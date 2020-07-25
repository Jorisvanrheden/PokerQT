// PokerApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "PokerFactory.h"
#include "ITableModel.h"

IFactory* CreateFactory() 
{
	return new PokerFactory();
}

int main()
{
	IFactory* factory = CreateFactory();
	ITableModel* table = factory->CreateTable();

	for (int i = 0; i < 5; i++) 
	{
		IPlayer* player = factory->CreatePlayer();
		table->AddPlayer(player);
	}

	//for each round
	table->DistributeCards();
}