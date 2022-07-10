extern unsigned int g_40aca2;
extern unsigned int g_40accc;
extern unsigned int g_40af20;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40aca2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40accc, 0x5));
    dcgettext(0x0, &g_40af20, 0x5);
}
