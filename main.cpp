#include "Music.h"

int main() {
    Music song;
    // Prosimy u�ytkownika o wprowadzenie informacji o utworze
    song.collectData();

    // Wy�wietlamy informacje o utworze
    song.displayInfo();

    return 0;
}