#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <tuple>
#include <set>
#include <map>

#include "string.cpp"

using namespace std;


// dijkstra algorithm
// Pseudocode referenced from: https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm
vector<string> dijkstra(map<string, map<string, int>> graph, string start, string end) {
    // Initialize variables
    set<string> unvisited;
    map<string, pair<int, string>> table; // <node, <distance, previous_node>>

    // Initialize the distance of the start node to 0 and all nodes distance to infinity
    for (auto& node : graph) {
        table[node.first] = make_pair(99999, "");
        unvisited.insert(node.first);
    }
    table[start] = make_pair(0, "");

    // While there are unvisited nodes
    while (!unvisited.empty()) {
        // Find the node with the smallest distance
        string u; // u is the node with the smallest distance
        int min_dist = 99999;
        for (auto& node : unvisited) {
            int current_distance = table[node].first;
            if (current_distance < min_dist) {
                min_dist = current_distance;
                u = node;
            }
        }
        unvisited.erase(u);

        // For each neighbor of u
        for (auto& neighbor : graph[u]) {
            // If neighbor is unvisited
            if (unvisited.find(neighbor.first) != unvisited.end()) {
                int new_distance = table[u].first + neighbor.second;

                // If the new distance is less than the current distance, update the distance and previous node
                if (new_distance < table[neighbor.first].first) {
                    table[neighbor.first] = make_pair(new_distance, u);
                }
            }
        }
    }

    // Reconstruct the path
    vector<string> path;
    string current = end;
    while (current != "") {
        path.push_back(current);
        current = table[current].second;
    }
    reverse(path.begin(), path.end());
    return path;
}

// Get path in string
string get_path(vector<string> path) {
    string path_str = "";
    for (int t = 0; t < path.size(); t++) {
        if (t == 0) {
            path_str += path[t];
        } else {
            path_str += " -> " + path[t];
        }
    }
    return path_str;
}

// Get path distance
int get_distance(map<string, map<string, int>> graph, vector<string> path) {
    int distance = 0;

    // Sum up the distance
    for (int t = 0; t < path.size() - 1; t++) {
        string from = path[t];
        string to = path[t + 1];
        distance += graph[from][to];
    }
    
    return distance;
}


int main() {
    fstream canada_map_file;
    canada_map_file.open("canadamap.txt");

    if (canada_map_file.is_open()) {
        string line;
        map<string, map<string, int>> graph;

        while (getline(canada_map_file, line)) {
            // Read line and split by space
            vector<string> values = StringExtension::split(line, ' ');
            string from(values[0]);
            string to(values[1]);
            int distance = stoi(values[2]);

            // Push edge
            graph[from][to] = distance;
            graph[to][from] = distance;
        }

        // Destinations
        vector<string> destinations = { "YVR", "YYZ", "YUL" }; // Vancouver, Toronto, Montreal

        // Print header
        cout << "Destination    Cost    Hops    Shortest Path" << endl;

        // Path from YYC to destinations
        for (auto& destination : destinations) {
            vector<string> path = dijkstra(graph, "YYC", destination);

            cout << StringExtension::pad_right(destination, " ", 11) << "    ";
            cout << StringExtension::pad_left(to_string(get_distance(graph, path)), " ", 4) << "    ";
            cout << StringExtension::pad_left(to_string(path.size() - 1), " ", 4) << "    ";
            cout << get_path(path) << endl;
        }
    }

    canada_map_file.close();
    return 0;
}