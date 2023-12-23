#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

class Animal
{

public:

    Animal(string name, int age, string tall, string activity, string residence, string food)
        : name(name), age(age), tall(tall), activity(activity), residence(residence), food(food), info(" ") {}

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        name = name;
    }


    void Sleep()
    {
        cout << name << " is sleeping" << endl;
    }


    void Run()
    {
        cout << name << " is running" << endl;
    }
    void Angry()
    {
        cout << name << " is angry" << endl;
    }
    void Dance()
    {
        cout << name << " is dancing and singing" << endl;
    }

    void Feed()
    {
        cout << name << " is fed" << endl;
    }


    virtual void MakeSound()
    {
        cout << "" << endl;
    }

    virtual string Fur_Colour()
    {
        return "";
    }
    virtual string Animal_Weight()
    {
        return "";
    }
    void setInfo(string info)
    {
        info = info;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Tall: " << tall << endl;
        cout << "Activity: " << activity << endl;
        cout << "Residence: " << residence << endl;
        cout << "Favourite food: " << food << endl;
        cout << Fur_Colour() << endl;
        cout << Animal_Weight() << endl;
        cout << endl;
    }


protected:
    string name;
    string tall;
    string info;
    string activity;
    string residence;
    string food;
    double age;
};

class Zoo
{
private:
    vector<Animal*> animals;
public:

    void deleteAnimal(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals.erase(animals.begin() + i);
                break;
            }
        }

    }

    void addAnimal(Animal* animal)
    {
        animals.push_back(animal);
    }

    void feedAll()
    {
        for (int i = 0; i < animals.size(); i++)
        {
            animals[i]->Feed();
        }
    }
    void AngrySmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Angry();
                break;
            }
        }
    }

    void MakeSoundSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->MakeSound();
                break;
            }
        }
    }

    void RunSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Run();
                break;
            }
        }
    }

    void DanceSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Dance();
                break;
            }
        }
    }
    void SleepSmb(string name)
    {
        for (int i = 0; i < animals.size(); i++)
        {
            if (animals[i]->getName() == name)
            {
                animals[i]->Sleep();
                break;
            }
        }
    }
    void randompositionAll()
    {
        srand(time(0));
        int x;
        x = rand() % 3 + 1;

        if (x == 2)
        {
            for (int i = 0; i < animals.size(); i++)
            {
                animals[i]->Sleep();
            }
        }
        else
        {
            for (int i = 0; i < animals.size(); i++)
            {
                animals[i]->Run();
            }
        }

    }
    void infoAll()
    {
        for (int i = 0; i < animals.size(); i++)
        {
            animals[i]->getInfo();
        }
    }
};

class Bear : public Animal
{
public:

    Bear(string name, int age, string tall, string activity, string residence, string food, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void Angry()
    {
        cout << name << " is angry" << endl;
    }
    void MakeSound() override
    {
        cout << name << ": gggrrrrr" << endl;
    }
    string Fur_Colour() override
    {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override
    {
        return name + "'s weight is " + animal_weight;
    }
private:
    string fur_colour;
    string  animal_weight;
};

class Tiger : public Animal
{
public:

    Tiger(string name, int age, string tall, string activity, string residence, string food, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void Run()
    {
        cout << name << " is running";
    }

    void MakeSound() override {
        cout << name << ": rrrr" << endl;
    }
    string Fur_Colour() override {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override {
        return name + "'s weight is " + animal_weight;
    }

private:
    string fur_colour;
    string animal_weight;
};

class Panda : public Animal {
public:
    Panda(string name, int age, string tall, string activity, string residence, string food, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void Speep()
    {
        cout << name << "is sleeping" << endl;
    }
    void MakeSound() override {
        cout << name << ": zzzz" << endl;
    }
    string Fur_Colour() override {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override {
        return name + "'s weight is " + animal_weight;
    }
private:
    string fur_colour;
    string animal_weight;

};
class Capybara : public Animal {
public:
    Capybara(string name, int age, string tall, string activity, string residence, string food, string fur_colour, string animal_weight)
        : Animal(name, age, tall, activity, residence, food), fur_colour(fur_colour), animal_weight(animal_weight) {}

    void Dance()
    {
        cout << name << "is dancing and singing" << endl;
    }
    void MakeSound() override {
        cout << name << ": ca pi baa raaaaa capibaracapibara" << endl;
    }
    string Fur_Colour() override {
        return name + "'s fur colour is " + fur_colour;
    }
    string Animal_Weight() override {
        return name + "'s weight is " + animal_weight;
    }
private:
    string fur_colour;
    string animal_weight;

};

int main() {

    Zoo zoo;



    Bear a("Bear Misha", 4, "3m", "eating all types of food", "Arkhangelsk, Russia", "all types of food", "brown", "270kg");
    Tiger b("Tiger Tigran", 10, "3m", "looking for a victim", "Khabarovsk, Russia", "meat", "black", "250kg");
    Panda c("Panda Pasha", 3, "3m", "resting", "Tokio, Japan", "bamboo", "black and white", "88kg");
    Capybara d("Capybara Casha", 2, "1m", "lazing", "Buenos-Aires, Argentina", "oranges", "brown", "36kg");



    zoo.addAnimal(&a);
    zoo.addAnimal(&b);
    zoo.addAnimal(&c);
    zoo.addAnimal(&d);



    zoo.infoAll();
    cout << "" << endl;
    zoo.feedAll();
    zoo.DanceSmb("Capybara Casha");
    zoo.MakeSoundSmb("Capybara Casha");
    zoo.RunSmb("Tiger Tigran");
    zoo.MakeSoundSmb("Tiger Tigran");
    zoo.SleepSmb("Panda Pasha");
    zoo.MakeSoundSmb("Panda Pasha");
    zoo.AngrySmb("Bear Misha");
    zoo.MakeSoundSmb("Bear Misha");


    return 0;

}