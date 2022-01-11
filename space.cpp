
#include <iostream>
using namespace std;
string split(string str, string delimiter){
    //str: chuỗi cần tách
    //delimiter: ký tự phân cách

    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        cout << token << endl;
        str.erase(0, pos + delimiter.length());
    }
    return str;
}

int main() {
	string s;
	char c= ' ';
	getline(cin, s);
	
	if(s.length()>100){
	    cout<<"N";
	}else{
	int dem=0;
	for(int i=0; i<s.length(); i++){
	    if(s.at(i)==c){
	        dem=dem+1;
	    }
	}
	if(dem == 0){
	cout<<"N";
	}
	else{
		 cout << split(s, " ") << endl;
	}
	}
	return 0;
}