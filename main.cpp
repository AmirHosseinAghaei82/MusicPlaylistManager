#include <iostream>

#include "./Definitions/SongDefinition.cpp"
#include "./Services/SongService.cpp"
#include "./Services/SongNodeService.cpp"

using namespace std;

int main()
{

    cout << "Music PlayList Manager"<<endl;

    SongService songService;

    SongNodeService songNodeService(songService.createSong());


    
}

