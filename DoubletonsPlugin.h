#ifndef DOUBLETONSPLUGIN_H
#define DOUBLETONSPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class DoubletonsPlugin : public Plugin
{
public: 
 std::string toString() {return "Doubletons";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
