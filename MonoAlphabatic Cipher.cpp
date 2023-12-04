#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string readKeyFromFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error opening key file!" << endl;
    }
    else {
        string key;
        getline(inFile, key);

        inFile.close();

        return key;
    }
}

string Monoalphabetic_Cipher_encryption(const string& message, const string& key) {
    string encrypted;
    for (char ch : message) {
        if (isupper(ch)) {
            encrypted += key.at(ch - 'A');
        }
        else if (islower(ch)) {
            encrypted += tolower(key.at(ch - 'a'));
        }
        else {
            encrypted += ch;
        }
    }
    return encrypted;
}

string Monoalphabetic_Cipher_decryption(const string& message, const string& key) {
    string decrypted;
    for (char ch : message) {
        if (isupper(ch)) {
            size_t index = key.find(ch);
            decrypted += 'A' + index;
        }
        else if (islower(ch)) {
            size_t index = key.find(toupper(ch));
            decrypted += 'a' + index;
        }
        else {
            decrypted += ch;
        }
    }
    return decrypted;
}

int main() {
    string key = readKeyFromFile("KEY.txt");

    string text;
    cout << "Enter the text to be encrypted: ";
    getline(cin, text);

    string encrypted = Monoalphabetic_Cipher_encryption(text, key);
    cout << "Encrypted text: " << encrypted << endl;

    string decrypted = Monoalphabetic_Cipher_decryption(encrypted, key);
    cout << "Decrypted text: " << decrypted << endl;

    return 0;
}
