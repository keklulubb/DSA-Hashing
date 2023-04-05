#ifndef RELATIONALTABLE_HPP
#define RELATIONALTABLE_HPP

#include <iostream>
#include <vector>

using namespace std;

class RelationalTable
{
public:
    
    RelationalTable(double loadTreshold = 0.5); //no arg constructor
    RelationalTable(const string attNames[], int size, double loadThreshold = 0.5);
    
    void addRow(const string values[], int size);
    vector<string> removeRow(const string& pkValue);
    
    void setValue(const string& pkValue, const string& fieldName, const string& fieldValue);
    string getValue(const string& pkValue, const string& fieldName);
    
    void addField(const string& fieldName);
    void removeField(const string& fieldName);
    
    int getSize() const;
    
    //extra:
    
    //hash function method
    //is empty method - load threshold = 0
    
private:
    
    vector<string> fieldNames; //stores the field names of the table
    vector <pair<string, vector<string>> rows; //a hash table including pairs that map a primary key to a vector
    
    int capacity; //the maximum capacity of the table
    
    const double loadThreshold = 0.5; //identifies the load treshold of the hash table for rehashing
    
};

#endif /* RelationalTable_hpp */
