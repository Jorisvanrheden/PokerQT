#pragma once

#include <vector>

#include "ValidationResult.h"
#include "DeckRequestCardsOutput.h"

class DeckRequestCardsResult
{
public:
	DeckRequestCardsResult(ValidationResult& result, DeckRequestCardsOutput* data = nullptr) : Result(result), Data(data)
	{

	}
	~DeckRequestCardsResult() {}

	DeckRequestCardsOutput* Data;
	ValidationResult Result;
};

