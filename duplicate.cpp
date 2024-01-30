#include <iostream>

using namespace std;

int main () {
    string InputStr = "";
    cout << "Enter text: ";
    cin >> InputStr;
    
    string UniqStr = InputStr;
    char TempChar;
    UniqStr.empty();
    
    UniqStr[0] = InputStr[0];
    cout << "\n Input: " << InputStr[0] << " - " << UniqStr[0]  << " - " << UniqStr.size();
    int cnt = 0;
    for (int i=0; i < InputStr.size(); i++)
    {
        for (int j=0; j < UniqStr.size(); j++)
        {
           // cout << "\n In loop: " << InputStr[i] ;
                if (InputStr[i] == UniqStr[j] )
                    break;
            cnt = j;    
        }
        UniqStr[cnt] = InputStr[i];
            
        //cout << "\n" << InputStr << " - " << UniqStr;

    }
    UniqStr[cnt+1] = '\0';
    cout << "\nString with unique characters:" << InputStr << " - " << UniqStr;

    return 0;
}

    
