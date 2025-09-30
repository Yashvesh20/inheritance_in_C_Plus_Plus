Yashvesh Singh 24070123138
#include<iostream>
#include<string>
using namespace std;

class Movie {
public:
    string genre = "Science Fiction";
    void type() {
        cout << "Feature Film" << endl;
    }
};

class Title : public Movie {
public:
    string title = "Interstellar";
};

class Cinema : public Title {
public:
    string name = "Grand Cinema";
};

int main() {
    Cinema m1;
    m1.type();
    cout << m1.genre << ": " << m1.title << endl;
    cout << "Cinema: " << m1.name << endl;
    return 0;
}
output:
Feature Film
Science Fiction: Interstellar
Cinema: Grand Cinem
