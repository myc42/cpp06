/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:37:25 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:38:35 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base* generate(void);
void identify(Base* p);
void identify(Base& p);
/* main a revoir reverifie les types de cast */

int main () 
{ 

try {


    Base* a = generate();
    std::cout << "test " << a << " Identification via pointeur : ";
    identify(a);
    std::cout << "Identification via référence : ";
    identify(*a);
    delete a;

    Base* b = generate();
    std::cout << "test " << b << " Identification via pointeur : ";
    identify(b);
    std::cout << "Identification via référence : ";
    identify(*b);
    delete b;

    Base* c = generate();
    std::cout << "test " << c << " Identification via pointeur : ";
    identify(c);
    std::cout << "Identification via référence : ";
    identify(*c);
    delete c;
   
    
}
catch (std::exception &e )
{
    std::cout << "erreur " << e.what();
}
    return 0;
}


