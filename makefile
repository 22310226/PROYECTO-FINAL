CPP = g++
TARGET = bin/solitario
BIN_DIR = bin

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

all: $(TARGET)

$(TARGET): $(BIN_DIR)/Carta.o $(BIN_DIR)/Nodo.o $(BIN_DIR)/NodoDoble.o $(BIN_DIR)/Cola.o $(BIN_DIR)/ListaDoble.o $(BIN_DIR)/Pila.o $(BIN_DIR)/Solitario.o $(BIN_DIR)/Main.o
	$(CPP) $(BIN_DIR)/Carta.o $(BIN_DIR)/Nodo.o $(BIN_DIR)/NodoDoble.o $(BIN_DIR)/Cola.o $(BIN_DIR)/ListaDoble.o $(BIN_DIR)/Pila.o $(BIN_DIR)/Solitario.o $(BIN_DIR)/Main.o -o $(TARGET)

$(BIN_DIR)/Carta.o: src/Carta.cpp include/Carta.hpp | $(BIN_DIR)
	$(CPP) -c src/Carta.cpp -o $(BIN_DIR)/Carta.o -Iinclude

$(BIN_DIR)/Nodo.o: src/Nodo.cpp include/Nodo.hpp | $(BIN_DIR)
	$(CPP) -c src/Nodo.cpp -o $(BIN_DIR)/Nodo.o -Iinclude

$(BIN_DIR)/NodoDoble.o: src/NodoDoble.cpp include/NodoDoble.hpp | $(BIN_DIR)
	$(CPP) -c src/NodoDoble.cpp -o $(BIN_DIR)/NodoDoble.o -Iinclude

$(BIN_DIR)/Cola.o: src/Cola.cpp include/Cola.hpp | $(BIN_DIR)
	$(CPP) -c src/Cola.cpp -o $(BIN_DIR)/Cola.o -Iinclude

$(BIN_DIR)/ListaDoble.o: src/ListaDoble.cpp include/ListaDoble.hpp | $(BIN_DIR)
	$(CPP) -c src/ListaDoble.cpp -o $(BIN_DIR)/ListaDoble.o -Iinclude

$(BIN_DIR)/Pila.o: src/Pila.cpp include/Pila.hpp | $(BIN_DIR)
	$(CPP) -c src/Pila.cpp -o $(BIN_DIR)/Pila.o -Iinclude

$(BIN_DIR)/Solitario.o: src/Solitario.cpp include/Solitario.hpp | $(BIN_DIR)
	$(CPP) -c src/Solitario.cpp -o $(BIN_DIR)/Solitario.o -Iinclude

$(BIN_DIR)/Main.o: src/Main.cpp | $(BIN_DIR)
	$(CPP) -c src/Main.cpp -o $(BIN_DIR)/Main.o -Iinclude

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(BIN_DIR)/*.o $(TARGET)
