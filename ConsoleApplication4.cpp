#include "clsInputValidate.h"

int main()

{


    clsInputValidate::Srand();
    cout << clsInputValidate::RandomNumber(1, 10) << "\n\n";
    cout << clsInputValidate::GetRandomCharacter(clsUtility::CapitalLetter) << "\n\n";
    cout << clsInputValidate::GenerateWord(clsUtility::Digit, 10) << "\n\n";
    cout << clsInputValidate::GenerateKey(clsUtility::CapitalLetter) << "\n\n";

    clsInputValidate::GenerateKeys(5, clsUtility::Digit);

    cout << "\n\n";

    clsInputValidate::Swap1(1, 10);
    cout << "\n\n";
    clsInputValidate::Swap2(5.555, 1.111);
    cout << "\n\n";
    clsInputValidate::Swap3('a', 'b');
    cout << "\n\n";
    clsInputValidate::Swap4(true, false);
    cout << "\n\n";
    clsInputValidate::Swap5("Name", "Surname");
    cout << "\n\n";


    cout << clsInputValidate::Tabs(2) << "ash" << "\n\n";




    string TextAfterEncryption = clsInputValidate::EncryptText("guess", 5);

    cout << "After Encryption: " << TextAfterEncryption << "\n";
    cout << "After Decryption: " << clsInputValidate::DecryptText(TextAfterEncryption, 5) << "\n\n";


    



    cout << clsInputValidate::IsNumberbetween(5, 1, 10) << "\n\n";
    cout << clsInputValidate::IsNumberbetween(5, 1, 10) << "\n\n";
    cout << clsInputValidate::IsNumberbetween(5.5555, 1.3333, 10.8888) << "\n\n";
    cout << clsInputValidate::IsNumberbetween(5.5, 1.3, 10.8) << "\n\n";

    cout << clsInputValidate::IsDatebetween(clsDate(01,01,2001), clsDate(01, 01, 2000), clsDate(01, 01, 2002)) << "\n\n";
   

    
    /* 
    cout << "\nPlease Enter a Number to check valid or not:\n";
    int x = clsInputValidate::ReadIntNumber("Invalid Number, Enter again\n");
    cout << "x value = " << x << "exist";
    
    cout << "\nPlease Enter a Number between [1] -> [10]:\n";
    int y = clsInputValidate::ReadIntNumberBetween(1, 10);
    cout << "y value = " << y << "exist";


    cout << "\nPlease Enter a Number to check valid or not:\n";
    int z = clsInputValidate::ReadDblNumber("Invalid Number, Enter again\n");
    cout << "z value = " << z << "exist";


    cout << "\nPlease Enter a Number between [1.1000] -> [10.0000]:\n";
    int g = clsInputValidate::ReadDblNumberBetween(1.0000, 10.0000);
    cout << "g value = " << g << "exist";
    
    */




    cout <<  clsInputValidate::IsValideDate(clsDate(15,01,2000)) << "\n\n";

    cout <<  clsInputValidate::DateToString(clsDate(05, 10, 2010)) << "\n\n";

    cout <<  clsInputValidate::isleapYear(2032) << "\n\n";


    cout << "Year:\n";

    cout <<  clsInputValidate::NumberOfDaysInYear(2032) << " Days" << "\n\n";

    cout << clsInputValidate::NumberOfHoursInYear(2026) << " Hours" << "\n\n";

    cout << clsInputValidate::NumberOfMinutesInYear(2025) << " Minutes" << "\n\n";

    cout << clsInputValidate::NumberOfSecondsInYear(2025) << " Seconds" << "\n\n";

    
    
    cout << "Month/Year:\n";
    cout << clsInputValidate::NumberOfDaysInMonth(12, 2025) << " Days" << "\n\n";
    cout << clsInputValidate::NumberOfHoursInMonth(12, 2025) << " Hours" << "\n\n";
    cout << clsInputValidate::NumberOfMinutesInMonth(12, 2025) << " Minutes" << "\n\n";
    cout << clsInputValidate::NumberOfSecondsInMonth(12, 2025) << " Seconds" << "\n\n";




    cout << clsInputValidate::DayShortName(0) << "\n\n";
    cout << clsInputValidate::DayShortName(01, 01, 2000) << "\n\n";
    cout << clsInputValidate::MonthShortName(10) << "\n\n";  
    

    clsInputValidate::PrintMonthCalendar(11,2000);
    cout << "\n\n";

    clsInputValidate::PrintYearCalendar(2026);
    cout << "\n\n";


  
    cout << clsInputValidate::IsDate1BeforeDate2(clsDate(01,10,2000), clsDate(01,11,2000)) << "\n\n";//true
    cout << clsInputValidate::IsDate1EqualDate2(clsDate(06, 10, 2000), clsDate(06, 10, 2000)) << "\n\n";//true
    cout << clsInputValidate::IsDate1AfterDate2(clsDate(06, 10, 2000), clsDate(06, 10, 2010)) << "\n\n";//false



    cout << clsInputValidate::IsLastDayInMonth(clsDate(31, 12, 2000)) << "\n\n";
    cout << clsInputValidate::IsLastMonthInYear(01,11,2000) << "\n\n";


    cout << clsInputValidate::GetDifferenceInDays(clsDate(01, 01, 2020), clsDate(01, 01, 2000), true) << "\n\n";

    cout << clsInputValidate::CalculateAgeInYears(clsDate(01, 01, 2001)) << "\n\n";
    cout << clsInputValidate::CalculateAgeInMonths(clsDate(01, 01, 2001)) << "\n\n";
    cout << clsInputValidate::CalculateAgeInDays(clsDate(06,10,2000)) << "\n\n";







    clsDate Datee = clsInputValidate::IncreaseDateByOneDay(clsDate(01, 01, 2026));
    cout << clsInputValidate::DateToString(Datee) << "\n\n";

   clsDate Date = clsInputValidate::IncreaseDatebyOneWeek(clsDate(01,01,2026));
   cout << clsInputValidate::DateToString(Date) << "\n\n";

   clsDate Date1 = clsInputValidate::IncreaseDatebyOneWeek(clsDate(01,01,2026));
   cout << clsInputValidate::DateToString(Date1) << "\n\n";

   clsDate Date2 = clsInputValidate::IncreaseDatebyOneWeek(clsDate(01,01,2026));
   cout << clsInputValidate::DateToString(Date2) << "\n\n";

   clsDate Date3 = clsInputValidate::IncreaseDateByXWeek(3, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date3) << "\n\n";

   clsDate Date4 = clsInputValidate::IncreaseDateByOneMonth(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date4) << "\n\n";

   clsDate Date5 = clsInputValidate::IncreaseDateByXDays(20, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date5) << "\n\n";

   clsDate Date6 = clsInputValidate::IncreaseDateByXMonths(4, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date6) << "\n\n";

   clsDate Date7 = clsInputValidate::IncreaseDateByOneYear(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date7) << "\n\n";

   clsDate Date8 = clsInputValidate::IncreaseDateByXYears(2, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date8) << "\n\n";

   clsDate Date9 = clsInputValidate::IncreaseDateByOneDecade(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date9) << "\n\n";

   clsDate Date10 = clsInputValidate::IncreaseDateByXDecades(2, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date10) << "\n\n";

   clsDate Date11 = clsInputValidate::IncreaseDateByOneCentury(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date11) << "\n\n";

   clsDate Date12 = clsInputValidate::IncreaseDateByOneMillennium(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date12) << "\n\n";







   cout << "\n\n\n";








   clsDate Date0 = clsInputValidate::DecreaseDateByOneDay(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date0) << "\n\n";

   clsDate Date13 = clsInputValidate::DecreaseDatebyOneWeek(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date13) << "\n\n";

   clsDate Date14 = clsInputValidate::DecreaseDateByXWeek(3, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date14) << "\n\n";

   clsDate Date15 = clsInputValidate::DecreaseDateByOneMonth(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date15) << "\n\n";

   clsDate Date16 = clsInputValidate::DecreaseDateByXDays(20, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date16) << "\n\n";

   clsDate Date17 = clsInputValidate::DecreaseDateByXMonths(4, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date17) << "\n\n";

   clsDate Date18 = clsInputValidate::DecreaseDateByOneYear(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date18) << "\n\n";

   clsDate Date19 = clsInputValidate::DecreaseDateByXYears(2, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date19) << "\n\n";

   clsDate Date20 = clsInputValidate::DecreaseDateByOneDecade(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date20) << "\n\n";

   clsDate Date21 = clsInputValidate::DecreaseDateByXDecades(2, clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date21) << "\n\n";

   clsDate Date22 = clsInputValidate::DecreaseDateByOneCentury(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date22) << "\n\n";

   clsDate Date23 = clsInputValidate::DecreaseDateByOneMillennium(clsDate(01, 01, 2026));
   cout << clsInputValidate::DateToString(Date23) << "\n\n";




   cout << "\n\n\n";


   cout << clsInputValidate::IsEndOfWeek(clsDate(03,01,2026)) << "\n\n";

   cout << clsInputValidate::IsWeekend(clsDate(03,01,2026)) << "\n\n";

   cout << clsInputValidate::IsBusinessDay(clsDate(04, 01, 2026)) << "\n\n";

   cout << clsInputValidate::DayUntilTheEndOfWeek(clsDate(04, 01, 2026)) << "\n\n";

   cout << clsInputValidate::DaysUntilTheEndOfMonth(clsDate(01,01,2026)) << "\n\n";

   cout << clsInputValidate::DaysUntilTheEndOfYear(clsDate(01, 01, 2026)) << "\n\n";

   cout <<  clsInputValidate::CalculateBusinessDaysBetween2Dates(clsDate(01, 01, 2026), clsDate(01, 02, 2026)) << "\n\n";

   cout << clsInputValidate::CalculateVacationDays(clsDate(01, 01, 2026), clsDate(01, 02, 2026)) << "\n\n";




   clsDate VactionReturnDate = clsInputValidate::CalculateVacationReturnDate(clsDate(01, 01, 2026), 27);

   cout << clsInputValidate::DateToString(VactionReturnDate) << "\n\n";

   
   
   
   
   cout <<  clsInputValidate::Compare2Dates(clsDate(01,01,2026), clsDate(01,02,2026));




    system("pause>0");

    return 0;
}