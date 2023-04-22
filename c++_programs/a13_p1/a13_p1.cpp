/*
CH-230-A
a13_p1
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string inp, outp; // Declaring variable to store name of input and output
    cout << "Enter the name of the file :";
    cin >> inp; // Reading the name
    outp = inp;
    size_t cnt = outp.rfind("."); // Finds . in the name
    outp.insert(cnt, "_copy"); // Puts _copy before .

    ifstream in(inp); // Read
    if (!in.good()) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }

    ofstream out(outp); // Write
    if (!out.good()) {
        cerr << "Error opening output file" << endl;
        exit(2);
    }

    char c;
    while (in.get(c)) {
        out << c;
    } // Copying the content of input file to output file

    /* Closing the files */
    in.close();
    out.close();

    in.open(outp);
    while (in.get(c)) {
        cout << c << endl;
    }

    in.close();
    return 0;
    
}
