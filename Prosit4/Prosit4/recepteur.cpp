#include "pch.h"

recepteur::recepteur() //ici, on gere notre liste d'abonnement a la création de notre objet.
{
	int n;
	int choix;
	cout << "combien de chaines sur les 4 dispos voulez vous ecouter?" << endl << "rappel, on a :" << endl << "1--InfoTV" << endl << "2--Le Rap La Street" << endl << "3--Rock et rouleau" << endl << "Les blagues trops marrantes" << endl;
	cin >> n;
	while (n != 1 && n != 2 && n != 3 && n != 4) {
		cout << "nombre incorrect, veuillez ressayer" << endl;
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		cout << "entrez le numéro de radio que vous voulez" << endl;
		cin >> choix;
		while (choix = !1 || choix != 2 || choix != 3 || choix != 4) {
			cout << "nombre incorrect, veuillez ressayer" << endl;
			cin >> choix;
		}
		if (choix == 1){
			Channel* p;
			p = &channel1;
			setTabPointeurChannels(p);
		}
		else if (choix == 2) {
			Channel* p;
			p = &channel2;
			setTabPointeurChannels(p);
		}
		else if (choix == 3) {
			Channel* p;
			p = &channel3;
			setTabPointeurChannels(p);
		}
		else if (choix == 4) {
			Channel* p;
			p = &channel4;
			setTabPointeurChannels(p);
		}
	}
}

void recepteur::ecouter()
{
	emetteur1.diffuser(*this); //on diffuse en fonction de l'objet en cours
}



std::vector<Channel*> recepteur::getTabPointeurChannels()
{
	return TabPointeurChannels;
}

void recepteur::setTabPointeurChannels(Channel* pointeur) //pour ajouter un element a notre tableau dynamique
{
	TabPointeurChannels.push_back(pointeur);
}
