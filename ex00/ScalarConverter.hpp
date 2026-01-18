/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:00:28 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/18 18:11:44 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <exception>
#include <string>
#include <variant>
#include <string>
#include <sstream> 
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>



class ImpossibleConvert : public std::exception 
{
                   public  :
                         virtual const char* what() const throw(){  return  " CONVERSION IMPOSSIBLE \n" ;}
} ;

class ScalarConverter
{
        private :
                   ScalarConverter();
                   virtual  ~ScalarConverter();
                  
        public : 
                   static void  convert (std::string reprensation)  ;
};


