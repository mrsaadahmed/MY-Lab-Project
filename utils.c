#include <stdio.h>
#include "utils.h"

#define RESET   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1b[97m"


// Background colors (extended)
#define BG_BLACK    "\x1b[48;5;0m"
#define BG_RED      "\x1b[48;5;1m"
#define BG_GREEN    "\x1b[48;5;2m"
#define BG_YELLOW   "\x1b[48;5;3m"
#define BG_BLUE     "\x1b[48;5;4m"
#define BG_MAGENTA  "\x1b[48;5;5m"
#define BG_CYAN     "\x1b[48;5;6m"
#define BG_WHITE    "\x1b[48;5;7m"

// Additional background colors (extended)
#define BG_GRAY     "\x1b[48;5;8m"     // Gray
#define BG_LIGHT_BLUE  "\x1b[48;5;159m" // Light blue
#define BG_LIGHT_GREEN "\x1b[48;5;120m" // Light green
#define BG_LIGHT_YELLOW "\x1b[48;5;227m" // Light yellow
#define BG_LIGHT_CYAN "\x1b[48;5;195m" // Light cyan

void PrintLineRed(char *line) {
    printf(RED "%s\n" RESET, line);
};

void PrintLineGreen(char *line) {
    printf(GREEN "%s\n" RESET, line);
};

void PrintLineYellow(char *line) {
    printf(YELLOW "%s\n" RESET, line);
};

void PrintLineBlue(char *line) {
    printf(BLUE "%s\n" RESET, line);
};

void PrintLineMagenta(char *line) {
    printf(MAGENTA "%s\n" RESET, line);
};

void PrintLineCyan(char *line) {
    printf(CYAN "%s\n" RESET, line);
};

void PrintLineWhite(char *line) {
    printf(WHITE "%s\n" RESET, line);
};

void ClearScreen() {
    printf("\x1b[2J");
    fflush(stdout);
}