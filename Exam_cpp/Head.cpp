#include "Head.h"
#include "Body.h"
#include <conio.h>
#include "ConsoleEngineCore.h"

Head::Head()
{
    SetChar('H');
    SetPos({ 0,0 });

}

Head::~Head()
{
}

void Head::Tick(float _Time)
{
    char Select = (char)_getch();

    switch (Select)
    {
    case 'a':
        if (MovePos == int4::Right)
        {
            PastSame = true;
            break;
        }
        MovePos = int4::Left;
        break;
    case 'd':
        if (MovePos == int4::Left)
        {
            PastSame = true;
            break;
        }
        MovePos = int4::Right;
        break;
    case 'w':
        if (MovePos == int4::Down)
        {
            PastSame = true;
            break;
        }
        MovePos = int4::Up;
        break;
    case 's':
        if (MovePos == int4::Up)
        {
            PastSame = true;
            break;
        }
        MovePos = int4::Down;
        break;
    case 'q':
        ConsoleEngineCore::EngineOff();
        break;
    default:
        break;
    }
    if (!PastSame)
    {
        AddPos(MovePos);
    }
    PastSame = false;

}

void Head::MeetBody()
{

}