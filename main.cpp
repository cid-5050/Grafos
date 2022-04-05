#include <Grafo.h>
#include <iostream>


int main() {

    Grafo grafo;

    try {
        grafo.addVertice("Cirno");
        grafo.addVertice("Remilia");
        grafo.addVertice("Satori");
        grafo.addVertice("Momiji");
        grafo.addVertice("Nitori");

        grafo.addArista("Cirno", "Remilia", 0);
        grafo.addArista("Cirno", "Satori", 0);
        grafo.addArista("Remilia", "Satori", 0);
        grafo.addArista("Remilia", "Cirno", 0);
        grafo.addArista("Satori", "Momiji", 0);
        grafo.addArista("Nitori", "Cirno", 0);

    } catch (std::string e) {
        std::cout << e << std::endl;
    }

    grafo.printVertices();

    std::cout << std::endl;
    return 0;
}
