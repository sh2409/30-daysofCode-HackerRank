# Day 4: Class vs Instance

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge<0)
        {
            printf("Age is not valid, setting age to 0.\n");
            age=0;
        }
        else
        {
            age=initialAge;
        }


    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 

        if(age<13)
        {
            printf("You are young.\n");
        }
        else if(age>=13 && age<18)
        {
            printf("You are a teenager.\n");
        }
        else
        {
            printf("You are old.\n");
        }
        

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;

    }
