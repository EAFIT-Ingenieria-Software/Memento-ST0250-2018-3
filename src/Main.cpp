#include "Main.hpp"
#include "Originator.hpp"
#include "Memento.hpp"
#include "Caretaker.hpp"

#include <string>
#include <iostream>

int main() {
  Originator originator;
  Caretaker caretaker;

  std::string input;

  std::cout << "> ";
  while(std::cin >> input) {
    if(input == "undo") {
      if(caretaker.hasMementos()) {
        originator.setMemento(*caretaker.getLatestMemento());
        caretaker.deleteLatestMemento();
      }
    } else {
      caretaker.insertMemento(originator.createMemento());
      originator.append(input);
    }

    originator.print();
    std::cout << "> ";
  }

  while(caretaker.hasMementos()) {
    caretaker.deleteLatestMemento();
  }
}
