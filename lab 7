#include <iostream>
using namespace std;
void input(char*);
bool checkForIncorrectSymbols(char *);
int main() {
    char s[256];
    int i,max = 0,index,count=1;
    input (s);
    for (i=0;s[i]!=0;i++)
    {
      if (s[i]==s[i-1])
          count++;
      if (count>max)
      {
          max=count;
          index=i;
      }
      if (s[i]!=s[i-1]) count=1;

    }
    cout<<"Самая длинная группа это группа "<<s[index]<<" и ее длинна равна "<<max;
    return 0;
}

void input(char*s){
    do {
        cout<<"Вводите 0 или 1 без пробелов"<<endl;
        cin.getline(s, 256);
    } while (!checkForIncorrectSymbols(s));

}
bool checkForIncorrectSymbols(char * s) {
    int i = 0;
    while (s[i] != 0) {

        if (s[i] != '0' && s[i] != '1')
        {
            return false;
        }
        i++;

    }
    return true;
}
