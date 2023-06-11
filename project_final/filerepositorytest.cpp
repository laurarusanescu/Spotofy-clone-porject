#include "filerepositorytest.h"
#include "repository.h"
#include <iostream>
#include <ostream>


void FileRepositoryTest::runAllTests()
{
    testStore();
    testRemove();
    std::cout<<"All File Repository tests passed"<<endl;
}

void FileRepositoryTest::testStore()
{
    FileRepository fileRepository("data.txt");

    Song song1("Title1", "Artist1", 1, "Lyrics1", "url1");
    fileRepository.store(song1);
    assert(fileRepository.getAllSongs().size() == 1);

    Song song2("Title2", "Artist2", 2, "Lyrics2", "url2");
    fileRepository.store(song2);
    assert(fileRepository.getAllSongs().size() == 2);
}

void FileRepositoryTest::testRemove()
{
    FileRepository fileRepository("data.txt");

    Song song1("Title1", "Artist1",  1, "Lyrics1", "url1");
    fileRepository.store(song1);

    Song song2("Title2", "Artist2", 2, "Lyrics2", "url2");
    fileRepository.store(song2);

    fileRepository.removeSong(song1);
    assert(fileRepository.getAllSongs().size() == 1);

    fileRepository.removeSong(song2);
    assert(fileRepository.getAllSongs().size() == 0);
}
