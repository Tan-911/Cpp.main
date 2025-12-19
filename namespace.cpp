//This program is used to demonstrate the use of namespaces in C++
#include <iostream>
//insted of using 'using namespace std;', we will use [ std:: ]

int main() {
    using std :: cout;
    using std :: string;
    string greeting = "Hello, world!";
    cout << greeting << "\n";
    return 0;
}

/*
    Conclusion: [using namespace std;] can help reduce time consumption 
    because it eliminates the redundancy of typing [std::]. 
*/