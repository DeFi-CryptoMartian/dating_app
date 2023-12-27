#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("listening to vlogs and podcasts");
  sam.add_hobby("playing sports like basketball ");
  sam.add_hobby("writting novels");
  sam.add_hobby("watching historical documentaries");
  std::cout << sam.view_profile();
  
}