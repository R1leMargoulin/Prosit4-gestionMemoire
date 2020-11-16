#pragma once
#include <vector>



class equipe
{
public:
	virtual void presentation();
	equipe();
};

class stockage
{
public:
	void ajouter(equipe*);
	void action();

private:
	std::vector<equipe*> tableau;

};

class equipeSenior :public equipe 
{
public:
	equipeSenior(stockage);
	void presentation();
};





