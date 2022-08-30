#include<iostream>
#include<string>
using namespace std;


int main(void){
    //ejemplo utilizando arrays

    //declaramos el array

    string nombres[12]={
        "Pablo",
        "Raul",
        "Angel",
        "Sharon",
        "Javier G",
        "Ximena",
        "Carlos",
        "Erika",
        "Andrea",
        "Javier C",
        "Abel",
        "Rodrigo"
    };

    int edades [12]= {16,16,16,16,16,16,16,16,16,15,16,16};
    //pablo, raul, angel, sharon, javier g, ximena ,carlos,erika, andrea, javier c
    // 0      1    2       3       4         5       6        7     8
    //posicion de inicio de los indices?
    // la primera posicio  es 0 y la ultima es: n-1
    //los indices van del 0 al 9
    
    for (int i = 0; i < 12; i++){
        cout << "la edad de "<< nombres [i] << " es de: " << edades[i] << endl;
    }
    

}
