#include <iostream>
#include <vector>
using namespace std;

vector<string> datevect(int date){
    vector<string> dates;
    if (date > 0){
        if (date >= 60){
            if (date >= 3600){
                if (date >= 86400){
                    if (date >= 31536000){
                        dates.push_back(to_string(date / 31536000));
                        date %= 31536000;
                    }
                    dates.push_back(to_string(date / 86400));
                    date %= 86400;
                }
                dates.push_back(to_string(date / 3600));
                date %= 3600;
            }
            dates.push_back(to_string(date /60));
            date %= 60;
        }
        dates.push_back(to_string(date));
    }
    else {
        dates.push_back("now");
    }
    return dates;
}
string datatostring(int date){
    string output{};
    vector<string> datevector = datevect(date);
    vector<string> dateformat = {" second"," minute"," hour"," day"," year"};
    int sizetrack{0};
    for (int i=0; i<datevector.size();i++){
        if (stoi(datevector[i]) != 0){
            sizetrack++;
        }
    }
    for (int i=0; i<datevector.size();i++){
        if (i > datevector.size()-2 && sizetrack != 1){
            output.append(" and ");
        }
        else if ( (i<= datevector.size()-2) && (i != 0) && (stoi(datevector[i]) != 0)){
            output.append(", ");
        }
        if (stoi(datevector[i]) == 0){ 
            continue;
        }
        output.append(datevector[i]);
        output.append(dateformat[datevector.size()-i-1]);
        if (stoi(datevector[i]) != 1){ 
            output.append("s");
        }
        
    }
    return output;
}

int main(){
    cout << datatostring(720000);
    return 0;
}