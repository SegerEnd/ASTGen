//Create a Rust .rs file from an AST
// Write the code:

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/// <summary>
/// The ASTNode class represents a node in the abstract syntax tree (AST).
/// </summary>
/// <remarks>
/// This class has two constructors, one for a node with a value and one for a node with children.
/// </remarks>
class ASTNode
{
public:
	std::string type;
	std::string value;
	std::vector<ASTNode*> children;
	ASTNode(std::string type, std::string value)
	{
		this->type = type;
		this->value = value;
	}
	ASTNode(std::string type, std::vector<ASTNode*> children)
	{
		this->type = type;
		this->children = children;
	}
	
	// Create a file to write to
	//ofstream myfile;
	//myfile.open("\Rust.rs"); // create a file called Rust.rs to write to.

	//// Write to the file
	//myfile << "fn main() {\n";
	//myfile << "    println!(\"Hello World!\");\n";
	//myfile << "}\n";
	//// Close the file
	//myfile.close();
	//return 0;

	// Write a function to convert the AST to a string
	//std::string toString()
	//{
	//	std::string result = "";
	//	result += type + " ";
	//	if (value != "")
	//	{
	//		result += value;
	//	}
	//	else
	//	{
	//		result += "{";
	//		for (int i = 0; i < children.size(); i++)
	//		{
	//			result += children[i]->toString();
	//			if (i != children.size() - 1)
	//			{
	//				result += ", ";
	//			}
	//		}
	//		result += "}";
	//	}
	//	return result;
	//}
};


/// <summary>
/// The FileNode class represents a file in the abstract syntax tree (AST). It inherits from the ASTNode class.
/// </summary>
class FileNode : public ASTNode {

};

/// <summary>
/// The AbstractSyntaxTree class represents an abstract syntax tree (AST).
/// </summary>
/// <remarks>
/// This class is meant to contain all the AST nodes from class ASTNode with its children. To use in the fileGenerator to generate a Rust file from the AST nodes.
/// </remarks>
class AbstractSyntaxTree
{
public:
	// Why use the star after ASTNode? Because we want to store the address of the root node, not the root node itself.
	// why do we want to store the address of the root node? Because we want to be able to change the root node.
	// is that safe to do? Yes, because we are not changing the address of the root node, we are changing the address that the root node points to.
	ASTNode* root;

	// Create a constructor for the class
	AbstractSyntaxTree(ASTNode* root)
	{
		this->root = root;
	}

	// Create a list of all the nodes in the tree
	std::vector<ASTNode*> getNodes()
	{
		std::vector<ASTNode*> result;
		result.push_back(root);
		for (int i = 0; i < result.size(); i++)
		{
			for (int j = 0; j < result[i]->children.size(); j++)
			{
				result.push_back(result[i]->children[j]);
			}
		}
		return result;
	}

};;