/*
Información CRC:

Clase: Persona

Responsabilidades:
- Calcular el Índice de Masa Corporal (IMC) utilizando el peso y la altura de una persona.
- Evaluar el estado físico de la persona con base en su IMC.

Colaboradores:
- No tiene colaboradores directos con otras clases en esta implementación, 
  pero podría integrarse con clases que manejen bases de datos o interfaces 
  de usuario para expandir su funcionalidad.
*/
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <cmath>       // Biblioteca para funciones matemáticas
#include <curl/curl.h> // cURL (Client URL) es una herramienta de línea de comandos y una biblioteca que se utiliza para transferir datos desde o hacia un servidor utilizando una gran variedad de protocolos, como HTTP,
#include <string>
class Persona
{
private:
    double peso;   // Atributo para el peso en kilogramos
    double altura; // Atributo para la altura en metros

public:
    // Constructor para inicializar los atributos
    Persona(double p, double a);

    // Método para calcular el IMC
    double calcularIMC() const;
    double calcularIMCAPI() const;
    std::string evaluarIMCAPI(double imc) const;
    void mostrarIMCAPI() const;
    void JSON(std::string responseString) const;

    // Método para obtener una evaluación del IMC
    void evaluarIMC() const;
};
#endif // PERSONA_H