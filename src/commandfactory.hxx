#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H

#include <map>
#include <string>

#include <stdio.h>
#include <unistd.h>

#include "appconfig.hxx"
#include "filehelper.hxx"
#include "command.hxx"

#include "commands/initrepo.hxx"
#include "commands/status.hxx"
#include "commands/addsecret.hxx"
#include "commands/removesecret.hxx"
#include "commands/serverfetch.hxx"
#include "commands/serverpush.hxx"
#include "commands/serversync.hxx"

class CommandFactory {
	public:
	static void create(std::string command_string, Command **command);
};

#endif
