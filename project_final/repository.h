#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <vector>
#include "song.h"

using namespace std;

class Repository
{
public:
    Repository() = default;
    Repository(const Repository &other) = delete; //copy constructor
    Repository& operator=(const Repository &other) = delete; //assignment operator
    virtual void store(const Song& s);
    const Song& find(std::string title, std::string artist);
    virtual void removeSong(const Song& s);
    vector<Song> getAllSongs();


private:
    vector<Song> songs;
};

#endif // REPOSITORY_H
