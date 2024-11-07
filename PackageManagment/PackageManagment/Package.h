#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <iomanip>

class Package {
private:
    int length; 
    int width;   
    int height;  
    std::string contents; 

public:

    Package();


    Package(int l, int w, int h);

    void buildBox(int l, int w, int h);


    void loadBox(const std::string& item);


    std::string emptyBox();


    bool boxIsEmpty() const;

    void displayBoxInfo(std::ostream& out) const;


    friend std::ostream& operator<<(std::ostream& out, const Package& pkg);
};

#endif 
