#include <iostream>
#include <string>
#include <vector>
#include <cmath> 
using namespace std;

@interface Student
{
	string name;
	string major;
	float age;


};




class Person : NSObject, NSCoding {
    var name : String
    var major : String
    var age : Int

        study(name : String, major:String,age : Int,time:Float) {
        count << "name" << name << endl;
        count << "time" << time << endl;
    }

    //±àÂë
    func encode(with aCoder : NSCoder) {
        aCoder.encode(name, forKey: "name")
            aCoder.encode(age, forKey: "age")
    }

    //½âÂë
    required init ? (coder aDecoder : NSCoder) {
        self.name = aDecoder.decodeObject(forKey: "name") as!String
            self.age = aDecoder.decodeInteger(forKey: "age")
    }
}

