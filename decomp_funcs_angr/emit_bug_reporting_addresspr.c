extern unsigned int g_40f3c2;
extern unsigned int g_40f3ec;
extern unsigned int g_40f640;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40f3c2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40f3ec, 0x5));
    dcgettext(0x0, &g_40f640, 0x5);
}
