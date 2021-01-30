#include <iostream>
#include <vector>

using  namespace std;

struct car
{
    string id;
    string color;
    int max_speed;
    string brand;

    car(string id, string brand, string color, int max_speed){
        this->id = id;
        this->brand = brand;
        this->color = color;
        this->max_speed = max_speed;
    }

    void print(){
        cout << this->id << " " << color << " " << max_speed << " " << brand << endl;
    }

    bool operator < (const car other) const {
        if(this->max_speed < other.max_speed) return  true;
        if(this->max_speed == other.max_speed){
            if(this->id < other.id) return  true;
        }
        return  false;
    }

};


int main() {

    car car1("1","volvo","red",300);
    car car2("2","bmw","yellow",500);
    car car3("3","camry","black",250);
    car car4("4","reno","blue",250);

    vector<car> cars({car1, car2, car3, car4});

    sort(cars.begin(), cars.end());

    for(int i = 0; i < cars.size(); ++i){
        cars[i].print();
    }

    return 0;
}
