<<<<<<< HEAD
# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = $(BINDIR)/solitario

# Archivos fuente y objetos
SOURCES = $(wildcard $(SRCDIR)/*.cpp) main.cpp
OBJECTS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(notdir $(SOURCES)))

# Reglas
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJDIR)/main.o: main.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Dependencias
$(OBJDIR)/Carta.o: $(SRCDIR)/Carta.h
$(OBJDIR)/Mazo.o: $(SRCDIR)/Mazo.h $(SRCDIR)/Carta.h
$(OBJDIR)/PilaDescarte.o: $(SRCDIR)/PilaDescarte.h $(SRCDIR)/Carta.h
$(OBJDIR)/PilaTablero.o: $(SRCDIR)/PilaTablero.h $(SRCDIR)/Carta.h
$(OBJDIR)/PilaFundacion.o: $(SRCDIR)/PilaFundacion.h $(SRCDIR)/Carta.h
$(OBJDIR)/SolitarioKlondike.o: $(SRCDIR)/SolitarioKlondike.h $(SRCDIR)/Mazo.h $(SRCDIR)/PilaDescarte.h $(SRCDIR)/PilaTablero.h $(SRCDIR)/PilaFundacion.h

.PHONY: all clean
=======
CPP = g++
TARGET = bin/solitario
BIN_DIR = bin

# Asegúrate de que la carpeta bin existe
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# All
all: $(TARGET)

$(TARGET): $(BIN_DIR)/Carta.o $(BIN_DIR)/Nodo.o $(BIN_DIR)/NodoDoble.o $(BIN_DIR)/Cola.o $(BIN_DIR)/ListaDoble.o $(BIN_DIR)/Pila.o $(BIN_DIR)/Solitario.o $(BIN_DIR)/Main.o
	$(CPP) $(BIN_DIR)/Carta.o $(BIN_DIR)/Nodo.o $(BIN_DIR)/NodoDoble.o $(BIN_DIR)/Cola.o $(BIN_DIR)/ListaDoble.o $(BIN_DIR)/Pila.o $(BIN_DIR)/Solitario.o $(BIN_DIR)/Main.o -o $(TARGET)

$(BIN_DIR)/Carta.o: src/Carta.cpp include/Carta.hpp | $(BIN_DIR)
	$(CPP) -c src/Carta.cpp -o $(BIN_DIR)/Carta.o

$(BIN_DIR)/Nodo.o: src/Nodo.cpp include/Nodo.hpp | $(BIN_DIR)
	$(CPP) -c src/Nodo.cpp -o $(BIN_DIR)/Nodo.o

$(BIN_DIR)/NodoDoble.o: src/NodoDoble.cpp include/NodoDoble.hpp | $(BIN_DIR)
	$(CPP) -c src/NodoDoble.cpp -o $(BIN_DIR)/NodoDoble.o

$(BIN_DIR)/Cola.o: src/Cola.cpp include/Cola.hpp | $(BIN_DIR)
	$(CPP) -c src/Cola.cpp -o $(BIN_DIR)/Cola.o

$(BIN_DIR)/ListaDoble.o: src/ListaDoble.cpp include/ListaDoble.hpp | $(BIN_DIR)
	$(CPP) -c src/ListaDoble.cpp -o $(BIN_DIR)/ListaDoble.o

$(BIN_DIR)/Pila.o: src/Pila.cpp include/Pila.hpp | $(BIN_DIR)
	$(CPP) -c src/Pila.cpp -o $(BIN_DIR)/Pila.o

$(BIN_DIR)/Solitario.o: src/Solitario.cpp include/Solitario.hpp | $(BIN_DIR)
	$(CPP) -c src/Solitario.cpp -o $(BIN_DIR)/Solitario.o

$(BIN_DIR)/Main.o: src/Main.cpp | $(BIN_DIR)
	$(CPP) -c src/Main.cpp -o $(BIN_DIR)/Main.o

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Clean
clean:
	rm -f $(BIN_DIR)/*.o $(TARGET)
>>>>>>> 942936f (src, bin y make)
