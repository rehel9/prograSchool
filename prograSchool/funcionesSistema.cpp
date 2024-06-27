#include <windows.h>
#include "funcionesSistema.hpp"

const char* archivoEXE[3] = { "ejemplo.exe", "ifSwitch.exe", "ejemplo2.exe" };

void abrirEXES(int archivo) {
	system(archivoEXE[archivo]);
}