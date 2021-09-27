#include <iostream>
#include <vector>
#include "Person.h"
Person::Person(const string &name, int age, int luck) : name(name), age(age), luck(luck) {}
//1. Design a class "Person"
//setters and getters

Person::Person() {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getLuck() const {
    return luck;
}

void Person::setLuck(int luck) {
    Person::luck = luck;
}
