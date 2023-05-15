// the class in this file needs to generate a file in the Rust programming language (filename.rs) from the AST nodes.

// Include all the libraries
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Include all the class files
#include "ASTNode.cpp"

// Create a class the generates a rust file from the AST nodes.
class FileGenerator
{
public:
	std::string generateFile(ASTNode node)
	{
		// Create a file to write to
		std::ofstream myfile;
		myfile.open("\Rust.rs"); // create a file called Rust.rs to write to.
		// Write to the file
		myfile << "fn main() {\n";
		myfile << "    println!(\"Hello World!\");\n";
		myfile << "}\n";
		// Close the file
		myfile.close();

		return 0;
	}
};