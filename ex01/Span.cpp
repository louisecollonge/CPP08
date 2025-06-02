#include "Span.hpp"


//~~~~~~~~~~~~~~~~~~~~~ Forme canonique ~~~~~~~~~~~~~~~~~~~~~//

Span::Span() {}
Span::Span(unsigned int N) : N(N) {}
Span::Span(const Span &other) : N(other.N) {}
Span::~Span() {}


//~~~~~~~~~~~~~~~~~~ Surcharges operateurs ~~~~~~~~~~~~~~~~~~//

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->N = other.N;
		this->_nbs = other._nbs;
	}
	return *this;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~ Methodes ~~~~~~~~~~~~~~~~~~~~~~~~//

void Span::addNumber(int toAdd) 
{
	if (_nbs.size() >= N)
		throw std::out_of_range("Cannot add number: maxed out capacity");
	_nbs.push_back(toAdd);
}

void Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) 
{
	if (_nbs.size() + std::distance(begin, end) > N)
		throw std::out_of_range("Cannot add range: maxed out capacity"); // meme si un seul nb depasse la capacite, aucun des nombres ne sera ajoute
	_nbs.insert(_nbs.end(), begin, end);
}

unsigned int Span::shortestSpan() const 
{
	if (_nbs.size() < 2)
		throw std::out_of_range("No shortest span: not enough numbers");
	
	std::vector<int> sorted = _nbs; // copie le vecteur
	std::sort(sorted.begin(), sorted.end()); // met en ordre croissant les nbs de la copie

	unsigned int span = std::numeric_limits<int>::max(); // on prend la plus grande valeur possible pour initialiser
	for (unsigned int i = 1; i < sorted.size(); ++i) {
		unsigned int tmp = sorted[i] - sorted[i - 1];
		if (tmp < span) // si on trouve + petit, alors c'est le nouveau span retenu tant qu'on ne trouve pas encore + petit
			span = tmp;
	}
	return span;
}

unsigned int Span::longestSpan() const 
{
	if (_nbs.size() < 2)
		throw std::out_of_range("No longest span: not enough numbers");
	
	unsigned int max = *std::max_element(_nbs.begin(), _nbs.end()); // dereference le pointeur (iterateur) retourne pour avoir la valeur elle-meme
	unsigned int min = *std::min_element(_nbs.begin(), _nbs.end());
	
	return max - min;
}
