#include "MutantStack.hpp"


//~~~~~~~~~~~~~~~~~~~~~ Forme canonique ~~~~~~~~~~~~~~~~~~~~~//

template <typename T> MutantStack<T>::MutantStack() {}
template <typename T> MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other) {}
template <typename T> MutantStack<T>::~MutantStack() {}


//~~~~~~~~~~~~~~~~~~ Surcharges operateurs ~~~~~~~~~~~~~~~~~~//

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other) {
	std::stack<T>::operator=(other);
	return *this;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~ Methodes ~~~~~~~~~~~~~~~~~~~~~~~~//

template <typename T> 
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin() { return this->c.begin(); }

template <typename T> 
typename std::stack<T>::container_type::iterator	MutantStack<T>::end() { return this->c.end(); }

template <typename T> 
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::begin() const { return this->c.begin(); }

template <typename T> 
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::end() const { return this->c.end(); }

