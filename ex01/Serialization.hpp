/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:13:50 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:24:03 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Data.hpp"

#include <iostream>
#include <stdint.h>

/*uintptr_t est un entier non signé capable de stocker une adresse mémoire (un pointeur) sans perte d’information/  garanti par la norme pour être compatible avec un pointeur  / intptr_t  → signé / manipulation bas niveau*/
//Conversion très brute et dangereuse.
class Serializer
{
    private : 
                 Serializer(){};
                 ~Serializer (){} ;
    public :
            
            static uintptr_t serialize(Data* ptr);
            static Data* deserialize(uintptr_t raw);
};