#include <iostream>
#include <stdlib.h>

using namespace std;
using std::string;

int main()
{
    cout << "Input 17 numbers of your ID!" << endl;
    string qian17;
    int xishu[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    string jiaoyan="10X987654321";
    int temp=0;int yushu=0;
    int i=0;int num=0;
    cin>>qian17;
    if(qian17.size()!=17)
    cout<<"There is "<<qian17.size()<<"numbers, please check!"<<endl;

    for(i=0;i<17;i++)
    {
        if(qian17[i]<48||qian17[i]>57)
        {
            cout<<"Input ERROR, Please Check!"<<endl;
            return 0;
        }
        num=qian17[i]-48;
        temp=temp+num*xishu[i];
    }
    yushu=temp%11;
    cout << "The last bit is:" << endl;
    cout << jiaoyan[yushu]<< endl;
    system("pause");



    return 0;

}
