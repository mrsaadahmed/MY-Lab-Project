// #include <windows.h>
// #include <stdio.h>

// //There is a function named "PlaySound" to play sound in windows using windows.h api
// //The function takes two arguments: the first is a string containing the file path to the sound file, and the second is a DWORD value that specifies the type of sound to play.

// //example of DWORD value: SND_ASYNC | SND_FILENAME
// // SND_ASYNC =      00 00 00 01
// // SND_FILENAME =   00 00 00 10
// // SND_LOOP =       00 00 01 00

// // OR operator
// // SND_FILENAME | SND_ASYNC = 00 00 00 11



// int main() {
//     const char *filepath = ".\\sounds\\file_example_WAV_1MG.wav";  // Relative path from executable

//     // Use PlaySound to play the specified WAV file
//     if (PlaySound(TEXT(filepath), NULL, SND_FILENAME | SND_ASYNC) == 0) {
//         fprintf(stderr, "Error playing sound.\n");
//         return 1;
//     }

//     // Wait for sound to finish
//     Sleep(3000);
    
    
//     MessageBox(NULL, "Hello, World!", "Message Box Example", MB_OK);

//     return 0;
// }
