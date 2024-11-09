#include <iostream>
#include <fstream>
#include <cstdlib>  // for std::system
#include "player.h"


// go get portaudio and essentia for audio analysis





using namespace std;

int main() {
    Player player;
    string currentSong = "example.mp3";  // Example song

    player.play(currentSong);

    return 0;
}
