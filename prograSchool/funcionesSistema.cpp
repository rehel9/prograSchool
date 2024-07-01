#include <windows.h>
#include "funcionesSistema.hpp"

const char* archivoEXE[3] = { "fundamentos.exe", "ifSwitch.exe", "for.exe" };

void abrirEXES(int archivo) {
	system(archivoEXE[archivo]);
}