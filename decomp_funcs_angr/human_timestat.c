extern unsigned int g_4115f4;
extern unsigned int str.7646;
extern struct_0 tz.7647;

int human_time()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v5;  // rsi
    unsigned long v6;  // rdi

    v0 = v6;
    v1 = v5;
    if (tz.7647 == 0)
    {
        getenv("TZ");
        tz.7647 = (long long)tzalloc();
    }
    if (localtime_rz() != 0)
    {
        nstrftime();
        return &str.7646;
    }
    __sprintf_chk(&str.7646, 0x1, 0x3d, &g_4115f4, imaxtostr(), ((int)v5));
    return &str.7646;
}
