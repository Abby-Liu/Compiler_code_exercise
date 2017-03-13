// Basic interpreter
// Compiler Exercise (2)-B
#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

int main() {
    char dcl, id, quote='"';
    string value;
    char line[100];

    while(cin.getline(line,100) && *line){
        for(int i=0;i<10; i++){
            if(line[i] == '('){
                cout << "invalid input"<<endl;
                return 0;
               }
        }
        istringstream sin(line);
        sin >> dcl >> id;
        if(quote != '"'){
                cout << "invalid input"<<endl;
                break;
            }
        if(dcl == 's'){
            sin >> quote >> value >> quote;
            string val = value.erase(value.find('"'));
//            int ii;
//            istringstream is(val);
//            is>>val;

            if(quote != '"'){
                cout << "invalid input"<<endl;
                break;
            }
            if(value.find('/')==0){
                cout << "invalid input"<<endl;
                break;
            }
            if(id == 's'){
                 cout << "invalid input"<<endl;
                break;
            }

            cout << "strdcl " << dcl << endl;
            cout << "id " << id << endl;
            cout << "quote " << quote << endl;
            cout << "string " << val << endl;
            cout << "quote " << quote << endl;
        }
        else if(dcl == 'p'){
            cout << "print p" << endl;
            cout << "id " << id << endl;
        }
        else{
            cout << "invalid input"<<endl;
            break;
        }
    }
  return 0;
}
