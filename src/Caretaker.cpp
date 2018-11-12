#include "Caretaker.hpp"

void Caretaker::insertMemento(Memento* m) {
  mementos.push(m);
}

Memento* Caretaker::getLatestMemento() {
  return mementos.top();
}

void Caretaker::deleteLatestMemento() {
  delete mementos.top();
  mementos.pop();
}

bool Caretaker::hasMementos() {
  return mementos.size();
}
