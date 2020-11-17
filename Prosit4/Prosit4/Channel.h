#pragma once
#include <string>

typedef struct Contenu Contenu;
struct Contenu { //Cette structure est une liste chainée de messages, pour simuler une suite d'info recus.
	std::string message;
	Contenu* next;
};


class Channel
{
private:
	Contenu* premier; //on fait un pointeur premier pour avoir le premier element de la liste "Contenu" de chaque chaine.
public:
	Channel();
	std::string getmessage(Contenu*);	//c'est simplement l'affichage de notre liste chainée un accesseur-fonction d'affichage (2 en un et ouep!)
	Contenu* getpremier();	//Accesseur de notre pointeur premier
	void AjouterContenu(std::string, Contenu*); // on rentre le message a rentrer ainsi que le pointeur premier de notre liste.
};

Channel channel1; //on créé 4 chaines a diffuser.
Channel channel2;
Channel channel3;
Channel channel4;

