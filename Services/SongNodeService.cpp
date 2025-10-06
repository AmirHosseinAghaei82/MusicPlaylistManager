#ifndef SONG_NODE_SERVICE_H
#define SONG_NODE_SERVICE_H

#include <iostream>

#include <string>

#include "../Services/SongService.cpp"

#include "../Definitions/SongNodeDefinition.cpp"

#include <vector>

using namespace std;

class SongNodeService
{

private:

    vector<Song> songs;

public:

    SongNodeService(const vector<Song> &s) : songs(s) {}

    vector<SongNode *> createNodes()
    {

        vector<SongNode*> songNodes;

        for (Song &song : songs)
        {

            songNodes.push_back(new SongNode(song));

        }

        return songNodes;

    }

};

#endif