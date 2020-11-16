#include <iostream>
using namespace std;
class A
{
private:
	int* t;
public:
	A(int tailleTab)
	{
		t = new int[tailleTab];
	}
	~A() {
		delete t;
		cout << "libération en cours:" << endl;
	}
};
void main(void)
{
	int pause;
	double i;
	A* p = nullptr;
	for (i = 0; i < 10000; i++)
	{
		delete p;
		p = new A(10);
	}
	cin >> pause;
}