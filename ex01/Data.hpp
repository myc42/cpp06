/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:30:15 by macoulib          #+#    #+#             */
/*   Updated: 2026/01/11 16:52:48 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "string"

class  Data
{
    public :
            
            Data (int id , std::string name) : _id(id)  ,_name(name) {};
            ~Data () {};
             int _id ;
             std::string _name;
            
};