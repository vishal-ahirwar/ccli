#include<setting.h>
#include<cstring>

Setting::Setting(const char *project_name, BuildConfig config, Compiler compiler, Generator generator)
{
    strncpy(_project_name,project_name,sizeof(_project_name));
    _build_config=config;
    _compiler=compiler;
    _generator=generator;    
};


