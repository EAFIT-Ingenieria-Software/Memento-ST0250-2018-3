# Memento-ST0250-2018-2

In order to run the program, you'd need to compile it.

> cd src\
> make\
> ./Main

## Members

* Kevyn Santiago Gomez Patiño
* Kevin Arley Parra Henao
* Agustín Nieto García

## Design pattern: Memento

Memento allows to capture and externalize an object's internal state without violating encapsulation, so that the object can be restored to this state later. It does so by making a class "Memento" that saves the state of another class "Originator" and allows only that class to read from him. It also creates a "Caretaker" class, which makes the job of saving the previous states of the object, so that the originator can recover them later.

## Justification

The program implemented here is a simple example of the memento design pattern. It allows you to edit a string by appending to it and undo the last operation.

Memento pattern says that you should implement it when you may need to recover an object to a previous state, and so was what we needed with the "undo" operation, but it'd be troublesome to implement those operations inside the originator. Also, by implementing the memento pattern, it's possible to add more possible operations, like "redo", to the program without modifying the originator.

## Class diagram

![alt text](/diagrams/class_diagram.png)

## Programming language

The solution is implemented using the C++ programming language.

## Code explanation

* The Originator class holds a string and only allows it to be appended or setted to a previous state.
* The Memento class is a friend of the * Originator class, so that's the only class that can interact with it. It holds a string and that's all.
* The Caretaker class stores mementos and allows to recover only the last one, because the only allowed operation is "undo". This class would be changed to allow more operations, like "redo".

Although the implementation of the memento pattern in this project is fine, the project is far from being perfect. You notice this when you see the main() function.

## References

* Gamma, E., Helm, R., Johnson, R., & Vlissides, J. (1995). Design patterns: Elements of reusable object-oriented software. Reading, Mass: Addison-Wesley.