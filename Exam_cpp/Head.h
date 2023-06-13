#pragma once
#include "Part.h"

// Ό³Έν :
class Head : public Part
{
public:
	// constrcuter destructer
	Head();
	~Head();

	// delete Function
	Head(const Head& _Other) = delete;
	Head(Head&& _Other) noexcept = delete;
	Head& operator=(const Head& _Other) = delete;
	Head& operator=(Head&& _Other) noexcept = delete;
	bool check_body = false;
	void MeetBody();
protected:
	void Tick(float _Time);

private:
	int4 MovePos = { 0 , 0 };
	bool PastSame = false;
};