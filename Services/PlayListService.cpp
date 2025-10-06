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

                playList.setPlayListSize(songNodes.size());

                if(playList.getHead() == nullptr) {

                    playList.setHead(songNodes[0]);

                }

                int i = 1;

                while (i < playList.getPlayListSize())
                {

                    songNodes[i-1]->setNext(songNodes[i]);

                    i++;

                }

                int j = 0;

                int number = 1;

                SongNode* node = playList.getHead();

                while(j < playList.getPlayListSize())
                {

                    cout << number << " : " << node->getSongTitle() << " by " << node->getSongArtist() << endl;
                    
                    j++;
                    
                    number++;

                    node = node->getNext();

                } 


            }

        }
;

#endif
