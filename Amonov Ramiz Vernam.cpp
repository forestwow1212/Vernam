#include<iostream>

using namespace std;

class vernam
{
       public:
              string s,k;
              char enc[1000],dec[1000];
              vernam(string a, string b)
              {
                     s = a;
                     k = b;
              }
              void encrypt()
              {
                     int i,j=0;
                     for(i=0;i<s.size();i++)
                     {
                           enc[i] = s[i]^k[j];
                           j++;
                           if(j>=k.size())
                           {
                                  j =0;
                            }
                     }
              }
              void decrypt()
              {
                     int i,j=0;
                     for(i=0;i<s.size();i++)
                     {
                           dec[i] = enc[i]^k[j];
                           j++;
                           if(j>=k.size())
                           {
                                  j =0;
                           }
                     }
              }
              void printenc()
              {
                     int i;
                     char c;
                     for(i=0;i<s.size();i++)
                     {
                           c = enc[i]%74 + 48;
                           cout<<c;
                     }
                     cout<<endl;
              }
              void printdec()
              {
                     int i;
                     for(i=0;i<s.size();i++)
                     {
                           cout<<dec[i];
                     }
                     cout<<endl;
              }
};


int main()
{
       string s,k;
       cout<<"Matnni katta harflarda kiriting"<<endl;
       getline(cin,s);
       cout<<"Kalitni katta harflarda kiriting"<<endl;
       getline(cin,k);
      
       vernam v(s,k);
      
       v.encrypt();
       cout<<"Encrypted Message : ";
       v.printenc();
       cout<<endl;
      
       return 0;
}
