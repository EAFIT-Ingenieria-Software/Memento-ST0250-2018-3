#include "Main.hpp"
#include "Originator.hpp"
#include "Memento.hpp"
#include "Caretaker.hpp"

#include <string>
#include <iostream>

int main() {
  Originator originator;
  Caretaker careTaker;

  std::string input;

  std::cout << "> ";
  while(std::cin >> input) {
    if(input == "undo") {
      if(careTaker.hasMementos()) {
        Memento* memento = careTaker.getLatestMemento();
        originator.setMemento(*memento);

        careTaker.removeLatestMemento();
        delete memento;
      }
    } else {
      Memento* memento = originator.createMemento();
      careTaker.insertMemento(memento);
      originator.append(input);
    }

    originator.print();
    std::cout << "> ";
  }
}
