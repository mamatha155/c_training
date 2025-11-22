#include <stdio.h>
enum months
{
    jan = 1,
    feb, march, april, may, june, july, aug, sept, oct, nov, dec
};
void main()
{
    enum months m;
    m=feb;
    char *season;
    switch(m)
    {
        case dec: case jan: case feb:
        season = "winter";
        break;
        case march: case april: case may:
        season = "summer";
        break;
        case june: case july: case aug:
        season = "monsoon";
        break;
        case sept: case oct: case nov:
        season = "spring";
        break;
    }
    printf("%s",season);

}