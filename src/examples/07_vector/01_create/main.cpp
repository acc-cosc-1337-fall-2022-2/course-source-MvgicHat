#include<iostream>
#include<vector>

using std::cout;
using std::string;
using std::vector;

int main()
{

    vector<int> numbers{3, 5, 9};
    cout<<"Size: "<<numbers.size()<<"\n";

    cout<<"\n";

    vector<char> letters;
    letters.push_back('a');
    letters.push_back('b');

    for(auto ch: letters)
    {
        cout<<ch<<"\n";
    }


    vector<int> numbers1(10, 1);

    for(auto n: numbers1)
    {
        cout<<n<<"\n";
    }

    return 0;
}
