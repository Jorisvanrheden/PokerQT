#pragma once

#include <vector>

class IPlayer 
{
public:
	virtual void SetCards(std::vector<int> cards) = 0;

};