
#include<bits/stdc++.h>
using namespace std;


class Student{
    
    public:
    string name = "Prabhu";
    string rollnum = "infinity go";

    private:
    string place = "p2ty5";

    public:
    void introduce()
    {
        name = "hello";
        cout<<name<<" "<<"and my roll number is "<<rollnum<<" "<<place;
    }
};


// also with the help of string and vector as well  make them understand 
int main()
{
    Student obj;
    obj.introduce();
    return 0;
}