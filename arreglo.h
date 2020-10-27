#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
#include <string>


class Arreglo
{
    std::string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;

    public:
    Arreglo();
    ~Arreglo();
    void insertar_final(const std::string &v);
    void insertar_inicio(const std::string &v);
    size_t size();
    std::string operator[](size_t p)
    {
        return arreglo[p];
    }
    private:
    void expandir();


};

#endif