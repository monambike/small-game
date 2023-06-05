#ifndef GAMEMESSAGE_H
#define GAMEMESSAGE_H

#include "Player.h"

class GameMessage {
public:
    static void showWelcomeMessage();
    static void AskForChangePlayerName();
    static void ShowPressAnyKeyToContinueMessage();
    static void ShowInvalidInputTimerMessage();
    static void ClearTerminalAndShowInvalidInputMessage();
};

#endif
