#include <iostream>
#include <vector>
using namespace std;

vector<string> datevect(int date){
    vector<string> dates={"0","0","0","0","0"};
    if (date > 0){
        if (date >= 60){
            if (date >= 3600){
                if (date >= 86400){
                    if (date >= 31536000){
                        dates[0]=(to_string(date / 31536000));
                        date %= 31536000;
                    }
                    dates[1] = (to_string(date / 86400));
                    date %= 86400;
                }
                dates[2]=(to_string(date / 3600));
                date %= 3600;
            }
            dates[3]=(to_string(date /60));
            date %= 60;
        }
        dates[4]=(to_string(date));
    }
    else {
        dates.push_back("now");
    }
    return dates;
}

string format_duration(int seconds){
    string output{};
    if (seconds == 0){
        return "now";
    }
    vector<string> datevector = datevect(seconds);
    vector<string> dateformat = {" year", " day"," hour"," minute"," second"};
    int sizetrack{0};
    for (int i=0; i<datevector.size();i++){
        if (datevector[i] != "0"){
            sizetrack ++;
        }
    }
    for (int i=0; i<datevector.size();i++){
        if (datevector[i] != "0"){
            output.append(datevector[i]);output.append(dateformat[i]);
            if (datevector[i] != "1"){
                output.append("s");
            }
            sizetrack--;
        }
        if (sizetrack == 1 && datevector[i] != "0"){
            output.append(" and ");
        }
        else if (sizetrack > 1 && datevector[i] != "0"){
            output.append(", ");
        }
    }
    return output;
}

int main(){
    int number = 0;
    cout << format_duration(number);
    return 0;
}