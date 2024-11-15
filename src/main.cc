#define RELEASE
#include<app.h>
// 2.0
#ifndef RELEASE
#include <iostream>
#include <string.h>
#include <filesystem>
#include<ccli.hpp>

void test() {
    App app;
    app.addToPathWin();    
};
#endif // !RELEASE

extern int argCount{};

int main(int argc, char *argv[])
{
#ifndef RELEASE
    test();
#else
    if (argc < 2)
        return CLI::showHelp();
    argCount = argc;
    return CLI::createApp((const char **)argv, argc);
#endif
};
