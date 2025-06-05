#include "MutantStack.hpp"


//~~~~~~~~~~~~~~~~~~~~~ Forme canonique ~~~~~~~~~~~~~~~~~~~~~//

template <typename T> MutantStack<T>::MutantStack() {}
template <typename T> MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other) {}
template <typename T> MutantStack<T>::~MutantStack() {}


//~~~~~~~~~~~~~~~~~~ Surcharges operateurs ~~~~~~~~~~~~~~~~~~//

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) {
	std::stack<T>::operator=(other); // appelle la surcharge d'operateur d'assignation de stack pour l'objet courant (*this implicite)
	return *this;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~ Methodes ~~~~~~~~~~~~~~~~~~~~~~~~//

template <typename T> 
typename std::stack<T>::container_type::iterator		MutantStack<T>::begin() { return this->c.begin(); }

template <typename T> 
typename std::stack<T>::container_type::iterator		MutantStack<T>::end() { return this->c.end(); }

template <typename T> 
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::begin() const { return this->c.begin(); }

template <typename T> 
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::end() const { return this->c.end(); }

/* 
 * 
 * Un stack est un adaptateur de container: il cree une pile en utilisant un container (deque).
 * Ce container est stocke en attribut protected nomme c.
 * On peut donc acceder a un iterateur sur c avec les methodes de container .begin() et .end().
 * 
 *  */
