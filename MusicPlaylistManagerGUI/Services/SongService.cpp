#ifndef SONG_SERVICE_H
#define SONG_SERVICE_H

#include <iostream>

#include <vector>

#include <string>

#include "../Definitions/SongDefinition.cpp"

using namespace std;

class SongService
{

    private:

        Song song;
    
        vector<Song> songs;

    public:


        SongService() : songs(), song() {}

        vector<Song> createSong()
        {
 
            string title, artist;

            double duration;

            char check = 'y';

            while (check == 'y' || check == 'Y')
            {

                cout << "Enter Title :";

                getline(cin >> ws, title);

                cout << "Enter Artist :";

                getline(cin >> ws, artist);

                cout << "Enter Duration :";

                cin >> duration;

                cin.ignore();

                Song song(title, artist, duration);

                songs.push_back(song);

                cout << "Do you want to add another song?(y/n)";

                cin >> check;

                cin.ignore();

            }

            return songs;

        }

};

#endif
