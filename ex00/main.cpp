/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:09:07 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:12:44 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>



int main (int ac , char **av)
{

   if(ac !=2 ){
    std::cerr << "ERROR  :\nonly one argv accept  " << std::endl;
     return 1;
   }
    ScalarConverter::convert (av[1])  ;
   return (0);
}