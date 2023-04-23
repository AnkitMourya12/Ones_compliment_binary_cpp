//#include<iostream>
//#include<string>
#include<conio.h>
#include"bits/stdc++.h"
using namespace std;

class binary {
    string s;
    public:
    void read(void)
    {
        cout<<"enter the binary no.";
        cin>>s;
    }
    void chk_bin()
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"That binary foramte is not exit";
                getch();
                exit(0);
                
            }
        }
        
    }
        void once(void)
        
        {
        	chk_bin();
            for(int i=0;i<s.length();i++)
            {
                if(s.at(i)=='0')
                {
                    s.at(i)='1';
                }
                else{
                    s.at(i)='0';
                }
            }
        }
        void display(void)
        { once();
            cout<<" once compliment is ="<<s;
        }
    
};

int main()
{
    binary b;
    b.read();
    //b.once();
    b.display();
    getch();
    
    return 0;
}
