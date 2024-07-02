/*
   create an adaptor which accepts

   a)A data container of string value
   b)A function with the following signature
      i)input parameter:one string by lvalue reference
      ii)output : void

    Adaptor should be perform operation operations on the string values
    which are

    1)identify vowels
    2)print the last 3 characters of each string
    3)print the first non-vowel character of each string
*/


#include <iostream>
#include <functional>
#include <vector>
using Logic = std::function<void(const std::string&) >;
using DataContainer=std::vector<std::string>;

void Adaptor(const Logic fn,const DataContainer& data){
    for(const std::string& st : data){
        fn(st);
    }
}
void FindVowels(const std::string& val){
    if(val==""){
        std::cerr<<"cannot find vowels on the blank string\n";
        return;
    }

    bool atleastOneVowelFound {false};
    for( char c : val){
        if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'){
            atleastOneVowelFound = true;
            std::cout<< c << "\n";
        }
    }
    if (!atleastOneVowelFound) {
        std::cerr << "Not a single vowel found\n";
    }
}



int main(){

    std::vector<std::string>data1 {"","abc","xyz","mno"};
    std::vector<std::string>data2 {"", "", "", ""};
    std::vector<std::string>data3{};
    try{
        Adaptor(&FindVowels, data1);
    }catch (std::invalid_argument& ex){
        std::cerr << ex.what() <<"\n";
    }

    Adaptor(  [](const std::string& st)  { std::cout<<st.length();  },data1);

}