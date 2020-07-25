#pragma once

#include <vector>

class DeckRequestCardsOutput 
{
public:
	DeckRequestCardsOutput(const std::vector<int>& cards) : Cards(cards) 
	{
		
	}

	std::vector<int> Cards;
};