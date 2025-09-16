#ifndef PLAY_LIST_DEFINITION_H
#define PLAY_LIST_DEFINITION_H

#include <iostream>

#include <string>

#include <vector>

#include "../Definitions/SongNodeDefinition.cpp"

using namespace std;

class PlayList
{

    private:

    SongNode* head;
    
    int playListSize;
    
    public:
    
        PlayList() : head(nullptr), playListSize(0) {}

        SongNode* gethead()
        {

            return head;

        }
        void setHead(SongNode*& h)
        {

            head = h;

        }

        int getPlayListSize()
        {

             return playListSize;

        }

        void setPlayListSize(int s)
        {

            playListSize = s;

        }

        void displayHead()
        {

            cout << head << endl;

        }

        void displaySize()
        {

            cout << playListSize << endl;

        }












     

    

    




};

#endif