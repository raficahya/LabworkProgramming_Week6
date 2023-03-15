//
// Created by ASUS on 10/24/2022.
//

#ifndef WEEK_6_NO1_H
#define WEEK_6_NO1_H


class no1 {

};


#endif //WEEK_6_NO1_H

#include <iostream>

using namespace std;

struct monthData{
    int monthNum;
    string monthName;
};

monthData month[12];

struct zodiacData{
    string zodiacName;
    int startDate;
    int endDate;
    int startMonth;
    int endMonth;
};

zodiacData zodiac[12];

int main()
{
    month[1].monthNum = 1;
    month[1].monthName = "January";

    month[2].monthNum = 2;
    month[2].monthName = "February";

    month[3].monthNum = 3;
    month[3].monthName = "March";

    month[4].monthNum = 4;
    month[4].monthName = "April";

    month[5].monthNum = 5;
    month[5].monthName = "May";

    month[6].monthNum = 6;
    month[6].monthName = "June";

    month[7].monthNum = 7;
    month[7].monthName = "July";

    month[8].monthNum = 8;
    month[8].monthName = "August";

    month[9].monthNum = 9;
    month[9].monthName = "September";

    month[10].monthNum = 10;
    month[10].monthName = "October";

    month[11].monthNum = 11;
    month[11].monthName = "November";

    month[12].monthNum = 12;
    month[12].monthName = "December";

    zodiac[1].zodiacName = "Aries";
    zodiac[1].startDate = 21;
    zodiac[1].startMonth = 3;
    zodiac[1].endDate = 19;
    zodiac[1].endMonth = 4;

    zodiac[2].zodiacName = "Taurus";
    zodiac[2].startDate = 20;
    zodiac[2].startMonth = 4;
    zodiac[2].endDate = 20;
    zodiac[2].endMonth = 5;

    zodiac[3].zodiacName = "Gemini";
    zodiac[3].startDate = 21;
    zodiac[3].startMonth = 5;
    zodiac[3].endDate = 20;
    zodiac[3].endMonth = 6;

    zodiac[4].zodiacName = "Cancer";
    zodiac[4].startDate = 21;
    zodiac[4].startMonth = 6;
    zodiac[4].endDate = 22;
    zodiac[4].endMonth = 7;

    zodiac[5].zodiacName = "Leo";
    zodiac[5].startDate = 23;
    zodiac[5].startMonth = 7;
    zodiac[5].endDate = 22;
    zodiac[5].endMonth = 8;

    zodiac[6].zodiacName = "Virgo";
    zodiac[6].startDate = 23;
    zodiac[6].startMonth = 8;
    zodiac[6].endDate = 22;
    zodiac[6].endMonth = 9;

    zodiac[7].zodiacName = "Libra";
    zodiac[7].startDate = 23;
    zodiac[7].startMonth = 9;
    zodiac[7].endDate = 22;
    zodiac[7].endMonth = 10;

    zodiac[8].zodiacName = "Scorpio";
    zodiac[8].startDate = 23;
    zodiac[8].startMonth = 10;
    zodiac[8].endDate = 21;
    zodiac[8].endMonth = 11;

    zodiac[9].zodiacName = "Sagittarius";
    zodiac[9].startDate = 22;
    zodiac[9].startMonth = 11;
    zodiac[9].endDate = 21;
    zodiac[9].endMonth = 12;

    zodiac[10].zodiacName = "Capricorn";
    zodiac[10].startDate = 22;
    zodiac[10].startMonth = 12;
    zodiac[10].endDate = 19;
    zodiac[10].endMonth = 1;

    zodiac[11].zodiacName = "Aquarius";
    zodiac[11].startDate = 20;
    zodiac[11].startMonth = 1;
    zodiac[11].endDate = 18;
    zodiac[11].endMonth = 2;

    zodiac[12].zodiacName = "Pisces";
    zodiac[12].startDate = 19;
    zodiac[12].startMonth = 2;
    zodiac[12].endDate = 20;
    zodiac[12].endMonth = 3;

    int birthDate;
    int birthMonth;
    string birthMonthName;

    cout << "Insert birth date!";
    cin >> birthDate;
    cout << "Insert birth month!";
    cin >> birthMonthName;

    for (int i=1; i<=12; i++){
        if (birthMonthName == month[i].monthName){
            birthMonth = month[i].monthNum;
            break;
        }
    }

    for (int i=1; i<=12; i++){
        if ( ( (birthDate >= zodiac[i].startDate) && (birthMonth == zodiac[i].startMonth) ) || ( (birthDate <= zodiac[i].endDate) && (birthMonth == zodiac[i].endMonth) ) ){
            cout << birthDate << " " << birthMonthName << " zodiac is " << zodiac[i].zodiacName;
            break;
        }
    }

    return 0;
}
