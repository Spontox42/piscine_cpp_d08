/*
** droid.hh for droid/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d08/droid.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Wed Jan 13 13:47:45 2016 petit_x - Marlon Petit
** Last update Wed Jan 13 15:52:36 2016 marlon petit
*/

#ifndef DROID_HH_
# define DROID_HH_

#include <iostream>
#include <string>

class		Droid
{
public:
  Droid();
  Droid(std::string);
private:
  std::string	Id;
};

#endif /* !DROID_HH_ */
