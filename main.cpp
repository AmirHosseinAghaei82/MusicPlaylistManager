#include <iostream>

#include "./Services/SongService.cpp"
#include "./Services/SongNodeService.cpp"
#include "./Services/PlayListService.cpp"

using namespace std;

int main()
{
    
    cout << "Music PlayList Manager"<<endl;

    SongService songService;
    
    SongNodeService songNodeService(songService.createSong());

    PlayList playList;

    PlayListService playListService(songNodeService.createNodes(), playList);

    playListService.createPlayList();

    

    
  
}

