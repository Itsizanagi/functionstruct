#include <iostream>
#include <string>

struct Perso {
    std::string name;
    std::string surname;
    int age;

    void insert(std::string stname, std::string stsurname, int stage) {
        name = stname;
        surname = stsurname;
        age = stage;
    }

    void echo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Surname: " << surname << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    int i;
    Perso *persoarray = new Perso[5];

    persoarray[0].insert("fuu", "zenin", 14);
    persoarray[1].insert("toji", "syf", 10);
    persoarray[2].insert("awjiawjd", "awwad", 120);
    persoarray[3].insert("aweqe", "qeq", 17);

    for(i = 0; i < 4; i++) {
        persoarray[i].echo();
        std::cout << " " << std::endl;
    }

    delete[] persoarray;

    return 0;
}
