/*
    Proyecto: IMC 
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto permite trabajar con:
    Uso de clases 
    Uso de bibliotecas
    Uso de APIs
    Reutilización de código
    Software modular y compatibles con otro software

    

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Octubre 2024
*/

#include <iostream>
#include <curl/curl.h>
#include <cmath> // Biblioteca para funciones matemáticas
#include "Persona.h"

int main()
{

    double peso, altura;

    // Solicitar datos del usuario
    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> peso;

    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    // Crear un objeto de la clase Persona
    Persona persona(peso, altura);

    // Evaluar el IMC utilizando el objeto
    // persona.evaluarIMC();
    // persona.calcularIMCAPI();
    persona.mostrarIMCAPI();
    //persona.JSON(persona.calcularIMCAPI());
    return 0;
}