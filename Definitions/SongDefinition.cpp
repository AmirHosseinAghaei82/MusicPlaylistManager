#ifndef SONG_DEFINITION_H
#define SONG_DEFINITION_H

#include <iostream>

#include <string>

using namespace std;

class Song 
{

    private:

        string title;

        string artist;

        double duration;

    public:

        Song(string& title, string& artist, double& duration)
        {

            this->title = title;

            this->artist = artist;

            this->duration = duration;

        }

        string getTitle()
        {

            return title;

        }

        string getArtist()
        {

            return artist;

        }

        double getDoration()
        {

            return duration;

        }

        void display()
        {

            cout << "title : "<< title<<endl;

            cout << "artist : "<< artist<<endl;

            cout << "duration :"<< duration;

        }

};

#endif // SONG_DEFINITION_H
