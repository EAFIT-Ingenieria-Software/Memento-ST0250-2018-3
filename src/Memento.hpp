#pragma once

#include "Originator.hpp"
#include <string>

class Memento {
 public:
  ~Memento();
 private:
  friend class Originator;

  Memento(std::string const& state);
  std::string const& getState() const;

  std::string const state;
};
