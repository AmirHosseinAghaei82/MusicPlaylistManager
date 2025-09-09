
#include <iostream>

#include <string>

#include "../Definitions/SongDefinition.cpp"

using namespace std;

class SongNode
{

    public:

        Song song;

        SongNode* next;

        SongNode(Song& s) : song(s), next(nullptr) {}


};