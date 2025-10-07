// EXP 15D : String Reversal

#include <iostream>
#include <string>
using namespace std;

string reverse(string str,int index) {
    if(index < 0){ 
        return " ";
    }
    else{        
        return str[index] + reverse(str, index - 1);
    }
}

int main() {
    string str;
    cout << "Enter a word or sentence: "<<"\t";
    cin >> str;

    int length = str.length();
    
    string str_new = reverse(str,length - 1);
    cout<<"Reversed string :"<<str_new<<"\n";

    return 0;
}

/*
Sample Output : 
Enter a word or sentence : racecar
Reversed string : racecar
*/
