extern unsigned int g_414004;
extern unsigned int g_414016;
extern char parse_datetime_flags;
extern <missing-type> rfc_email_format;
extern unsigned long long stdout[7];

int show_date()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r13
    char *v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned long v9;  // rsi

    v0 = v9;
    v1 = v8;
    if (((long long)(parse_datetime_flags & 1)) != 0)
    {
        v12 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_414004, 0x5));
    }
    if (localtime_rz() != 0)
    {
        if (v10 != "%a, %d %b %Y %H:%M:%S %z")
        {
            fprintftime();
        }
        else
        {
            setlocale();
            fprintftime();
            setlocale();
        }
        v6 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v6) = 10;
            v7 = 1;
            return v7;
        }
        __overflow();
        v7 = 1;
        return v7;
    }
    imaxtostr();
    v11 = (long long)quote();
    error(0x0, 0x0, dcgettext(0x0, &g_414016, 0x5));
    v7 = 0;
    return v7;
}
