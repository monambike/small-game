// Copyright(c) 2023-present, Vinícius Gabriel (@monambike)
// Distributed under Creative Commons License (https://creativecommons.org/licenses/by/4.0/)

#include <iostream>
#include "Player.hpp"
#include "player_status.hpp"
#include "../utilities/terminal_utils.hpp"

void PlayerStatus::displayMajorLine() {
    cout << "==============================";
}

void PlayerStatus::displayUserLife(){
    cout << "Life Points:";
    int end = mainPlayer.getPlayerLife();
    TerminalUtils::changeTerminalTextColor(RED);
    for (int i = 1; i <= end; i++) {
        cout << " ♥";
    }
    cout << endl;
    TerminalUtils::changeTerminalTextColor(WHITE);
}

void PlayerStatus::showGameStatusOnScreen() {
    // Header line
    displayMajorLine();
    cout << endl << "[ESC]       STATUS" << endl << endl;
    // Displaying player name line
    mainPlayer.displayPlayerName();
    cout << endl;
    // Displaying user life line
    displayUserLife();
    // Footer line
    displayMajorLine();
    cout << endl;
}
