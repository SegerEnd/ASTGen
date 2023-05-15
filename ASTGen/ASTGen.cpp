// ASTGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ASTNode.cpp"

int main()
{
    // std::cout is an object of class ostream and it is connected with the standard output device, usually the screen. to display the value of a variable on the screen, we write the name of the variable after the insertion operator << as follows
    std::cout << "Hello World!\n";

    // create from class ASTNode a new object called node
    ASTNode node = ASTNode("Program", std::vector<ASTNode*>{
        new ASTNode("Function", std::vector<ASTNode*>{
			new ASTNode("Identifier", "main"),
                new ASTNode("Parameters", std::vector<ASTNode*>{}),
                new ASTNode("Block", std::vector<ASTNode*>{
                new ASTNode("Print", std::vector<ASTNode*>{
					new ASTNode("String", "Hello World!")
					})
				})
			})
		});
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
