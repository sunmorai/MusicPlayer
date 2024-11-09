#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include<vector>

class Player {
public:
    void play(const std::string& song);

	bool isPlaying() const;
	bool loadwavfile();
};

#endif // PLAYER_H
