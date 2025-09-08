#include <iostream>

#include "./Definitions/SongDefinition.cpp"
#include "./Services/SongService.cpp"

using namespace std;

int main()
{

    vector<Song> songs;

    cout << "Music PlayList Manager"<<endl;

    SongService SongService;

    songs = SongService.createSong();

    cout << songs.size();

    

}

