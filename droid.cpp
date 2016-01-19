/*
** droid.cpp for droid/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d08/droid.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Wed Jan 13 13:47:32 2016 petit_x - Marlon Petit
** Last update Wed Jan 13 15:52:37 2016 marlon petit
*/

#include "droid.hh"

Droid::Droid(std::string serial)
{
  this->Id = serial;
}

Droid::Droid()
{
  this->Id = "";
}
