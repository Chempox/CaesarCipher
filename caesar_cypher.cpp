#include <iostream>
#include <vector>
#include <string>
using namespace std;


int indexChecker(char arr[],char keyChar)
{
    for(int i = 0; i<26; i++)
    {
        if(keyChar == arr[i]){
            return i;
        }

    }
}

void cypher(char arr[], vector <char> b, int c, string texto)
{   
    string cypher_text = "", temp;
    vector <int> index_vector;

    for(int i = c; i<26;i++)
    {
        b.push_back(arr[i]);
    }

    for(int i = 0; i<c; i++)
    {
        b.push_back(arr[i]);
    }

    for ( int i = 0 ; i<texto.length() ; i++)
    {
    index_vector.push_back(indexChecker(arr,texto[i]));
    }


    for (int i = 0; i < index_vector.size(); i++)
    {
        cout<<b[index_vector[i]];
    }

}



int main(){

    string texto;
    char alphabet [26]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    vector <char> new_alphabet;
    char keyChar;
    cout<<"Please enter a key character (ALL CAPS): "<<endl;
    cin>>keyChar;
    cout<<"Please enter a message (ALL CAPS): "<<endl;
    cin>> texto;
    int initialIndex = indexChecker(alphabet,keyChar);
    cypher(alphabet, new_alphabet, initialIndex, texto);


    return 0;
}