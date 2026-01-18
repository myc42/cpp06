/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:58:12 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:28:08 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <typeinfo> 
#include <ctime>
#include <cstdlib> 

// dynamic_cast Conversion sûre pour les types polymorphiques (classes avec au moins une fonction virtuelle). en cas dechec return nullptr
Base* generate(void)
{
    int r = std::rand() % 3; 
   // std::cout << "chiffre random "<<  r << "\n";
    if (r == 0) return new A();
    else if (r == 1) return new B();
    else return new C();      
}


void identify(Base* p)
{
   if (dynamic_cast<A*>(p))
    std::cout << "le type réel de l’objet pointé par p est A \n";
  else  if  (dynamic_cast<B*>(p))
    std::cout << "le type réel de l’objet pointé par p est B \n";
   else  if (dynamic_cast<C*>(p))
    std::cout << "le type réel de l’objet pointé par p est C \n";
    else 
        std::cout << "le type réel de l’objet pointé par p est inconnu \n";

}

void identify(Base& p)
{  
    try {
            (void)dynamic_cast<A&>(p) ;
            std::cout << "le type réel de l’objet référencé par p est A \n";
            return ;
    } catch  (const std::bad_cast&)
    {
        
    }
 
    try {
        (void)dynamic_cast<B&>(p) ;
        std::cout << "le type réel de l’objet référencé par p est B \n";
        return  ;
    } catch (const std::bad_cast&)
    {
        
    }
   
    try {
         (void)dynamic_cast<C&>(p) ;
         std::cout << "le type réel de l’objet référencé par p est C \n";
         return ;
 
    }
    catch  (const std::bad_cast&)
    {
        
    }
   
    std::cout << "le type réel de l’objet pointé par p est inconnu \n";
}
