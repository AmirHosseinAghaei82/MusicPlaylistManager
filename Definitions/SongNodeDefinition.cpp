#ifndef SONG_NODE_DEFINITION_H
#define SONG_NODE_DEFINITION_H

#include <iostream>

#include <string>

#include "../Definitions/SongDefinition.cpp"

using namespace std;

class SongNode
{

    private:

        Song song;

        SongNode* next;

    public:

        SongNode(Song& s) : song(s), next(nullptr) {}

        void setNext(SongNode* s)
        {

            this->next = s;

        }

        SongNode* getNext()
        {

            return next;

        }

        string getSongTitle()
        {

            return song.getTitle();

        }

        string getSongArtist()
        {

            return song.getArtist();

        }

        double getSongDoration()
        {

            return song.getDoration();

        }
};



#endif