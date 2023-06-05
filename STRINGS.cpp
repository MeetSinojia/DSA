string substr(size_t pos, size_t len);
string str = "Hello World";
string substr = str.substr(6, 5); // Returns "World"

// Copy substring after pos
string str = "Hello World";
string substr = str.substr(6); // Returns "World"

string str = "Hello";
str.insert(5, " World"); // Inserts " World" at index 5

// Char to Int
char ch = '7';
int intValue = ch - '0';

// Int to string
int i_val = 20;
string stri = to_string(i_val);