#pragma once

#include <vector>

#include "ICardDeck.h"

class CardDeck : public ICardDeck
{
public:
	CardDeck() 
	{
		populate();
	}
	~CardDeck() {}

	std::vector<int> DrawCards(int count) 
	{
		std::vector<int> returnCards;

		for (int i = 0; i < count; i++) 
		{
			int randomIndex = rand() % cards.size();


			returnCards.push_back(cards[randomIndex]);
			cards.erase(cards.begin() + randomIndex);
		}

		return returnCards;
	}

	std::string GetCardDescription(int cardID) 
	{
		int type = (int)(cardID / values.size());
		int value = cardID - type * values.size();

		if (type < 0 || type >= types.size()) return "Invalid ID";
		if (value < 0 || value >= values.size()) return "Invalid ID";

		std::string typeString = types[type];
		std::string valueString = values[value];

		return "The " + valueString + " of " + typeString;
	}

private:
	std::vector<int> cards;

	void populate() 
	{
		for (int i = 0; i < types.size(); i++)
		{
			for (int j = 0; j < values.size(); j++)
			{
				cards.push_back(cards.size());
			}
		}	
	}

	std::vector<std::string> values{ "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
	std::vector<std::string> types{ "Spades", "Hearts", "Clubs", "Diamonds" };
};

