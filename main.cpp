#include "Music.h"

int main() {
    Music song;
    // Prosimy użytkownika o wprowadzenie informacji o utworze
    song.collectData();

    // Wyświetlamy informacje o utworze
    song.displayInfo();

    return 0;
}