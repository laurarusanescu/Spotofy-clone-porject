#ifndef SONGCONTROLLER_H
#define SONGCONTROLLER_H
#include "repository.h"
#include <string>
#include <algorithm>
#include <stack>
#include"action.h"
#include"actionadd.h"
#include"actiondelete.h"
#include<memory>
using namespace std;

class SongController
{
public:
    SongController(Repository &r);
    void addSong(string title, string artist, int year, string lyrics = "", string url = "");
    void remove(Song& song);
    const Song& searchSong(string title, string artist);
    std::vector<Song> sortByArtistName(bool ascending = true);
    std::vector<Song> sortByTitles(bool ascending = true);
    void addSongA( Song& song);
    void removeSongA( Song& song);
    void undo();
    void redo();
    Repository &getRepository();


private:
    Repository &repo;
    stack <Action*> undoStack;
    stack <Action*>redoStack;

};

#endif // SONGCONTROLLER_
