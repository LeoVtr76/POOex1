#pragma once
#include <vector>

class ListData{
    private :
        std::vector<int> data;
    public :
        ListData();
        void addData(int);
        int count() const;
        int sum() const;
        double average() const;
        int minValue() const;
        int maxValue() const;
        int variationMax() const;
};

