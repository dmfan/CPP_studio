/* STL 

list??

????????????SensorModule *???list???????????????????????????????
?????list?????front()?????????back()???????????????????????
?????????????set_list(),show_list()????????
???????set_list()????????????SensorModule?????????????????????SensorModule??????????
*/


#include <iostream> // For standard streams
#include <iomanip>  // For stream manipulators
#include <algorithm> // For copy()
#include <iterator> // std::istream_iterator is declared in the <iterator> header file
#include <string>
#include <list>


class SensorModule {
    public:
    std::string sensorName;
    uint16_t sensorID;
    uint16_t startAddr;
    uint8_t  length;

    void saysay(){
        std::cout << sensorName << std::endl;
    }
};


std::list<SensorModule *> sensorsList; 
std::list<std::string> stringList;


void set_list()
{
    SensorModule newSensorA,newSensorB,newSensorC,newSensorD,newSensorE;

    newSensorA.sensorName="a";
    newSensorA.sensorID=1;
    newSensorA.length=2;
    newSensorA.startAddr=3;

    newSensorE.sensorName="a";
    newSensorE.sensorID=1;
    newSensorE.length=2;
    newSensorE.startAddr=3;

    newSensorB.sensorName="b";
    newSensorB.sensorID=4;
    newSensorB.length=5;
    newSensorB.startAddr=6;

    newSensorC.sensorName="c";
    // newSensorC.sensorID=7;
    newSensorC.length=8;
    newSensorC.startAddr=9;

    newSensorD.sensorName="d";
    newSensorD.sensorID=11;
    newSensorD.length=22;
    newSensorD.startAddr=33;

    
    sensorsList.push_back(&newSensorA);
    sensorsList.push_back(&newSensorB);
    sensorsList.push_back(&newSensorC);
    sensorsList.push_back(&newSensorD);

}
void show_list()
{
    // for(const auto name : sensorsList)
    // std::cout << name->sensorName << std::endl;

    SensorModule *a1;
    SensorModule *a2;

    a1 = sensorsList.front();                   // ??
    std::cout << a1->sensorName << std::endl;
    a2 = sensorsList.back();
    std::cout << a2->sensorName << std::endl;

}

int main()
{
    // SensorModule newSensorA,newSensorB,newSensorC,newSensorD,newSensorE;
    
    // SensorModule *a1;
    // SensorModule *a2;

    // newSensorA.sensorName="a";
    // newSensorA.sensorID=1;
    // newSensorA.length=2;
    // newSensorA.startAddr=3;

    // newSensorE.sensorName="a";
    // newSensorE.sensorID=1;
    // newSensorE.length=2;
    // newSensorE.startAddr=3;

    // newSensorB.sensorName="b";
    // newSensorB.sensorID=4;
    // newSensorB.length=5;
    // newSensorB.startAddr=6;

    // newSensorC.sensorName="c";
    // // newSensorC.sensorID=7;
    // newSensorC.length=8;
    // newSensorC.startAddr=9;

    // newSensorD.sensorName="d";
    // newSensorD.sensorID=11;
    // newSensorD.length=22;
    // newSensorD.startAddr=33;

    
    // sensorsList.push_back(&newSensorA);
    // sensorsList.push_back(&newSensorB);
    // sensorsList.push_back(&newSensorC);
    // sensorsList.push_back(&newSensorD);

    // for(const auto name : sensorsList)
    // std::cout << name->sensorName << std::endl;

    // a1 = sensorsList.front();
    // std::cout << a1->sensorName << std::endl;
    // a2 = sensorsList.back();
    // std::cout << a2->sensorName << std::endl;

    set_list();
    show_list();

    printf("end!");
    printf("end!");

}
