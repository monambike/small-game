#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
#include "TerminalUtils.h"
using namespace std;

std::atomic<bool> timerExpired(false);

void TerminalUtils::ChangeTerminalTextColor(Color color) {
    switch (color) {
        case Black: cout << "\033[30m"; break;
        case Red: cout << "\033[31m"; break;
        case Green: cout << "\033[32m"; break;
        case Yellow: cout << "\033[33m"; break;
        case Blue: cout << "\033[34m"; break;
        case Magenta: cout << "\033[35m"; break;
        case Cyan: cout << "\033[36m"; break;
        case White: default: cout << "\033[37m"; break; // Default color is white
    }
}

void TerminalUtils::ClearTerminal() {
    cout << "\033[2J\033[1;1H"; // Clear terminal screen for most platforms, including VS Code's integrated terminal
    cout.flush();
}

void TerminalUtils::TimerThread(atomic<bool>& timerExpired, int seconds) {
    // Sleep for 3 seconds
    this_thread::sleep_for(chrono::seconds(seconds));

    // Set the timerExpired flag to true
    timerExpired = true;
}
