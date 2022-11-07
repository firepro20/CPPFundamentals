// basicapp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc,      // Number of strings in array argv
    char* argv[],   // Array of command-line argument strings
    char* envp[])  // Array of environment variable strings
{
    int count;

    // Display each command-line argument.
    cout << "\nCommand-line arguments:\n";
    for (count = 0; count < argc; count++)
        cout << "  argv[" << count << "]   "
        << argv[count] << "\n";
    // Note: First argument will always be path of the executable

    /* List contents in directory */
    // https://en.cppreference.com/w/cpp/filesystem
    // print all files from the current directory and below
    std::cout << "Print all files from the current directory and below." << std::endl;
    for (auto& p : std::filesystem::recursive_directory_iterator(std::filesystem::current_path()))
        std::cout << p.path() << '\n';
    // print all files from the current directory
    std::cout << "Print all files from the current directory" << std::endl;
    for (auto& p : std::filesystem::directory_iterator(std::filesystem::current_path()))
        std::cout << p.path() << '\n';
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
