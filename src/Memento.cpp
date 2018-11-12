#include "Memento.hpp"

Memento::~Memento() {}

Memento::Memento(std::string const& state) : state(state) {}

std::string const& Memento::getState() const {
  return state;
}
