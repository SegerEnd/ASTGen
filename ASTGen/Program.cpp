// Program.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#include "ASTNode.cpp"


/// <summary>
/// Bool named devMode to set the application in development mode.
/// </summary>
bool devMode = false;

int main(int argc, char* argv[])
{
    if (argc > 1) {
		// std::cout is an object of class ostream and it is connected with the standard output device, usually the screen. to display the value of a variable on the screen, we write the name of the variable after the insertion operator << as follows
        std::cout << "The passed arguments to the application are:" << std::endl;

        for (int i = 1; i < argc; i++) {
			// Convert the argument to a std::string for easier comparison
			std::string arg = argv[i];

            std::cout << arg << std::endl;

			// Check if the argument is -dev if so set the application in development mode.
			//if (std::strcmp(argv[i], "-dev") == 0) {
			if (arg.compare("-dev") == 0 || arg.compare("dev") == 0) {
				devMode = true;
			}

			if (devMode) {
				std::cout << "The application is in development mode." << std::endl;
			}
			else {
				std::cout << "The application is not in development mode." << std::endl;
			}
        }
    }
	else {
		std::cout << "There are no arguments passed to the application." << std::endl;
	}

    // create from class ASTNode a new object called node
  //  ASTNode node = ASTNode("Program", std::vector<ASTNode*>{
  //      new ASTNode("Function", std::vector<ASTNode*>{
		//	new ASTNode("Identifier", "main"),
  //              new ASTNode("Parameters", std::vector<ASTNode*>{}),
  //              new ASTNode("Block", std::vector<ASTNode*>{
  //              new ASTNode("Print", std::vector<ASTNode*>{
		//			new ASTNode("String", "Hello World!")
		//			})
		//		})
		//	})
		//});


	std::cin.get();
	return 0;
}

// The comments below are from the visual studio template for a console application, I keep them here temporarily for reference.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
