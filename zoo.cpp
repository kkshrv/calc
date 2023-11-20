#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
        string name; int age;
        Animal(string name, int age)
        {
            this -> name = name;
            this -> age = age;
        }
        virtual void status()
        {
            cout << name << " is an animal" << endl;
        }
        virtual void move()
        {
            cout << name << " is moving" << endl; 
        }
        void born()
        {
            age = 0;
            cout << name << " was born" << endl;
            cout << name << "'s age is " << age;
        }
};

class Mammal : public Animal
{
    public:
        string name; int age;
        Mammal(string name, int age) : Animal(name, age)
        {
            this -> name = name;
            this -> age = age;
        }
        void status() override
        {
            cout << name << " is a mammal" << endl;
        }
        void move() override
        {
            cout << name << " is walking" << endl;
        }
};

class Bird : public Animal
{
    public:
        string name; int age; string plumage; double wingspan;
        Bird(string name, int age, string plumage, double wingspan) : Animal(name, age)
        {
            this -> name = name;
            this -> age = age;
            this -> plumage = plumage;
            this -> wingspan = wingspan;
        }
        void status() override
        {
            cout << name << ": Tweet-tweet" << endl;
        }
        void move() override
        {
            cout << name << "is flying" << endl;
        }
        void plumageColor()
        {
            cout << name << "'s plumage is " << plumage << endl;
        }
        void wSpan()
        {
            cout << name << "'s wingspan is " << wingspan << "centimeters" << endl;
        }
};

class Reptile : public Animal
{
    public:
        string name; int age;
        Reptile(string name, int age) : Animal(name, age)
        {
            this -> name = name;
            this -> age = age;
        }
        void status() override
        {
            cout << "This is a reptile" << endl;
        }
        void move() override
        {
            cout << name << "is crawling" << endl;
        }
};

class Monkey : public Mammal
{
    public:
        string name; int age; string eyes; int iq;
        Monkey(string name, int age, string eyes, int iq) : Mammal(name, age)
        {
            this -> name = name;
            this -> age = age;
            this -> eyes = eyes;
            this -> iq = iq;
        }
        void status() override
        {
            cout << name << ": Ooh-ooh-ooh-eee-eee" << endl;
        }
        void eat()
        {
            cout << name << " is eating a banana" << endl;
        }
        void eyesColor()
        {
            cout << name << "'s eyes color is " << eyes << endl;
        }
        void isHuman()
        {
            if (iq >= 80)
            {
                cout << name << " is a human" << endl;
            }
            else cout << name << " is definitely a monkey (or a very dumb human)" << endl;
        }
};

class Bear : public Mammal
{
    public:
        string name; int age; string wool; string season;
        Bear(string name, int age, string wool, string season) : Mammal(name, age)
        {
            this -> name = name;
            this -> age = age;
            this -> wool = wool;
            this -> season = season;
        }
        void status() override
        {
            cout << name << ": Where is my balalaika?" << endl;
        }
        void eat()
        {
            cout << name << " is eating honey" << endl;
        }
        void woolColor()
        {
            cout << name << "'s wool color is " << wool << endl;
        }
        void isAsleep()
        {
            if (season == "winter")
            {
                cout << name << " is in hybernation" << endl;
            }
            else cout << name << " is not in hybernation" << endl;
        }
};

class Caracal : public Mammal
{
    public:
        string name; int age;
        Caracal(string name, int age) : Mammal(name, age)
        {
            this -> name = name;
            this -> age = age;
        }
        void status() override
        {
            cout << name << ": I am a war criminal, meow" << endl;
        }
        void eat()
        {
            cout << name << " is eating pelmeny" << endl;
        }
        void crimeCommit()
        {
            srand(time(NULL));
            int choice = rand() % 3;
            switch (choice):
                {
                    case 0:
                        cout << name << " is bombing Yugoslavia" << endl;
                    case 1:
                        cout << name << " is bombing Dresden" << endl;
                    case 2:
                        cout << name << " is bombing Hamburg" << endl;
                }
        }
};

class Parrot : public Bird
{
    public:
        string name; int age; string plumage; double wingspan; int words;
        Parrot(string name, int age, string plumage, double wingspan, int words) : Bird(name, age, plumage, wingspan)
        {
            this -> name = name;
            this -> age = age;
            this -> plumage = plumage;
            this -> wingspan = wingspan;
            this -> words = words;
        }
        void status() override
        {
            cout << name << ": Yo-ho-ho and a bottle of rum" << endl;
        }
        void eat()
        {
            cout << name << " is eating seeds" << endl;
        }
        void vocabulary()
        {
            cout << name << " knows " << words << " word(s)" << endl;
        }
};

class Owl : public Bird
{
    public:
        string name; int age; string plumage; double wingspan; string timesOfday;
        Owl(string name, int age, string plumage, double wingspan, string timesOfday) : Bird(name, age, plumage, wingspan)
        {
            this -> name = name;
            this -> age = age;
            this -> plumage = plumage;
            this -> wingspan = wingspan;
            this -> timesOfday = timesOfday;
        }
        void status() override
        {
            cout << name << ": Ooh-ooh" << endl;
        }
        void eat()
        {
            cout << name << " is eating a mouse" << endl;
        }
        void occupation()
        {
            if (timesOfday == "night")
            {
                cout << name << " is hunting" << endl;
            }
            else cout << name << " is sleeping" << endl;
        }
};

class Eagle : public Bird
{
    public:
        string name; int age; string plumage; double wingspan;
        Eagle(string name, int age, string plumage, double wingspan) : Bird(name, age, plumage, wingspan)
        {
            this -> name = name;
            this -> age = age;
            this -> plumage = plumage;
            this -> wingspan = wingspan;
        }
        void status() override
        {
            cout << "This is an eagle" << endl;
        }
        void eat()
        {
            cout << name << " is eating some meat" << endl;
        }
};

class Crocodile : public Reptile
{
    public:
        string name; int age; int tail;
        Crocodile(string name, int age, int tail) : Reptile(name, age)
        {
            this -> name = name;
            this -> age = age;
            this -> tail = tail;
        }
        void status() override
        {
            cout << "This is a crocodile" << endl;
        }
        void eat()
        {
            cout << name << " is chewing someone's leg." << endl;
        }
        void tailStatus()
        {
            cout << name << "'s tail is " << tail << " meters long" << endl;
        }
};

class Turtle : public Reptile
{
    public:
        string name; int age; string shell;
        Turtle(string name, int age, string shell) : Reptile(name, age)
        {
            this -> name = name;
            this -> age = age;
            this -> shell = shell;
        }
        void status() override
        {
            cout << name << ": Cowabunga" << endl;
        }
        void eat()
        {
            cout << name << " is eating pizza." << endl;
        }
        void shellStatus()
        {
            cout << name << "'s shell is " << shell << endl;
        }
};

class Snake : public Reptile
{
    public:
        string name; int age; int length;
        Snake(string name, int age, int length) : Reptile(name, age)
        {
            this -> name = name;
            this -> age = age;
            this -> length = length;
        }
        void status() override
        {
            cout << name << ": Sss-sss" << endl;
        }
        void eat()
        {
            cout << name << " is eating a rat." << endl;
        }
        void lengthStatus()
        {
            cout << name << " is " << length << "meters long" << endl;
        }
};

int main()
{
    return 0;
}
