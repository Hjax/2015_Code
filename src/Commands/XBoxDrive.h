#ifndef XBoxDrive_H
#define XBoxDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

class XBoxDrive: public CommandBase
{
private:
public:
	XBoxDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif