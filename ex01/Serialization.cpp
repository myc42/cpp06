/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:13:54 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:27:32 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr); // on force le pointeur, très dangereux sretour depend du system  si jamais ca echoue;
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast <Data*> (raw) ;
} 