#include "pch.h"
#include <iostream>

void emetteur::diffuser(recepteur& rec)
{
	for (int i = 0; i < rec.getTabPointeurChannels().size(); i++) { //on reprend notre tableau de pointeur vers les chaines abonn�es
		rec.getTabPointeurChannels()[i]->getmessage(rec.getTabPointeurChannels()[i]->getpremier()); //on lance la methode getmessage avec en param�tre l'accesseur getpremier.
	}
}
