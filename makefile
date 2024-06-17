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