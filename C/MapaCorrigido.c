#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

// Registro
struct Consulta
{
    char nome[100];
    int dia;
    int hora;
};

// Variáveis Globais
struct Consulta agenda[300];
int qtdAgendamento;

bool verificarDisponibilidade(int diaAgenda, int horaAgenda)
{
    if (( diaAgenda < 1 || diaAgenda > 30) || (horaAgenda < 8  || horaAgenda > 20) ) // Assuming clinic hours are from 8 AM to 5 PM
    {
        printf("Clinica fechada neste horario\n");
        return false; 
    }
        
    return true; 
    
 }

void agendaConsulta()
{
    int diaAgenda;
    printf("Qual dia do mes voce quer agendar?\n");
    fflush(stdin);
    scanf("%d", &diaAgenda);

    int horaAgenda;
    printf("Qual hora do dia voce quer agendar?\n");
    fflush(stdin);
    scanf("%d", &horaAgenda);

    if (verificarDisponibilidade(diaAgenda, horaAgenda))
    {
        printf("Horario disponivel\n");
        printf("Vamos confirmar seu agendamento\n");

        agenda[qtdAgendamento].dia = diaAgenda;
        agenda[qtdAgendamento].hora = horaAgenda;

        printf(" Qual seu nome?\n");
        fflush(stdin);
        gets(agenda[qtdAgendamento].nome);

        qtdAgendamento = qtdAgendamento + 1;

        printf("Agendamento Realizado!\n");

    }
    else
    {
        printf("Horario nao disponivel\n");
    }
}

void listarConsulta()
{
    int i;
    for (i = 0; i < qtdAgendamento; i++)
    {
        printf("===========================================\n");
        printf("Nome: %s", agenda[i].nome);
        printf("Dia: %d\n", agenda[i].dia);
        printf("Hora: %d\n", agenda[i].hora);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    int opcao;
    qtdAgendamento = 0;

    do
    {
        printf("Deseja uma opcao desejada?\n");
        printf("1 - Agendar Consulta\n");
        printf("2 - Listar Consulta\n");
        printf("3 - Sair\n");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            agendaConsulta();
            break;
        }
        case 2:
        {
            listarConsulta();
            break;
        }
        case 3:
        {
            printf("Saindo do programa....\n");
            break;
        }

        default:
        {
            printf("Opcao invalida\n");
            break;
        }
        }
    } while (opcao != 3);

    return 0;
}
