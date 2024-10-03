
#include<bits/stdc++.h>
using namespace std;


class Car{
    
    public:
    string name = "Prabhu";
    string rollnum = "infinity go";

    private:
    string place = "p2ty5";

    public:
    void introduce()
    {
        cout<<name<<" "<<"and my roll number is "<<rollnum<<" "<<place;
    }
};


// also with the help of string and vector as well  make them understand 
int main()
{
    Car obj;
    obj.introduce();
    return 0;
}