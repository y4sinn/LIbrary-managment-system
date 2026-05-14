// #include <iostream>
// using namespace std;

// class Car{
//    public:
//    string brand;
//    string color;
//    int price;

  
  
//      Car(){
//       brand = "AUDI";
//       color = "BLACK";
//       price = 9000;
//                          cout << "CONSTRUCTOR CALLED" << endl;

//      }

//      ~Car(){
//       cout << "destructor called" << endl;
//      }


//     void display(){
//       cout << "BRAND: " << brand << endl;
//       cout << "COLOR: " << color << endl;
//       cout << "PRICE: " << price << endl;
      
//     }
//   };
//     int main(){
//       Car c1;

//        c1.display();
//     }
    
                                                                 //USER INPUT!!
                                                                 
  // #include <iostream>
  // using namespace std;
  
  //  class Cars{
  //  public:
     
  //     string brand;
  //     string color;
  //     int model;
  //     int price;

  //     void input(){
  //       cout << "ENTER CAR BRAND:" << endl;
  //         cin >> brand;

  //       cout << "ENTER CAR COLOR:" << endl;
  //         cin >> color;

  //         cout << "ENTER CAR MODEL:" << endl;
  //          cin >> model;

  //       cout << "ENTER CAR PRICE:" << endl;
  //         cin >> price;
  //   }

  //   void display(){
  //     cout << "BRAND: " << brand << endl;
  //     cout << "COLOR: " << color << endl;
  //     cout << "MODEL: " << model << endl;
  //     cout << "PRICE: " << price << endl;
  //   }
    
  //  };

  //  int main(){

  //   Cars c1, c2;
    

  //    c1.input();

  //     cout << endl;
    
  //    c2.input();

  //    cout << endl;

  //    cout << "=============CAR SECTION 1=============" << endl;
  //     c1.display();

  //     cout << "=============CAR SECTION 2=============" << endl;

  //     c2.display();
       
  //     return 0;

  //  }
     
   // ==============================================================STUDENT MANAGMENT SYSTEM=======================================================================================


  //  #include <iostream>
  //  using namespace std;
    
  //    class Student{
  //     public: 
  //     string name;
  //     string parentage;
  //     string course;
  //     int rollno;
  //     string address;
      
  //        void input(){
  //         cout << "ENTER STUDENT NAME: " << endl;
  //           cin >> name;

  //         cout  << "ENTER PARENTAGE: " << endl;
  //           cin >> parentage;
            
  //         cout << "ENTER COURSE: " << endl;
  //           cin >> course;
            
  //         cout << "ENTER ROLL NO.: " << endl;
  //           cin >> rollno;

  //         cout << "ENTER ADDRESS: " << endl;
  //           cin >> address;

  //        }

  //        void display(){
  //         cout << "NAME: " << name << endl;
  //         cout << "PARENTAGE: " << parentage << endl;
  //         cout << "COURSE: " << course << endl;
  //         cout << "ROLL NO.: " << rollno << endl;
  //         cout << "ADDRESS: " << address << endl;

  //        }
  //    };
  //      int main(){
          
  //       Student c1, c2, c3;
            
  //       c1.input();
  //        cout << endl;

  //         c2.input();
  //          cout << endl;

  //         c3.input();
  //          cout << endl;
           
  //                         cout << "==================STUDENT 1===========================" << endl;
         
  //        c1.display();
          
  //                     cout << "==================STUDENT 2===========================" << endl;

  //        c2.display();

  //                         cout << "==================STUDENT 3===========================" << endl;  
                 
  //        c3.display();
         
  //        return 0;
  
   #include <iostream>
using namespace std;

class Student {

public:

    string name;
    int age;

    void input() {

        cout << "ENTER NAME: ";
        cin >> name;

        cout << "ENTER AGE: ";
        cin >> age;
    }

    void display() {

        cout << "NAME: " << name << endl;
        cout << "AGE: " << age << endl;
    }
};

int main() {

    Student s[2];

    for(int i = 0; i < 2; i++) {

        cout << "ENTER DATA OF STUDENT " << i + 1 << endl;

        s[i].input();

        cout << endl;
    }

    for(int i = 0; i < 2; i++) {

        cout << "===== STUDENT " << i + 1 << " =====" << endl;

        s[i].display();

        cout << endl;
    }

    return 0;
}