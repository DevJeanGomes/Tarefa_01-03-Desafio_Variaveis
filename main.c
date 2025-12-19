#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float calcular_media(float valor_1, float valor_2) {
    
    return valor_1 / valor_2;
        
};

int main (){
    
    //A média de alunos por sala.
    
    int Alunos_Matriculados = 320;
    
    short Salas_de_aula = 12;
    
    printf("A media de alunos por sala: %.2f \n", calcular_media(Alunos_Matriculados, Salas_de_aula));
    
    //O número total de livros por aluno.
    
    int Livros_Na_Biblioteca = 1500;
    
    printf("A media de livros por alunos: %.2f \n", calcular_media(Livros_Na_Biblioteca, Alunos_Matriculados));
    
    //Um aviso informando se a escola ainda possui vagas abertas.
    
    bool Tem_Vagas = true;
    
    printf("Vagas Abertas: %s \n", Tem_Vagas ? "true" : "false");

    system("pause");

    
return 0;

}