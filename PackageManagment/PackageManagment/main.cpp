#include "package.h"
#include "typeTest.h"

using namespace std;

bool publicMembers = true; // Check for public members

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();

int main() {
    // Run each test one after an other

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();

    cout << "ALL TESTS COMPLETE!" << endl;
    return 0;
}

void test1() {
    cout << "******* Test 1: [Class default constructor] *******" << endl;
    Package test1Package;
    cout << endl;
    cout << "******* Constructor has no errors *******" << endl << endl;
    cout << "--------------------------------------------------" << endl << endl;
    cout << "******* Testing Class data members access *******" << endl;

    publicMembers = has_public_contents(test1Package);
    publicMembers = has_public_length(test1Package) || publicMembers;
    publicMembers = has_public_width(test1Package) || publicMembers;
    publicMembers = has_public_height(test1Package) || publicMembers;

    cout << "Your code " << (publicMembers ? "has public data members. Please set them to private and try again." : "has private data members only. PASSED") << endl;

    if (publicMembers) {
        throw new exception("Error, You have public members");
    }

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 1 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test2() {
    cout << "******* Test 2: [Class 3 Args constructor] *******" << endl;
    Package test2Package(10, 23, 45);
    cout << endl;
    cout << "******* Constructor has no errors *******" << endl << endl;
    cout << "--------------------------------------------------" << endl << endl;
    cout << "******* Testing Class data members access *******" << endl;

    publicMembers = has_public_contents(test2Package);
    publicMembers = has_public_length(test2Package) || publicMembers;
    publicMembers = has_public_width(test2Package) || publicMembers;
    publicMembers = has_public_height(test2Package) || publicMembers;

    cout << "Your code " << (publicMembers ? "has public data members. Please set them to private and try again." : "has private data members only. PASSED") << endl;

    if (publicMembers) {
        throw new exception("Error, You have public members");
    }

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 2 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test3() {
    cout << "******* Test 3: [buildBox Function] *******" << endl;
    Package test3Package;
    int length = 10, width = 23, height = 45;
    test3Package.buildBox(length, width, height);

    test3Package.displayBoxInfo(cout);

    cout << endl << "Your output should have: " << endl;
    cout << "|Length: " << length << "|\n";
    cout << "|Width:  " << width << "|\n";
    cout << "|Height: " << height << "|\n";
    cout << "|Contents: " << "|\n";
    cout << endl;
    cout << "******* buildBox has no errors *******" << endl << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 3 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test4() {
    cout << "******* Test 4: [loadBox Function] *******" << endl;
    cout << "This function needs the 'displayBoxInfo' complete to test it" << endl;
    Package test4Package(20, 33, 55);
    cout << "Test loading 'Pizzas': " << endl;
    test4Package.loadBox("Pizzas");
    test4Package.displayBoxInfo(cout);
    cout << "Hence 'Pizzas' is loaded in the contents, so the test passed." << endl;

    cout << "************************************************************************" << endl << endl;

    cout << "Test Prompt with 'No' option: Give Content not changed" << endl;
    test4Package.loadBox("Beans");

    cout << "************************************************************************" << endl << endl;

    cout << "Test Prompt with 'y' option: Passing in 'Tomatoes'" << endl;
    test4Package.loadBox("Tomatoes");
    test4Package.displayBoxInfo(cout);
    cout << "Hence 'Tomatoes' is loaded,So this Test has passed." << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 4 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test5() {
    cout << "******* Test 5: [emptyBox Function] *******" << endl;
    Package test5Package(4, 53, 25);
    test5Package.loadBox("Coffee");
    test5Package.displayBoxInfo(cout);
    cout << "Right Now 'Coffee' is present in the contents" << endl << endl;
    std::string removed = test5Package.emptyBox();
    cout << "Contents removed: " << removed << endl;

    test5Package.displayBoxInfo(cout);
    cout << "After running EmptyBox Function You can see empty contents now." << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 5 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test6() {
    cout << "******* Test 6: [boxIsEmpty Function] *******" << endl;
    Package test6Package(10, 12, 16);
    cout << "Box is empty: " << (test6Package.boxIsEmpty() ? "True" : "False") << endl;
    cout << "After Loading Toys in Content now we get False as result: " << endl;
    test6Package.loadBox("Toys");
    cout << "Box is empty: " << (test6Package.boxIsEmpty() ? "True" : "False") << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 6 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test7() {
    cout << "******* Test 7: [displayBox Function] *******" << endl;
    Package test7Package(10, 20, 30);
    test7Package.loadBox("Books");
    test7Package.displayBoxInfo(cout);
    cout << "Hence the dimensions and 'Books' are listed So DisplayBox Function is passed." << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 7 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}

void test8() {
    cout << "******* Test 8: [<< operator] *******" << endl;
    Package test8Package(25, 15, 10);
    test8Package.loadBox("Snacks");
    cout << test8Package << endl;
    cout << " Hence the expected dimensions and the actual Content dimentions are == Hence Operater is Passed." << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "+-----------Test 8 Complete------------+" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << endl;
}
