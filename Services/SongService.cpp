#include <iostream>

#include <string>

#include "../Definitions/SongDefinition.cpp"

using namespace std;

class SongService
{
    
    public:

        string title, artist;

        double duration;

        Song createSong()
        {

            cout << "Enter Title :";

            getline(cin >> ws, title);

            cout << "Enter Artist :";

            getline(cin >> ws, artist);

            cout << "Enter Duration :";

            cin >> duration;

            return Song(title, artist, duration);

        }



};
