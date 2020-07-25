#pragma once
class Player : public IPlayer
{
public:
	Player() {}
	~Player() {}

	void SetCards(std::vector<int> cards)
	{
		this->cards = cards;
	}

private:
	std::vector<int> cards;
};

