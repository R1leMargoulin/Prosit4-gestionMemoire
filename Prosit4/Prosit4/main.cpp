#include "pch.h"

int main() {
	//on simules des messages venant des différentes chaines radios.
	channel1.AjouterContenu("Bonjour flash premières nouvelles!!", channel1.getpremier());
	channel1.AjouterContenu("Donnald Trump a tweeté...", channel1.getpremier());
	channel1.AjouterContenu("Qu'il avait gangé l'election!!!!", channel1.getpremier());
	channel1.AjouterContenu("quel ouf ce donald", channel1.getpremier());

	channel2.AjouterContenu("Yooooooo, aujourd'hui encore...", channel2.getpremier());
	channel2.AjouterContenu("Nekfeu met le feu", channel2.getpremier());
	channel2.AjouterContenu("Gims se tire", channel2.getpremier());
	channel2.AjouterContenu("Et kaaris joue avec des bouchons de lièges!", channel2.getpremier());

	channel3.AjouterContenu("Bonjour, bonjour!!!", channel3.getpremier());
	channel3.AjouterContenu("On va vous mettre ce Bon vieux Jonnhy aujourd'hui!", channel3.getpremier());
	channel3.AjouterContenu("tourner le temps a l'orage...", channel3.getpremier());
	channel3.AjouterContenu("revenir a l'etat sauuuuvage", channel3.getpremier());

	channel4.AjouterContenu("Quel est l'animal le plus heureux?", channel4.getpremier());
	channel4.AjouterContenu("Le hibou, parce que sa femme est chouette!", channel4.getpremier());
	channel4.AjouterContenu("Quel est le point commun entre un pecheur et un mannequin?", channel4.getpremier());
	channel4.AjouterContenu("ils surveillent leur ligne!!!", channel4.getpremier());


	recepteur monrecepteur;
	monrecepteur.ecouter();

}