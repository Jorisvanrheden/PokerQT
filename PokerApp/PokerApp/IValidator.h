#pragma once

#include "ValidationResult.h"

template<typename T, typename U>
class IValidator
{
public:
	virtual ValidationResult ValidateRequest(T request) = 0;
	virtual ValidationResult ValidateResult(U result) = 0;
};