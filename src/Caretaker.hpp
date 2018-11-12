#pragma once

#include "Memento.hpp"
#include <stack>

class Caretaker {
 public:
  void insertMemento(Memento* m);
  Memento* getLatestMemento();
  void deleteLatestMemento();
  bool hasMementos();
 private:
  std::stack<Memento*> mementos;
};
