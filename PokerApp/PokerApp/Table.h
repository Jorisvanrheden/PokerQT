#pragma once

#include <vector> 
#include <iostream>

#include "ITableModel.h"
#include "IPlayer.h" 
#include "ICardDeck.h"

#include "DeckRequestCardsInteractor.h"
#include "DeckRequestCardsValidator.h"

class Table : public ITableModel
{
public:
	Table(ICardDeck* deck)
	{
		interactor = new DeckRequestCardsInteractor(new DeckRequestCardsValidator(), deck);
	}

	~Table() {}

	void AddPlayer(IPlayer* player) 
	{
		players.push_back(player);
	}

	void DistributeCards() 
	{
		for (int i = 0; i < players.size(); i++) 
		{
			DeckRequestCardsRequest request(2);
			DeckRequestCardsResult result = interactor->ProcessRequest(request);

			if (result.Result.IsValid)
			{
				players[i]->SetCards(result.Data->Cards);
			}
			else
			{
				std::cout << "Something went wrong" << std::endl;
			}			
		}
	}

private:
	//logic
	DeckRequestCardsInteractor* interactor;
	std::vector<IPlayer*> players;
};

