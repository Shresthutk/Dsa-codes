#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    //used to insert unique key value pairs
    unordered_map <string,int> m;
    //easiest way to add element
    m["Utkarsh"]=1;
    
    //add elements by making pair
    pair <string,int> p2;
    p2=make_pair("Sahil",2);
    m.insert(p2);

    //another way to make pair --here you define and initialize pair in a single line
    pair<string,int> p3("Shivam",3);
    m.insert(p3);

    //printing is same as array
   /*1st method*/ cout<<m["Sahil"]<<" ";
   /*2nd method*/ cout<<m.at("Shivam")<<" ";

    //difference between first and second method
    /* if we search for an element that doesnt exist then the first method will create that element and assing value 0 to it while the second method will throw an error*/

    //Other functions
    cout<<m.count("Utkarsh")<<" "; //boolean func
    cout<<m.size();
    m.erase("Sahil");

    //iterating through elements
    unordered_map<string,int> :: iterator it=m.begin();
    //one way
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    //other way
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    /*
    in unordered map the elements don't get printed in the order they were inserted like in ordered map
    */




    
}