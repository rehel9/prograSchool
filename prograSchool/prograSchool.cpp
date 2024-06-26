// prograSchool.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <raylib.h>



int main()
{
    // Codigo inicializador
    Color POLICOLOR = { 108, 29, 69, 255 };

    int const screenWidth = 1600;
    int const screenHeight = 900;

    float const middleScreenWidth = screenWidth / 2.0f;
    float const middleScreenHeight = screenHeight / 2.0f;

    //Vector2 MeasureTextEx( Verlag,"Congrats! You created your first window!", 20,  );

    InitWindow(screenWidth, screenHeight, "La escuela de programacion");

    Font Verlag = LoadFont("Verlag Bold.otf");

    //Variables para menu principal

    const char* introduccion = "Bienvenido, que quiere estudiar hoy?";

    // Rectangulos
    Vector2 posicionBienvenida;
    posicionBienvenida.x = 10.0f;
    posicionBienvenida.y = 50.0f - MeasureTextEx(Verlag, introduccion, Verlag.baseSize, 1.0f).y / 2.0f;

    float const botonPosicionX[4] = { middleScreenWidth / 2.0f - 200.0f, middleScreenWidth * 1.5f - 200.0f,
                                  middleScreenWidth / 2.0f - 200.0f, middleScreenWidth * 1.5f - 200.0f };

    float const botonPosicionY[4] = { middleScreenHeight / 2 - 50.0f, middleScreenHeight / 2 - 50.0f,
                                  middleScreenHeight * 1.5 - 100.0f, middleScreenHeight * 1.5 - 100.0f };

    float const botonLargo = 400.0f;
    float const botonAncho = 200.0f;
    
    //

    //Texto rectangulos

    char const* botonTexto[4] = { "Variables", "If y Switch", "Ciclo For", "Salir" };

    Vector2 botonTextoPosicion[4];

    for (int i = 0; i <= 3; i++)
    {
        botonTextoPosicion[i].x = botonPosicionX[i] + MeasureTextEx(Verlag, botonTexto[i], Verlag.baseSize, 1.0f).x ;
        botonTextoPosicion[i].y = botonPosicionY[i] + MeasureTextEx(Verlag, botonTexto[i], Verlag.baseSize, 1.0f).y * 2.0f ;
    }

    //


    /*position.x = middleScreenWidth - MeasureTextEx(Verlag, "Bienvenido", Verlag.baseSize * 2.0f, 1.0).x / 2.0f;*/

    SetTargetFPS(30);

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawRectangle(0, 0, screenWidth, 100.0f, POLICOLOR);

        for (int i = 0; i <= 3; i++)
        {
            DrawRectangle(botonPosicionX[i], botonPosicionY[i], botonLargo, botonAncho, POLICOLOR);
        }

        //DrawText("Congrats! You created your first window!", middleScreenWidth, middleScreenHeight, 20, LIGHTGRAY);
        DrawTextEx(Verlag, introduccion, posicionBienvenida, Verlag.baseSize, 1.0, RAYWHITE);

        for (int i = 0; i <= 3; i++)
        {
            DrawTextEx(Verlag, botonTexto[i], botonTextoPosicion[i], Verlag.baseSize, 1.0, RAYWHITE);
        }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }
   
    UnloadFont(Verlag);
    CloseWindow();        

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
