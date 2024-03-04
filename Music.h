#ifndef MUSIC_
#define MUSIC_

#include <string>

class Music {
private:
    std::string title;
    std::string artist;
    int yearReleased;
    std::string genre;

public:
    Music(); // Konstruktor
    ~Music(); // Destruktor

    // Metoda do wprowadzania informacji o utworze
    void collectData();

    // Metoda do wyœwietlania informacji o utworze
    void displayInfo() const;

    // Getter i setter dla tytu³u
    std::string getTitle() const;
    void setTitle(const std::string& title);

    // Getter i setter dla artysty
    std::string getArtist() const;
    void setArtist(const std::string& artist);

    // Getter i setter dla roku wydania
    int getYearReleased() const;
    void setYearReleased(int yearReleased);

    // Getter i setter dla gatunku
    std::string getGenre() const;
    void setGenre(const std::string& genre);
};

#endif // MUSIC_#pragma once
