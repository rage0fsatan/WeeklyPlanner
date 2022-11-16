#include "Activity.h"

Activity::Activity()
{
    duration = 0;
    name = "";
}
    
Activity::Activity(float _duration, const char* _name)
{
    duration = _duration;
    name = _name;
};


void Activity::SetDuration(float _duration)
{
    duration = _duration;
};

float Activity::GetDuration()
{
    return duration;
};