#include "../include/Graph.h"

void Graph::addLocation(string name){
    adjList[name];
}
void Graph::addRoad(string from, string to,int distance){
    adjList[from].push_back({to, distance});
    adjList[to].push_back({from, distance}); 
}