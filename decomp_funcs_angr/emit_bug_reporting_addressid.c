extern unsigned int g_409065;
extern unsigned int g_40908f;
extern unsigned int g_4092e0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_409065, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40908f, 0x5));
    dcgettext(0x0, &g_4092e0, 0x5);
}
