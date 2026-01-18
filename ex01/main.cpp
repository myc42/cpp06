/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:40:25 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:33:10 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

// uintptr_t contenir n’importe quel pointeur converti en entier.
int main() {
    
Data objetData(42, "myc");

std::cout << "data:" << std::endl;
std::cout << "mon id : " << objetData._id << "--- || ---mon nom : " << objetData._name << std::endl;


uintptr_t pointeurSerialise = Serializer::serialize(&objetData);
std::cout << "\n(entier uintptr_t) : "
          << pointeurSerialise << std::endl;

          // remettre normal 
Data* pointeurDeserialise = Serializer::deserialize(pointeurSerialise);

std::cout << "\nObjet revenir normal  :" << std::endl;
std::cout << "ID : " << pointeurDeserialise->_id
          << ", Nom : " << pointeurDeserialise->_name << std::endl;


return 0;
}