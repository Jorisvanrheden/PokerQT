#pragma once
class DeckRequestCardsRequest
{
public:
	DeckRequestCardsRequest(int cardCount) : CardCount(cardCount)
	{
	
	}
	~DeckRequestCardsRequest() 
	{
		
	}

	int CardCount;
};

