#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <algorithm> // pour std::find

#define BOLD_RED	"\033[1;31m"
#define BLUE		"\033[34m"
#define RESET		"\033[0m"



template <typename T>
void easyfind(T intContainer, int valueToFind) // trouve 1ere occurrence de valueToFind dans intContainer
{
	typename T::iterator it = std::find(intContainer.begin(), intContainer.end(), valueToFind); // iterator = agit comme un pointeur qui parcourt et reference les elements d'un container
																								// .begin() et .end() sont des methodes des containers qui retourne des iterateurs
																								// std::find() est une fonction non membre = fonction libre
	if (it == intContainer.end()) // .end() va juste apres le dernier element du container
		throw std::invalid_argument("Value not found.");
	
	std::cout << BLUE << valueToFind << " was found at the position "<< *it << RESET << std::endl;
}




/* 
 *
 * 
 * Fonction template:
 * 
 * 
 * Fonction qui prend n'importe quel TYPE de donnees.
 * Evite de dupliquer le code pour chaque type de variable.
 * 
 * Typename T indique un type generique.
 * 
 * Le compilateur ne cree par les fonctions template d'office,
 * il attend d'en rencontrer l'implementation. Si une fonction
 * template n'est jamais appelee dans le programme, alors 
 * elle ne sera pas compilee (on parle d'instanciation).
 * 
 * Si on appelle enormement de types differents pour une meme
 * fonction, le compilateur instanciera autant de version de la
 * fonction qu'il y a de types. L'executable sera plus lourd.
 * 
 * Ca s'appelle du polymorphisme statique.
 * 
 * Le code source doit etre ecrit dans un fichier .hpp ou .tpp 
 * mais jamais dans un .cpp
 * 
 * 
 *  */
