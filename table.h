#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <string>

#include <sys/socket.h>


using namespace std;

template<int in_count, const char* classname>
class Table{
public:
    static const int count = count;
//    static const char* classname = in_classname;
    static const int values[count];
    static const char* names[count];

    static string toDB()
    {
        string output = string("insert into ") + string(classname) + string(" values\n");
        for (int i = 0; i < count - 1; i++) {
            output += string("(") + to_string(i) + string(",") + to_string(values[i]) + string(",") + string("\"") + string(names[i]) + string("\"") + string("),\n");
        }
        int i = count - 1;
        output += string("(") + to_string(i) + string(",") + to_string(values[i]) + string(",") + string("\"") + string(names[i]) + string("\"") + string(");");
        return output;
    }
};

#endif // TABLE_H
