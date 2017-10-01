#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<string> names;
    string name;
    int i,j;
    getline(cin,name);

    int len = name.size();
    //cout<<len;
    j=0;
    for(i=0;i<len;i++)
    {
        if(name[i]==' ')
        {
         names.push_back(name.substr(j,i-j));
         j = i+1;
        }
        if(i == len-1)
        {
            names.push_back(name.substr(j,len-j+1));
        }
    }
    cout<<names.size();

    return 0;
}
