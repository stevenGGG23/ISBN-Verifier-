
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;

//Provide function prototypes for CheckDigit and IsValidISBN 
bool IsValidISBN(const string& isbn);   
int CheckDigit(const string& isbn); 


int main() {
    string isbn;  
    bool isValid;  
    ifstream myIn; 

    //open file 
    myIn.open("isbn.dat");  
    // Ensure the file opened successfully
    assert(myIn);  


    //while loop to read from file until the file is finished 
   while (myIn >> isbn) {  
    isValid = IsValidISBN(isbn);  

    if (isValid) {
        cout << isbn << " is a valid ISBN number" << endl;
        cout << endl;
    } else {
        cout << isbn << " is not a valid ISBN number" << endl; 
        cout << endl;
    }
    }
    // Close the file
    myIn.close();  

    return 0;
}


// Define the IsValidISBN function here. The IsValidISBN function will call function
bool IsValidISBN(const string& isbn) { 

    //makes sure its 13 characters 
    if (isbn.length() != 13) {
    return false; 
    }

    int checkDigit = CheckDigit(isbn);
    return checkDigit == (isbn[12] - '0');  
}
// Define CheckDigit function here. 
int CheckDigit(const string& isbn) {
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        int digit = isbn[i] - '0';  
        if (i % 2 == 0)  
            sum += digit;
        else 
            sum += digit * 3;
    }
    int mod = sum % 10;
    return (10 - mod) % 10;  
} 
