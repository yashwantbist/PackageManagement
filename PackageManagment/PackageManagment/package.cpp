#include "package.h"

// Default constructor
Package::Package() : length(0), width(0), height(0), contents("") {}

// Overloaded constructor
Package::Package(int l, int w, int h) : length(l), width(w), height(h), contents("") {}

// Build box dimensions
void Package::buildBox(int l, int w, int h) {
    length = l;
    width = w;
    height = h;
}

// Load contents into the box
void Package::loadBox(const std::string& item) {
    if (boxIsEmpty()) {
        contents = item;
    }
    else {
        std::cout << "Current contents: " << contents << std::endl;
        std::cout << "Do you want to discard the current contents? (y/n): ";
        char choice;
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            contents = item;
            std::cout << "Loaded " << item << " into the box." << std::endl;
        }
        else {
            std::cout << "Contents not changed." << std::endl;
        }
    }
}

// Empty the box contents
std::string Package::emptyBox() {
    std::string previousContents = contents;
    contents = "";
    return previousContents;
}

// Check if the box is empty
bool Package::boxIsEmpty() const {
    return contents.empty();
}

// Display box information
void Package::displayBoxInfo(std::ostream& out) const {
    out << "|Length: " << std::setw(9) << length << "|\n";
    out << "|Width:  " << std::setw(9) << width << "|\n";
    out << "|Height: " << std::setw(9) << height << "|\n";
    out << "|Contents: " << std::setw(5) << (contents.empty() ? "" : contents) << "|\n";
}

// Overloaded output operator
std::ostream& operator<<(std::ostream& out, const Package& pkg) {
    pkg.displayBoxInfo(out);
    return out;
}
