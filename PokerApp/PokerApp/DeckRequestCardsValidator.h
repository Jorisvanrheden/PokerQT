#pragma once

#include "DeckRequestCardsRequest.h"
#include "DeckRequestCardsResult.h" 
#include "IValidator.h"

class DeckRequestCardsValidator : public IValidator<DeckRequestCardsRequest, DeckRequestCardsResult>
{
public:
	DeckRequestCardsValidator() {}
	~DeckRequestCardsValidator() {}

	ValidationResult ValidateRequest(DeckRequestCardsRequest request)
	{
		return ValidationResult(true);
	}
	ValidationResult ValidateResult(DeckRequestCardsResult result)
	{
		return ValidationResult(true);
	}
};

