#include "Body.h"
#include <list>
#include "ConsoleEngineCore.h"
#include "ConsoleScreen.h"
#include "Screen_S.h"
Body::Body()
{

	srand(time(NULL));
	SetChar('o');
	int4 Screen_Size = ConsoleEngineCore::Screen.ScreenScale();
	std::list<ConsoleObject*> Obj = ConsoleEngineCore::GetObjects();
	std::list<ConsoleObject*>::iterator Start = Obj.begin();
	std::list<ConsoleObject*>::iterator End = Obj.end();
	int4 BodyPos = { rand()%Screen_S.X, rand()%Screen_S.Y };
	bool same = true;

	while (same)
		for (; Start != End; ++Start)
		{
			ConsoleObject* Object = (*Start);
			int4 objpos = Object->GetPos();
			if (BodyPos == objpos)
			{
				BodyPos = { rand()%Screen_S.X, rand()%Screen_S.Y };
				break;
			}
		}
		same = false;
	}
	SetPos(BodyPos);
}

Body::~Body()
{
}
