#ifndef PLAY_LIST_SERVICE_H
#define PLAY_LIST_SERVICE_H

#include <iostream>

#include <string>

#include <vector>

#include "../Definitions/PlayListDefinition.cpp"

using namespace std;

class PlayListService
{

    private:

        PlayList &playList;

        vector<SongNode *> songNodes;

    public:

        PlayListService(const vector<SongNode *> &s, PlayList &p) : songNodes(s), playList(p) {}

        void createPlayList()
        {

            if (playList.gethead() == nullptr) {

                cout<<"پلی لیستی  هنوز ساخته نشده"<<endl;

            }

            playList.setHead(songNodes[0]);

            cout<<playList.gethead();

        }
};

#endif
