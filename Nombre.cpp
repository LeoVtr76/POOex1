#include "Nombre.h"
#include <iostream>
#include <numeric> 
#include <algorithm> 

ListData::ListData(){
    std::cout << "L'objet à été créer !"<< std::endl;
}

void ListData::addData(int _value){
    if(data.size()<1024){
        data.push_back(_value);
    } else {
        std::cout << "[!] La limite de 1024 données atteinte."<< std::endl;
    }
}
int ListData::count() const{
    return data.size();
} 

int ListData::sum() const {
    return std::accumulate(data.begin(), data.end(), 0);
}

double ListData::average() const {
    if (data.empty()) return 0;
    return static_cast<double>(sum()) / data.size();
}

int ListData::minValue() const {
    return *std::min_element(data.begin(), data.end());
}

int ListData::maxValue() const {
    return *std::max_element(data.begin(), data.end());
}

int ListData::variationMax() const {
    return maxValue() - minValue();
}
int main(){
    ListData test;
    test.addData(3);
    test.addData(9);
    test.addData(13);
    test.addData(-1);
    std::cout<<"Moyenne : " << test.average() << std::endl;
    test.addData(0);
    std::cout<<"Minimum : " <<test.minValue() << std::endl;

    return 0;
}