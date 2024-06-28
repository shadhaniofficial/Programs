#include <ncurses.h>
#include <unistd.h>
#include <string.h>

int main() {
    int i, j;
    const char *message = " I LOVE YOU  I LOVE YOU  I LOVE YOU  I LOVE YOU ";

    // Initialize the ncurses library
    initscr();
    
    // Set text color to red and background color to white
    start_color();
    init_pair(1, COLOR_RED, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    
    // Loop to print the messages
    for (i = 0; i < 100; i++) {
        // Clear the screen
        clear();

        // Fill the screen with the message
        for (j = 0; j < LINES; j++) {
            mvprintw(j, 0, "%s%s%s%s%s%s%s", message, message, message, message, message, message, message);
        }
        
        // Refresh the screen to show the changes
        refresh();
        
        // Delay for 500 milliseconds
        usleep(500000);
    }
    
    // Wait for a key press
    getch();
    
    // End the ncurses mode
    endwin();
    
    return 0;
}

