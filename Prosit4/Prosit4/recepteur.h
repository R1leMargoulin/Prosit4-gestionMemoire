#pragma once
#include <vector>
#include "pch.h"


class recepteur
{
public:
	recepteur();
	void ecouter();
	std::vector<Channel*> getTabPointeurChannels(); //accesseur vers le tableau dynamique des abonnements
	void setTabPointeurChannels(Channel*);

private:
	std::vector<int> TabChannels;
	std::vector<Channel*> TabPointeurChannels; // tebleau dynamique des abonnements, il est composé de pointeurs vers des objet Channels (pas du parfum hein ;))
};

