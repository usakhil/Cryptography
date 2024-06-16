
# Monoalphabetic Cipher Program

This program implements a simple Monoalphabetic Cipher for encryption and decryption of text using a key read from a file. The program reads a key from a file named `KEY.txt`, then encrypts and decrypts the user input text using this key.

## Files

- **main.cpp**: Contains the main program code.
- **KEY.txt**: A file containing the key used for the cipher.

## Prerequisites

- C++ compiler (e.g., g++)
- `KEY.txt` file with a 26-character key for the monoalphabetic cipher

## Compilation

To compile the program, use the following command:

```bash
g++ -o cipher main.cpp
```

## Usage

1. Ensure you have a `KEY.txt` file in the same directory as the compiled program. The `KEY.txt` file should contain a single line with a 26-character string representing the key.

2. Run the program:

```bash
./cipher
```

3. Enter the text you want to encrypt when prompted.

4. The program will display the encrypted text followed by the decrypted text.

## Example

**KEY.txt**:
```
QWERTYUIOPASDFGHJKLZXCVBNM
```

**Program Execution**:
```bash
./cipher
```
```
Enter the text to be encrypted: Hello World
Encrypted text: Itssg Vgksr
Decrypted text: Hello World
```

## Functions

### `string readKeyFromFile(const string& filename)`

Reads the key from the specified file.

- **Parameters**: 
  - `filename`: The name of the file containing the key.
  
- **Returns**: 
  - The key as a string.

### `string Monoalphabetic_Cipher_encryption(const string& message, const string& key)`

Encrypts the given message using the specified key.

- **Parameters**:
  - `message`: The text to be encrypted.
  - `key`: The key for the monoalphabetic cipher.
  
- **Returns**:
  - The encrypted message.

### `string Monoalphabetic_Cipher_decryption(const string& message, const string& key)`

Decrypts the given message using the specified key.

- **Parameters**:
  - `message`: The text to be decrypted.
  - `key`: The key for the monoalphabetic cipher.
  
- **Returns**:
  - The decrypted message.

## Notes

- The `KEY.txt` file must exist in the same directory as the executable.
- The key must be a 26-character string representing the substitution alphabet for the cipher.
- The program handles both upper and lower case letters, and preserves non-alphabetic characters in the input text.

## Error Handling

If the key file cannot be opened, the program will display an error message and terminate.

```cpp
if (!inFile) {
    cout << "Error opening key file!" << endl;
}
```

## Author

Akhil Bhandari
