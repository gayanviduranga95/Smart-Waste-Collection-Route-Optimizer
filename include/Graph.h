#pragma once
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Graph {
    private:
        map<int, vector<pair<int, int>>> adjList;
    public:
        void addLocation(string name);
        void addRoad(string from, string to, int distance);
        void displayGraph();

};