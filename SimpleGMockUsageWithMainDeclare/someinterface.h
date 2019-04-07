#pragma once

class IResource
{
public:
	virtual ~IResource()
	{
	}

	virtual int GetInteger() const { return 0; }

	virtual bool TestResource() { return true; }
};
