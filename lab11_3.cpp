#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    int count = 0;
    float sum = 0,Stdv,mean,sum1=0,sum2=0;
    ifstream source("score.txt");
    string textline;
    while(getline(source, textline)){
        sum = atof(textline.c_str());
        sum2 += atof(textline.c_str());
        sum1 += pow(sum,2);
        count++;
    }


    mean = sum/count;
    Stdv = sqrt(sum1/count-pow(mean,2));
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = " << Stdv;
     source.close();
     return 0;
}





