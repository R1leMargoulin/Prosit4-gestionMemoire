#include "equipe.h"
#include <iostream>

using namespace std;

void equipe::presentation()
{
	cout << "c'est nous l'equipe ON EST LAAAAAAAAAA" << endl;
}


equipe::equipe()
{
	a.ajouter(this);
}


equipeSenior::equipeSenior(stockage a)
{
	a.ajouter(this);
}

void equipeSenior::presentation()
{
	cout << "nous c'est les vieux mais calmez vous les D'jeun's" << endl;
}



void stockage::ajouter(equipe* p)
{
	tableau.push_back(p);
}

void stockage::action()
{
	for (int i = 0; i = tableau.size(); i++) {
		tableau[i]->presentation();
	}
}
