#ifndef PLANTILLA_A1_CALCULADORA_H
#define PLANTILLA_A1_CALCULADORA_H
#include <iostream>
#include <exception>
using namespace std;

class Calculadora {
    private: //Atributos
        double m_A;
        double m_B;
    public: //Métodos
        Calculadora(double a, double b): m_A{a},m_B{b}{} //Constructor

        void setA(double a){m_A=a;}
        double getA()const{return m_A;}

        void setB(double b){m_B=b;}
        double getB()const{return m_B;}

        double sumar()const{
            return m_A+m_B;
        }

        double restar()const{
            return m_A-m_B;
        }

        double multiplicar()const{
            return m_A*m_B;
        }

        double dividir()const{
            if(m_B==0){
                throw std::invalid_argument("No se puede dividir por 0");
            }return m_A/m_B;
        }
};


#endif //PLANTILLA_A1_CALCULADORA_H
