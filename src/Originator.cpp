#include "Originator.hpp"
#include <iostream>

void Originator::setMemento(class Memento const& m) {
  state = m.getState();
}

Memento* Originator::createMemento() {
  return new Memento(state);
}

void Originator::append(std::string const& str) {
  state += str;
}

void Originator::print() {
  std::cout << "= \"" << state << "\"" << std::endl;
}
