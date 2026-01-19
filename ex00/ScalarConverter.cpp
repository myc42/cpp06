/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:00:26 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/19 14:16:48 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ScalarConverter.hpp"


ScalarConverter::ScalarConverter (){
    
}

ScalarConverter::~ScalarConverter (){
    
}

void printChar(char c )
{
    std::cout << "Char: ";
    if (std::isprint(c) == false) {
		std::cout << "Non displayable" << std::endl;
	} 
	else {
		std::cout << "'" << c << "'" << std::endl;
	}
}
//vérifier si un nombre est un entier, puis à l’afficher avec un chiffre après la virgule. retourne la partie entière inférieure de nb 5.7 → 5 

void printDouble (double d)
{
    std::cout << "Double: ";
    if (std::floor(d) == d) {
        //< std::fixed manipulateur d’affichage Affiche les nombres décimaux en notation fixe ,floor retourne le plus grand entier inférieur ou égal à la valeur réelle d.
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else {
		std::cout << d  << std::endl;
	}
}

void printInt(int i)
{
    std::cout << "int: ";
    std::cout << i  << std::endl;
}

void printFloat (float f)
{
    
    std::cout << "float: ";
	if (std::floor(f) == f) {
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	else {
		std::cout << f << "f" << std::endl;
	}
}

bool isChar(const std::string& representation) {
    size_t len = representation.length();
   if (len == 1 ) return true;
  
     if (representation[0] != '\'' || representation[len - 1] != '\'')
        return false;
   
   
    // caractère échappé : '\n', '\t', '\''
   if (representation[2] != 'a' && representation[2] != 'b' && representation[2] != 'f' &&
    representation[2] != 'n' && representation[2] != 'r' && representation[2] != 't' &&
    representation[2] != 'v' && representation[2] != '\\' && representation[2] != '\'' && representation[2] != '\"' && representation[2] != '0')
    {
        return false; 
    }   
    return true; 
   
}




bool isValidNb(std::string representation)
{
    size_t i = 0 ;
    bool hasDigit = false ;
    bool point = false  ;
    if(representation[0] == '-' || representation[0] == '+')
        i ++;
    
    for(; i < representation.size() ; i ++ )
    {
        if(representation[i] == '.')
        {
            if(point) return false ;
            point =  true ;
        }
        else if(isdigit(representation[i]))   
            hasDigit = true ;
         else 
            return false ;
    }
    return hasDigit ;
}

bool  isInt(std::string representation)
{
    for(int i = 0 ; representation[i] ; i++)
    {
        if(representation[0] == '-' || representation[0] == '+')
            i++;
        if(!isdigit(representation[i]))
            return false;
    }
    return true;
}

// Pseudo-littéraux obligatoires float ::nanf, +inff, -inff     |   double :nan, +inf, -inf

bool isFloat(std::string representation)
{
    if (representation == "nanf" || representation == "+inff" || representation == "-inff") return true;
    if(representation[representation.length() - 1] != 'f' ) return false ;
    std::string number = representation.substr(0, representation.size() - 1);
    return (isValidNb (number)) ;
}


bool isDouble(std::string representation)
{
     if (representation == "nan" || representation == "+inf" || representation == "-inf") return true;
     return (isValidNb(representation)) ;
}

void isImpossible()
{
    std::cout << "double : impossible \n";
    std::cout << "char : impossible \n";
    std::cout << "int : impossible \n";
    std::cout << "float : impossible \n";
       
}




void convertChar(std::string representation)
{
    char c = representation[0]; 
    printChar(c) ;
    printInt(static_cast<int>(c));
      printFloat(static_cast<float>(c));
    printDouble(static_cast<double>(c));
  
   

}

void convertInt(std::string representation)
{
    int i = static_cast<int>(atof(representation.c_str()));
    printInt(i);
    printDouble(static_cast<double>(i));
    printFloat(static_cast<float>(i));
    printChar(static_cast<char>(i));

}

void convertDouble(std::string representation)
{
    double d =  static_cast<double>(atof(representation.c_str()));
      printChar(static_cast<char>(d));
       printInt(static_cast<int>(d));
    printDouble(d);
   
    printFloat(static_cast<float>(d));
  

   
}

void convertFloat(std::string representation)
{
    float f = static_cast<float>(atof(representation.c_str()));
     printChar(static_cast<char>(f));
       printInt(static_cast<int>(f));
    printFloat(f);
  
    printDouble(static_cast<float>(f));
   
    
}
int Otherss(std::string representation) {
	if (representation == "+inf" || representation == "-inf" || representation == "nan") {

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (representation == "inf" || representation == "+inf") {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (representation == "-inf") {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (representation == "nan") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
        
	}
    return 1 ;
}
	return 0;
}


 void  ScalarConverter::convert (std::string reprensation)  
 {
         if(Otherss(reprensation))
            return ;
        if(reprensation.empty() ==  true)
            std::cout << "argv is empty \n";
       else if (isInt(reprensation))
            convertInt(reprensation) ;
       else if(isDouble(reprensation))
            convertDouble(reprensation);
        else if (isFloat(reprensation))
            convertFloat(reprensation);
        else if(isChar(reprensation))
            convertChar(reprensation) ;
        else 
            isImpossible();
}