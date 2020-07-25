#pragma once

#include <vector>

class ICardDeck 
{
public:
	virtual std::vector<int> DrawCards(int count) = 0;
	virtual std::string GetCardDescription(int cardID) = 0;
};