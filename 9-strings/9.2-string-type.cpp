#include <iostream>
using namespace std;

int main(){

string s;
const char *p = "evren";
s = p;
cout << s.size() << endl;
s.append(" deneme");
cout << s << endl;
cout << s.substr(2,8) << endl;

return 0;
}
