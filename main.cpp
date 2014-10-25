#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;//devuelve el valor de la desreferencia
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;// devuelve la suma de las desreferencias
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(&a==&b)//evalua si las desrefrencias apuntan al mismo espacio
    return true;//devuelve verdadero

}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b)//evalua si las desreferencias son iguales
    return true;//devuelve verdadero
    else//sino
    return false;//devuelve falso
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{

    string letra=*a;//se declara la variable asignandole la desreferencia a

    return letra[0];// se devuelve el valor de la variable letra en la posicion 0
    //me guie con la pagina http://www.forosdelweb.com/f96/funcion-primera-letra-palabra-975266/
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
     string  palabra=*a ;//se declara la variable palabra asignandple la desrefrencia a
    if (palabra == string(palabra.rbegin(), palabra.rend())) {// se evalua si la palabra es igual desde la primera letra hasta la ultima y viceversa con la funcion rbegin()

    return true;//devuelve verdadero
    }else{
    return false;// devuelve falso

    }
    //ayuda obtenida de stackoverflow.com/questions/8362572/check-if-a-string-is-palindrome
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int resultado=1;//se declara la variable resultado
    for (int i=0;i<*exponente;i++)//se inicia el ciclo
    {
    resultado=resultado* *base;//se asigna el valor de resultado por la base en la variable resultado
    }

    if (*exponente<0)//se evalua si la desreferencia es menor que cero
    {
    resultado=1/resultado;// se divide uno entre el resultado
    }

    return resultado;//devuelve el resultado
    //https://espanol.answers.yahoo.com/question/index?qid=20100507171543AAqaJDa
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
