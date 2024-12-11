#ifndef SETTING_H
#define SETTING_H
class Setting
{
    char _project_name[255];
    char _date[255];
    enum class BuildConfig
    {
        Debug,
        Release
    };
    enum class Compiler
    {
        MINGW,
        CLANG
    };
    enum class Generator
    {
        Make,
        Ninja,
        VisualStudio
    };
    BuildConfig _build_config=BuildConfig::Debug;
    Compiler _compiler=Compiler::CLANG;
    Generator _generator=Generator::Ninja;

};
#endif