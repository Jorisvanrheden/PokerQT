#pragma once
class ValidationResult 
{
public:
	ValidationResult(bool isValid) 
	{
		IsValid = isValid;
	}
	~ValidationResult() {}

	bool IsValid;
};