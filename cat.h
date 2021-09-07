//
// Created by Keith Lancaster on 9/7/21.
//

#ifndef CODE_CAT_H
#define CODE_CAT_H
class Cat {
public:
    Cat(const Cat& rhs);
    Cat(int newAge = 0);
private:
    int age;
public:
    int getAge() const;
    void speak();
    void setAge(int newAge);
};

#endif //CODE_CAT_H
