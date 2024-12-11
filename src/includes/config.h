#ifndef CONFIG_H
#define CONFIG_H
class Config
{
    char _author_name[255];
    char _copyright[255];
    public:
    const char*getAuthorName();
    const char*getCopyrightText();
};
#endif