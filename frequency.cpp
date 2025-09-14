#include<iostream>
#include<String>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        int f=0,v=0,l=0,g=0,vow=0,conso=0;
        char val;
        string al="aioue";
        string af;

        for(int i=0;i<=al.length();i++)
        {
            v=0;
            for(int j=0;j<=s.length();j++){
                if(s[j]==al[i])
                {
                    cout<<al[i]<<" " <<v<<endl;
                    v++;
                }
            }

            if(v>=f)
            {
                f=v;
            }
        }

        cout<<"v :"<<g<<"f :"<<f<<endl;
        
        if(v>=f)
          vow=v;
        else
          vow=f;
        
        cout<<"vow :"<<vow<<endl;
        //return v;
        //cout<<f<<endl;
        //return f;

        for(char h='a';h<='z';h++){
            l=0;
           for(int p=0;p<=s.length();p++){ 
                if((s[p]==h) && (s[p]!='a' && s[p]!='e' && s[p]!='i' && s[p]!='o' && s[p]!='u')){
                   cout<<s[p]<<" " <<l<<endl;
                    l++;
                }
           }
           if(l>=g)
            g=l;
           //cout<<l<<endl;
       }
       cout<<"g :"<<g<<"l :"<<endl;
       if(l>=g)
        conso=l;
       else
        conso=g;
        
        cout<<vow<<" "<<conso<<endl;;

       return vow+conso;
    }
};


int main()
{
    Solution st;
    //string s="suuuccessess";
    string s="aeiaeia";
    cout<<st.maxFreqSum(s)<<endl; 
    return 0;
}
/*
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
         {
            v++;
            
         }
*/