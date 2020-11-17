#include "pch.h"

Channel::Channel()
{
    premier = nullptr;
}

std::string Channel::getmessage(Contenu* pointeur)
{
    if (pointeur == nullptr) { //on verifie que le pointeur n'est pas null
        return std::string();
    }
    else {      //s'il ne l'est pas on affiche et on passe récursivement a la suite de la chaine.
        cout << pointeur->message << endl;
        return getmessage(pointeur->next);
    }
    
}


Contenu* Channel::getpremier()
{
    return premier;
}

void Channel::AjouterContenu(string msg, Contenu* premier)
{
    Contenu* nouveau;
    nouveau = new Contenu;
    nouveau->message = msg;
    nouveau->next = premier;
    premier = nouveau;
}

