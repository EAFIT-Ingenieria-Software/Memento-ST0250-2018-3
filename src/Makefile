Main: Main.o Originator.o Memento.o Caretaker.o
	g++ -o $@ $^

Main.o: Main.cpp Originator.cpp Memento.cpp Caretaker.cpp Main.hpp Originator.hpp Memento.hpp Caretaker.hpp

Caretaker.o: Memento.cpp Caretaker.cpp Memento.hpp Caretaker.hpp

Memento.o: Originator.cpp Memento.cpp Originator.hpp Memento.hpp 

Originator.o: Originator.cpp Memento.cpp Originator.hpp  Memento.hpp

clean:
	rm -fv *.o Main
