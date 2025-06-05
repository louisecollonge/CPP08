#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <list>

#define PINK		 "\033[0;35m"
#define BLUE		"\033[34m"
#define BOLD_RED 	"\033[1;31m"
#define BOLD    	"\033[1m"
#define RESET		"\033[0m"




template <typename T> // car herite de stack, qui est une classe template
class MutantStack: public std::stack<T> 
{
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		~MutantStack();
		MutantStack &operator=(const MutantStack &other);

		typedef typename std::stack<T>::container_type::iterator		iterator;		// on cree un alias comme demande dans le main de test
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator; // alias pour un interateur constant

		iterator		begin();		// permet d'iterer sur objet non constant
		iterator		end();
		const_iterator	begin() const;	// permet d'iterer sur objet constant
		const_iterator	end() const;

};

#include "MutantStack.tpp" // apres la classe pour eviter appel circulaire
