#include <iostream>
#include "player.h"

// Example play function
void Player::play(const std::string& song) {
    std::cout << "Playing: " << song << std::endl;
 // Add audio playback logic here (e.g., using PortAudio)

} 
bool Player::isPlaying() const {
	// Add logic to check if a song is currently playing
	return true;
}
bool Player::loadwavfile() {
	// Add logic to load a .wav file
	return true;
}

