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
    
    int size;
    
    public:
    
        PlayList() : head(nullptr), size(0) {}

        SongNode* gethead()
        {

            return head;

        }
        void setHead(SongNode*& h)
        {

            head = h;

        }

        int getSize()
        {

             return size;

        }

        void displayHead()
        {

            cout << head << endl;

        }

        void displaySize()
        {

            cout << size << endl;

        }












     

    

    




};

#endif