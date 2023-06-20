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

// String to int & long long
int n = stoi(s);
long long n = stoll(s);

// Int to string
int i_val = 20;
string str = to_string(i_val);

// String stream
string input = "1,2,3,4";
stringstream ss(input);
string token;

while (getline(ss, token, ',')) 
{
  cout << token<<endl;
}
