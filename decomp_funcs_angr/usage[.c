extern unsigned int g_40a111;
extern unsigned int g_40a11f;
extern unsigned int g_40a148;
extern unsigned int g_40a2a0;
extern unsigned int g_40a2c8;
extern unsigned int g_40a320;
extern unsigned int g_40a358;
extern unsigned int g_40a388;
extern unsigned int g_40a3c8;
extern unsigned int g_40a440;
extern unsigned int g_40a540;
extern unsigned int g_40a640;
extern unsigned int g_40a7b8;
extern unsigned int g_40a878;
extern unsigned int g_40a928;
extern unsigned int g_40aa40;
extern unsigned int g_40aba8;
extern unsigned int g_40acc8;
extern unsigned int g_40adb0;
extern unsigned int g_40ae30;
extern unsigned int g_40aeb8;
extern unsigned int g_40afa0;
extern unsigned int g_40afe8;
extern struct_0 stdout;

int usage()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned int v23;  // ebp
    unsigned int|char * v24;  // edi
    unsigned long long v25;  // r12
    unsigned long v26;  // r13

    v1 = v26;
    v0 = dcgettext(0x0, &g_40a111, 0x5);
    v23 = v24;
    if (v24 != 0)
    {
        dcgettext(0x0, &g_40a2a0, 0x5);
        __fprintf_chk();
        exit(v23); /* do not return */
    }
    fputs_unlocked(dcgettext(0x0, &g_40a2c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a320, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a358, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a388, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a3c8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a440, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a540, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a640, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a7b8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a878, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40a928, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40aa40, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40aba8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40acc8, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40adb0, 0x5), stdout);
    fputs_unlocked(dcgettext(0x0, &g_40ae30, 0x5), stdout);
    v25 = dcgettext(0x0, &g_40a111, 0x5);
    __printf_chk(0x1, dcgettext(0x0, &g_40aeb8, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40a11f, 0x5));
    v24 = setlocale();
    if (!(v24 != 0))
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a148, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40afe8, 0x5));
        exit(v23); /* do not return */
    }
    else if (strncmp(v24, "en_", 0x3) == 0)
    {
        __printf_chk(0x1, dcgettext(0x0, &g_40a148, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40afe8, 0x5));
        exit(v23); /* do not return */
    }
    else
    {
        fputs_unlocked(dcgettext(0x0, &g_40afa0, 0x5), stdout);
        __printf_chk(0x1, dcgettext(0x0, &g_40a148, 0x5));
        __printf_chk(0x1, dcgettext(0x0, &g_40afe8, 0x5));
        exit(v23); /* do not return */
    }
}
