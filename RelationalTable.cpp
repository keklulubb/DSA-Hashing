#include "RelationalTable.hpp"
#include <iostream>
#include <vector>

using namespace std;

RelationalTable::RelationalTable(double loadTreshold = 0.5)//no arg constructor - creates an empty table
{
    
}

RelationalTable::RelationalTable(const string attNames[], int size, double loadTreshold = 0.5)// parametrized constructor
{
    
}

void RelationalTable::addRow(const string values[], int size) //adds a row of values to the table or updates the existing row
{
    
}

vector<string> RelationalTable::removeRow(const string& pkValue)//removes the row associated with the key passed in "pkValue"
{
    
}

void RelationalTable::setValue(const string& pkValue, const string& fieldName, const string& fieldValue)//accesses the record associated with the key "pkValue" and sets the value of the field identified by the name "fieldName" to "fieldValue"
{
    
}

string RelationalTable::getValue(const string& pkValue, const string& fieldName)//accesses the record associated with the key "pkValue" and returns the value of the field identified by the name "fieldName"
{
    
}

void RelationalTable::addField(const string& fieldName)//adds a new field called "fieldName" to the table
{
    
}

void RelationalTable::removeField(const string& fieldName)//removes the field called "fieldName" from the table
{
    
}

int RelationalTable::getSize() const //returns the number of rowa in the table
{
    
}
