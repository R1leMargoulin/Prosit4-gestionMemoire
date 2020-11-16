#include <iostream>
#include "equipe.h"

using namespace std;


int main(){
	stockage vestiaire;
	int nombre;
	cout << "combien d'equipe veux tu recruter?" << endl;
	cin >> nombre;
	for (int i = 0 ; i < nombre; i++) {
		int n = 0;
		cout << "voulez vous recruter une équipe senior ou des D'jeun's:" << endl << "1--D'jeun's" << endl << "2--senior" << endl;
		cin >> n;
		if (n == 1) {
			equipe p(vestiaire);
		}
		else if (n == 2) {
			equipeSenior p(vestiaire);
		}
	}


	vestiaire.action();
}