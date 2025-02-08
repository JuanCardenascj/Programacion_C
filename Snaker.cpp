#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 10
#define MAX_SNAKE_SIZE 100

// Estructura para el cuerpo de la serpiente
typedef struct {
    int x;
    int y;
} Position;

Position snake[MAX_SNAKE_SIZE];
int snake_size = 1;  // Tamaño inicial de la serpiente
int food_x, food_y;
int game_over = 0;
int direction = 0;  // 0 - derecha, 1 - abajo, 2 - izquierda, 3 - arriba

void setup();
void draw();
void input();
void logic();
void generate_food();
void gotoxy(int x, int y);

int main() {
    setup();
    
    while (!game_over) {
        draw();
        input();
        logic();
        Sleep(100);  // Espera para controlar la velocidad del juego
    }
    
    printf("Game Over!\n");
    return 0;
}

void setup() {
    snake[0].x = WIDTH / 2;
    snake[0].y = HEIGHT / 2;
    generate_food();
}

void draw() {
    system("cls");  // Limpiar pantalla

    // Dibuja el borde superior
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    // Dibuja el área del juego
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == 0) {
                printf("#");  // Pared izquierda
            } else if (x == WIDTH - 1) {
                printf("#");  // Pared derecha
            } else if (x == snake[0].x && y == snake[0].y) {
                printf("O");  // Cabeza de la serpiente
            } else if (x == food_x && y == food_y) {
                printf("F");  // Comida
            } else {
                int isSnakeBody = 0;
                for (int i = 1; i < snake_size; i++) {
                    if (snake[i].x == x && snake[i].y == y) {
                        printf("o");  // Cuerpo de la serpiente
                        isSnakeBody = 1;
                        break;
                    }
                }
                if (!isSnakeBody) {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    // Dibuja el borde inferior
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                direction = 2;  // Izquierda
                break;
            case 'd':
                direction = 0;  // Derecha
                break;
            case 'w':
                direction = 3;  // Arriba
                break;
            case 's':
                direction = 1;  // Abajo
                break;
            case 'q':
                game_over = 1;  // Salir
                break;
        }
    }
}

void logic() {
    // Mover el cuerpo de la serpiente
    Position prev_segment = snake[0];
    Position prev2_segment;
    snake[0].x += (direction == 0) - (direction == 2);
    snake[0].y += (direction == 1) - (direction == 3);

    // Mover el cuerpo de la serpiente
    for (int i = 1; i < snake_size; i++) {
        prev2_segment = snake[i];
        snake[i] = prev_segment;
        prev_segment = prev2_segment;
    }

    // Comprobar si la serpiente ha chocado con sí misma o con los bordes
    if (snake[0].x < 0 || snake[0].x >= WIDTH || snake[0].y < 0 || snake[0].y >= HEIGHT) {
        game_over = 1;
    }
    for (int i = 1; i < snake_size; i++) {
        if (snake[i].x == snake[0].x && snake[i].y == snake[0].y) {
            game_over = 1;
        }
    }

    // Comprobar si la serpiente ha comido la comida
    if (snake[0].x == food_x && snake[0].y == food_y) {
        snake_size++;
        generate_food();
    }
}

void generate_food() {
    food_x = rand() % WIDTH;
    food_y = rand() % HEIGHT;
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

