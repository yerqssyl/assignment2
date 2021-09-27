#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;

void changeLuck(Person &lhs, Person &rhs){
    int ths = lhs.getLuck();
    lhs.setLuck(rhs.getLuck());
    rhs.setLuck(ths);
}

int main() {

    srand(NULL);

    vector<Person> persons;//task1 

    persons.push_back(*new Person("Yerassyl", 18, rand() % 100));//insert 5 different Person (with name, age and luck) into vector
    persons.push_back(*new Person("Kazhymukan", 101, rand() % 100));
    persons.push_back(*new Person("Bekzat", 17, rand() % 100));
    persons.push_back(*new Person("Ansar", 35, rand() % 100));
    persons.push_back(*new Person("Arman", 44, rand() % 100));

    int max_length = persons[0].getLuck();
    Person person_max_length;

    for(const Person &cur_person : persons){
        if(cur_person.getLuck() > max_length){
            max_length = cur_person.getLuck();
            person_max_length = cur_person;
        }
    }
    cout << "Person with maximum luck is: " << person_max_length.getName() << ". His luck is: " << person_max_length.getLuck() << "\n";//Find and display luckiest person.

   //second:2 Persons and swaps their luck 

    Person a = *new Person("Hello", 23, 0);
    Person b = *new Person("World", 56, 100);

    cout << "Old luck's: " << a.getLuck() << " " << b.getLuck() << "\n";

    swap(a, b);

    cout << "New luck's: " << a.getLuck() << " " << b.getLuck() << '\n';

    //third task: creating dynamically

    Person *person = new Person("Example", 34, 75);

    delete person;
//I made a pointer to new object which is created in dynamic memory, we can delete it after using it, if we don't need it
// if u use it again, it will gain error, because it deleted(

}
