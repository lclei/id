#include <iostream>
#include <stdlib.h>

using namespace std;
using std::string;

int main()
{
    const int contentSize = 17;
    const int factor[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    const string outString = "10X987654321";
    string idContent;
    int i=0;
    int num=0;
    int sum=0;

    /// get input ///
    cout << "Please input first 17 numbers of your ID:" << endl;
    cin >> idContent;
    if(idContent.size() != contentSize)
    cout << "There is " << idContent.size() << "numbers, please check!" << endl;

    /// calculate: sumof(content[i]*factor[i])%11 ///
    for (i=0; i<contentSize; i++)
    {
        if (idContent[i] < '0' || idContent[i] > '9')
        {
            cout << "Input ERROR, Please Check!" << endl;
            return 0;
        }
        num = idContent[i] - '0';
        sum = sum + num * factor[i];
    }

    /// output ///
    cout << "The last bit is:" << endl;
    cout << outString[sum % 11] << endl;

    return 0;
}
