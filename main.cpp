#include <iostream>

#include "./Definitions/SongDefinition.cpp"
#include "./Services/SongService.cpp"

using namespace std;

int main()
{

    cout << "Music PlayList Manager"<<endl;

    SongService SongService;

    Song song = SongService.createSong();

    song.display();

}

