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
    ListData *test;
    ListData *test2;
    test = new ListData();
    test2 = new ListData();
    test->addData(3);
    test->addData(9);
    test->addData(13);
    test->addData(-1);
    test2->addData(-5);
    test2->addData(-2);
    test2->addData(-7);
    int moy1 = test->average();
    int moy2 = test2->average();
    if(moy1 == moy2){
        std::cout<<"Les deux moyennes sont identiques"<<std::endl;
    }else {
        std::cout<<"Les deux moyennes ne sont pas identiques"<<std::endl;
    }
    delete test;
    delete test2;
    return 0;
}