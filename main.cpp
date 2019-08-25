#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <iostream>
#include <iterator>

using namespace std;


int main(){
    map<string,int> mapa;


    string palabra;
    int cantidad_de_veces;
    cin>>cantidad_de_veces;
    for (int i=0;i<cantidad_de_veces;i++){
        cin>>palabra;
        if(mapa.find(palabra) != mapa.end()){

            mapa[palabra]+=1;
        }else{
            mapa.insert(make_pair(palabra,1));

        }
        getline(cin,palabra);

    }
    auto iterator=mapa.begin();
    while(iterator != mapa.end())
    {
        cout<<iterator->first<<" "<<iterator->second<<std::endl;
        iterator++;
    }


}