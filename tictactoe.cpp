#include <iostream>
#include <ctime>

void drawboard(char *spaces);
void playermove(char *spaces,char player);
void computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player, char computer);
bool checktie(char *spaces);

int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawboard(spaces);

    while(running){
        playermove(spaces,player);
        drawboard(spaces);
        if(checkwinner(spaces,player,computer)){
            running = false;
            break;
        }

        computermove(spaces,computer);
        drawboard(spaces);
    }

    return 0;
}

void drawboard(char *spaces){
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0]<<"  |  "<< spaces[1] << "  |  "<<spaces[2]<<"  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3]<<"  |  "<< spaces[4] << "  |  "<<spaces[5]<<"  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[6]<<"  |  "<< spaces[7] << "  |  "<<spaces[8]<<"  " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << std::endl;

}
void playermove(char *spaces,char player){
    int number;
    do{
        std::cout << "Enter a empty spot to place your marker : ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number>0 || !number <8);
}
void computermove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand()%9;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkwinner(char *spaces, char player, char computer){
    return 0;
}
bool checktie(char *spaces){
    return 0;
}