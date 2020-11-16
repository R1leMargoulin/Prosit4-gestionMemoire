#include <iostream>
#include <string>

using namespace std;

class B {
public:
	void recevoir(string message) {
		cout << "reception du signal"<<endl << message << endl;
	}
};

typedef void(B::* ptr)(string);
ptr signal = &B::recevoir;

class A {
public:
	void envoyer(B o, string message) {
		(o.*signal)(message);
	}
};

void main() {
	int pause;
	A a;
	B b, c;
	
	a.envoyer(b, "message1");
	a.envoyer(c, "message2");
	cin >> pause;

}