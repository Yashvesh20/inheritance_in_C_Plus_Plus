# inheritance_in_C_Plus_Plus
# Aim: To study and implement Inheritance
# Software Required:
Visual Studio
# Theory:
Inheritance is a fundamental concept in OOP (Object Oriented Programming). It is the mechanism by which one class is allowed to inherit the features (fields and methods) of another class. Inheritance means creating new classes based on existing ones. 

Types of Inheritance in C++
1. Single Inheritance
In single inheritance, a sub-class is derived from only one super class. It inherits the properties and behavior of a single-parent class. Sometimes, it is also known as simple inheritance.

2. Multiple Inheritance
In Multiple inheritance, one class can have more than one superclass and inherit features from all parent classes.

3. Multilevel Inheritance
Multilevel inheritance in C++ means a class is derived from another derived class, forming a chain of inheritance.

4. Hierarchical Inheritance
In hierarchical inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class. For example, cars and buses both are vehicle.

<ins>Advantages of Inheritance in C++</ins>:
+ Code Reusability : Derived class can directly reuse data members and methods of its base class, avoiding code duplication.
+ Abstraction : Supports abstract classes (classes with pure virtual functions) that define a common interface, enforcing abstraction.
+ Class Hierarchy : You can build hierarchies (base → derived → further derived) to model real-world relationships.
+ Polymorphism : Fully supports runtime polymorphism through virtual functions, and also compile-time polymorphism via function overloading and templates.
# Implementation:
To demonstrate Inheritance in C++ the following codes have been implemented,
+ Single Inheritance
+ Multiple Inheritance
+ Multilevel Inheritance
+ Hierarchy Inheritance
+ Access Specifier in Inheritance (Protected)
# Algorithms:

Algorithm: Single Inheritance (Animal and Dog)

1. Start
2. Define a base class `Animal`:

   * Public member function `eat()` to display `"This animal eats other animals."`
3. Define a derived class `Lion` that publicly inherits `Animal`:

   Public member function `roar()` to display `"The Lion roars."`
4. In `main()`:
   1. Create an object `myLion` of class `Lion`.
   2. Call `myLion.eat()` to invoke the inherited function from `Animal`.
   3. Call `myLion.roar()` to invoke the function defined in `Lion`.
5. End

Algorithm: Multiple Inheritance (Car inherits Vehicle and Specs)

1. Start
2. Define base class `Vehicle`:

   * Public string `company` initialized as `"BMW"`.
   * Public member function `type()` to display `"S10"`.
3. Define base class `Specs`:
   * Public string `mileage` initialized as `"20 kmpl"`.
   * Public member function `colour()` to display `"Black"`.
4. Define derived class `Car` that publicly inherits `Vehicle` and `Specs`:
   * Public string `seater` initialized as `"4 seater"`.
5. In `main()`:
   1. Create an object `f2` of class `Car`.
   2. Call `f2.colour()` from `Specs`.
   3. Print `f2.company` from `Vehicle`.
   4. Call `f2.type()` from `Vehicle`.
   5. Print `f2.seater` and `f2.mileage` from `Car` and `Specs`.
6. End

Algorithm: Hierarchical Inheritance (Fruit → Apple/Banana/Cherry)

1. Start
2. Define base class `Vegetable`:

    Public string array `type[3]` containing `"Tomato"`, `"Carrot"`, `"Potato"`.
   Public member function `supplier()` to display `"Fresh Farms Ltd."`.
3. Define derived classes `Tomato`, `Carrot`, `Potato` that each publicly inherit `Fruit`:
   `Tomato` has public string `color = "Red"`.
    `Carrot` has public string `color = "Orange"`.
     `Potato` has public string `color = "Brown"`.
4. In `main()`:
   1. Create object `f1` of class `Tomato`.
      Call `f1.supplier()`.
        Print `f1.type[0]` and `f1.color`.
   2. Create object `f2` of class `Carrot`.

      Call `f2.supplier()`.
        Print `f2.type[1]` and `f2.color`.
   3. Create object `f3` of class `Potato`.

      Call `f3.supplier()`.
        Print `f3.type[2]` and `f3.color`.
5. End

Algorithm: Accessing Protected Members in Inheritance

1. Start
2. Define a base class `Parent`:
   `protected` integer `protectedValue`.
     Constructor initializes `protectedValue = 22`.
3. Define a derived class `Child` that publicly inherits `Parent`:

   Public member function `showProtected()` displays `protectedValue`.
4. In `main()`:
   1. Create object `obj` of class `Child`.
   2. Call `obj.showProtected()` to print the inherited `protectedValue`.
5. End


# Conclusion:
The above codes Demonstrates Inheritance an important OOP Concept of C++.
