
#include <iostream>

#include <string>

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

        int getSize()
        {

            return size;

        }

        void setHead(SongNode*& h)
        {

            head = h;

        }











     

    

    




};