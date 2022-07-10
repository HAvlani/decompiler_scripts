extern unsigned int g_4173ca;
extern unsigned int g_4173f4;
extern unsigned int g_417648;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_4173ca, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_4173f4, 0x5));
    dcgettext(0x0, &g_417648, 0x5);
}
