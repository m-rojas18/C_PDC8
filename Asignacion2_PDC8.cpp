#include <ncurses.h>
using namespace std;

int main(){
    initscr();
    noecho();
    int maximo_y, maximo_x;
    getmaxyx(stdscr, maximo_y, maximo_x);
    int salir = 0;

    while(salir != 27){//Ascii para tecla ESC
        //Mostrar ventana 1
        WINDOW *ventana_1 = newwin(maximo_y/2,maximo_x / 2, 0,0);
        start_color();
        box(ventana_1,0,0);
        refresh();
        wrefresh(ventana_1);
        salir = getch();
        if(salir == 27)//Salir si recibe esc como entrada
            break;

        //Limpiar ventana 1
        wclear(ventana_1);
        wrefresh(ventana_1);

        //Mostrar Ventana 2
        WINDOW *ventana_2 = newwin(maximo_y / 2, maximo_x / 2, 0, maximo_x / 2);
        box(ventana_2,0,0);
        wrefresh(ventana_2);

        salir = getch();
        if(salir == 27)
            break;
        //Limpiar ventana 2
        wclear(ventana_2);
        wrefresh(ventana_2);

        WINDOW *ventana_3 = newwin(maximo_y / 2, maximo_x / 2, maximo_y / 2, 0);
        box(ventana_3,0,0);
        wrefresh(ventana_3);
        salir = getch();
        if(salir == 27)
            break;
        //Limpiar ventana 3
        wclear(ventana_3);
        wrefresh(ventana_3);
    
        WINDOW *ventana_4 = newwin(maximo_y / 2, maximo_x / 2, maximo_y / 2, maximo_x / 2);
        box(ventana_4,0,0);
        wrefresh(ventana_4);

        salir = getch();
        if(salir == 27)
            break;
        //Limpiar ventana 3
        wclear(ventana_4);
        wrefresh(ventana_4);
    }
    endwin();
    return 0;
}