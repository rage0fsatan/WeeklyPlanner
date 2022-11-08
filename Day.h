

class Day
{
    const char* DayName;
    float hours;
    int minutes;
    float clock;
    
    

    Day();


    public:

    void CreateSpace();

    void GenerateDay();



    //SetMethods
    void SetName(const char* _DayName);
    void SetDay(int day_number, Day _day);
    void SetDay(const char* day_name, Day _day);
    //GetMethods
    Day GetDay(int day_number);
    Day GetDay(const char* _DayName);

    //AddFunctions
    void AddActivities();

};