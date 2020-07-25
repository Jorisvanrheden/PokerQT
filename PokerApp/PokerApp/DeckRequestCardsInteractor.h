#pragma once

#include "DeckRequestCardsRequest.h"
#include "DeckRequestCardsResult.h"

#include "ICardDeck.h" 
#include "IValidator.h"

class DeckRequestCardsInteractor
{
public:
	DeckRequestCardsInteractor(IValidator<DeckRequestCardsRequest, DeckRequestCardsResult>* validator, ICardDeck* deck) : validator(validator), deck(deck)
	{
	}
	~DeckRequestCardsInteractor() {}

	DeckRequestCardsResult ProcessRequest(DeckRequestCardsRequest request) 
	{
		ValidationResult result = validator->ValidateRequest(request);
		if (!result.IsValid) 
		{
			return DeckRequestCardsResult(result);
		}

		std::vector<int> cards = deck->DrawCards(request.CardCount);

		return DeckRequestCardsResult(result, new DeckRequestCardsOutput(cards));
	}

private:
	ICardDeck* deck;
	IValidator<DeckRequestCardsRequest, DeckRequestCardsResult>* validator;
};

