#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <fstream>
#include <iostream>
#include <exception>

using namespace std;


/// Загружает в vector список студентов из filename; 
/// в файле одна строка - один студент
vector<string> load_students(const string& filename){
    ifstream f( filename );
    if ( not f.is_open() )
        throw runtime_error("Cant open file");
    vector<string> students;
    string buf;
    while ( getline(f, buf)){
        // buf.pop_back();buf.pop_back();
        students.push_back(buf);}
    f.close();
    return students;
}

/// Пример итератора: случайный итератор по массиву
class VectorRandIterator{
    vector<string>* vec;
    size_t i = 0;

public:
    VectorRandIterator(vector<string>* vec1, size_t seed) { 
        vec = vec1;
        // перемешивание
        std::shuffle (vec->begin(), vec->end(), std::mt19937(seed));
        i = 0; }

    bool is_end() const { return i == vec->size(); }
    void next()         { i++; }
    string data() const { return vec->at(i); }
};


string HELP = "student_iterator <students_list.txt> <seed>";


int main(int argc, char *argv[]){

    if (argc != 3){
        cout << HELP << "\n";
        return 0;}

    string filename = argv[1];
    long seed = atol(argv[2]);

    vector<string> students = load_students( filename );
    VectorRandIterator it( &students, seed );

    while( ! it.is_end() ){
        cout << it.data();
        it.next();
        cin.get();
    }

    return 0;
}


