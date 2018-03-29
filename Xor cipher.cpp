#include <iostream>
#include <bitset>
#include <cmath>


using namespace std;

int main()
{
    int sum=0;
    bitset<8> p('p');
    string word;
    cout<<"enter word you want to decode it";
    getline(cin,word);
    for(int i=0 ; i<word.size() ; i++){
            int dec=word[i];
            if (word[i]==' '){
        cout<<" ";
    }
    else{
        bitset<8> x (dec);
        bitset<8> h (x^p);
        int n=7;
        for(int k=0 ; k<8 ; k++){
            sum=sum+(h[k]*(pow(2 , n)));
            n=n-1;
        }

        cout<<char (sum)<<endl;
        cout<<hex<<sum<<endl;
    }
    }







    return 0;
}
