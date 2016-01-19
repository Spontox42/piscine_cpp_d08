/*
** main.cpp for main/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d08/main.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Wed Jan 13 13:45:40 2016 petit_x - Marlon Petit
** Last update Wed Jan 13 13:47:01 2016 marlon petit
*/

int main()
{
  Droid d;
  Droid d1("Avenger");
  size_t Durasel = 200;

  std::cout << d << std::endl;
  std::cout << d1 << std::endl;
  d = d1;
  d.setStatus(new std::string("Kill Kill Kill!"));
  d << Durasel;
  std::cout << d << ‘‘--’’ << Durasel << std::endl;
  Droid d2 = d;
  d.setId("Rex");
  std::cout << (d2 != d) << std::endl;
  return (0);
}
