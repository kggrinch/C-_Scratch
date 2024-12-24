#ifndef PLAYLIST_H_
#define PLAYLIST_H_
#include "song.h"
#include <iostream>
#include <vector>

class Playlist
{
public:

// Adds a new song to the vector
bool add_song(const Song& song);

// remove song from vector returns the song removed
bool remove_song(Song& target, Song& result);

// changes the location of the given song into the given location. Could swap with other songs
bool re_arrange(Song target, int new_location);

// shuffles the vector
bool shuffle();

private:
std::vector<Song> songs;

};

#endif
