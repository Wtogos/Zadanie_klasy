#include "Music.h"
#include <iostream>

Music::Music() {
    // Konstruktor
}

Music::~Music() {
    // Destruktor
}

void Music::collectData() {
    std::string title_, artist_, genre_;
    int yearReleased_;

    std::cout << "Podaj tytul piosenki: ";
    std::getline(std::cin >> std::ws, title_);

    std::cout << "Podaj wykonawce: ";
    std::getline(std::cin >> std::ws, artist_);

    std::cout << "Podaj rok wydania: ";
    std::cin >> yearReleased_;

    std::cout << "Podaj gatunek: ";
    std::getline(std::cin >> std::ws, genre_);

    // Ustawiamy wprowadzone informacje za pomoc¹ setterów
    setTitle(title_);
    setArtist(artist_);
    setYearReleased(yearReleased_);
    setGenre(genre_);
}

void Music::displayInfo() const {
    std::cout << "Tytul: " << title << std::endl;
    std::cout << "Artysta: " << artist << std::endl;
    std::cout << "Rok wydania: " << yearReleased << std::endl;
    std::cout << "Gatunek: " << genre << std::endl;
}

std::string Music::getTitle() const {
    return title;
}

void Music::setTitle(const std::string& title_) {
    title = title_;
}

std::string Music::getArtist() const {
    return artist;
}

void Music::setArtist(const std::string& artist_) {
    artist = artist_;
}

int Music::getYearReleased() const {
    return yearReleased;
}

void Music::setYearReleased(int yearReleased_) {
    yearReleased = yearReleased_;
}

std::string Music::getGenre() const {
    return genre;
}

void Music::setGenre(const std::string& genre_) {
    genre = genre_;
}