#include "MutantStack.hpp"


int main()
{
	std::cout << BOLD << "~ Test avec MutantStack ~" << RESET << std::endl;

	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << BLUE << mstack.top() << RESET << std::endl; // ce qui est au dessus de la pile donc ajoute en dernier (17)

	mstack.pop(); // retire l'element au dessus de la pile (17)

	std::cout << BLUE << mstack.size() << RESET << std::endl; // nb d'elements dans la pile (1)

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << BLUE << *it << RESET << std::endl;
		++it;
	}
	std::stack<int> s(mstack); // appelle le constructeur de copie de std::stack: copie MutantStack en un nouveau stack


// Test identique en remplacant MutantStack par list:

	std::cout << BOLD << "\n~ Test avec list ~" << RESET << std::endl;

	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << PINK << mlist.back() << RESET << std::endl;

	mlist.pop_back();
	
	std::cout << PINK << mlist.size() << RESET << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator l_it = mlist.begin();
	std::list<int>::iterator l_ite = mlist.end();
	
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << PINK << *l_it << RESET << std::endl;
		++l_it;
	}
	return 0;
}

/* 
 * 
 * Iterer sur un container de .begin() a .end() donne les elements dans l'ordre
 * du premier ajoute au dernier ajoute.
 * Donc l'element au sommet de la pile apparaitra en dernier.
 * 
 *  */
