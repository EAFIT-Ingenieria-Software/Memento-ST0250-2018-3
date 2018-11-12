#pragma once

#include "Memento.hpp"
#include <string>

class Originator {
 public:
  void setMemento(class Memento const& m);
  class Memento* createMemento();
  void append(std::string const& str);
  void print();
 private:
  std::string state;
};
