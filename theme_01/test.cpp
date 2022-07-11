#include <iostream>
#include <cstring>


struct pair {
    char* name; // строка
    int val; // целое
};



const int large = 5;
static pair vec[large];

pair* find(const char* p)
{   
    int i;
    for (i=0; i < large; i++) {
        if (strcmp(p,vec[i].name)==0) {
            return &vec[i];
        }
    }
    for (i=0; i < large; i++) {
        if (vec[i].name == "None") {
            return &vec[i];
        }
    }   
}

int& value(const char* p)
{
    pair* res = find(p);
    if (res->name == "None") { // до сих пор строка не встречалась, значит надо инициализировать
        std::cout << "DEBUG 1" << std::endl;
        res->name = new char[strlen(p)+1];
        strcpy(res->name,p);
        res->val = 0; // начальное значение равно 0
    }
    return res->val;
}



// int main()
// {
//     vec[0].name = "ERROR";
//     vec[1].name = "Niyaz";
//     vec[2].name = "Djamal";
//     vec[1].val = 21;
//     vec[0].val = 12;
//     vec[2].val = 14;
//  //   const char* obj = "Niyaz";
//     std::cout << value("Kamil") << std::endl;
    
//     return 0;
// }
const int MAX = 256;
int main()
{
    for (int i=0; i < large; i++) {
        vec[i].name = "None";
    }
    bool input_ended = false;
    int j = 0;
    while (j < 5) {
        j++;
        char buf[MAX];
        std::cin>>buf;
        value(buf)++;
        
    }
    for (int i=0; vec[i].name; i++)
        std::cout << vec[i].name << ": " << vec [i].val<< '\n';

    return 0;
}