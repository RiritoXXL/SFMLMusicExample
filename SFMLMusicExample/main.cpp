#include <SFML/Audio.hpp>
#include <SFML/Main.hpp>
#include <Windows.h>
#include <iostream>

int main() {
	sf::Music mus;
	if (mus.openFromFile("ODDNUMBER.mp3") == true) {
		mus.setLoop(true);
		mus.play();
	}
	else {
		printf("Failed to Find Music(ODDNUMBER.mp3 as Example)");
		exit(334);
	}
	while (true) {
		Sleep(3200);
	}
	return 0;
}