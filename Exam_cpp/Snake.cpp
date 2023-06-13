// Snake.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "ConsoleEngineCore.h"
#include "Head.h"
#include "Body.h"
#include "ConsoleScreen.h"
int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    static int4 Screen_S = int4{ 6,6 };
    ConsoleEngineCore::CreateObject<Head>();
    ConsoleEngineCore::CreateObject<Body>();
    
    // 이 함수만은 무조건 존재해야 합니다.
    ConsoleEngineCore::EngineStart(Screen_S);
}
