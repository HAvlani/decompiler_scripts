extern unsigned int g_40a202;
extern unsigned int g_40a22c;
extern unsigned int g_40a480;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40a202, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40a22c, 0x5));
    dcgettext(0x0, &g_40a480, 0x5);
}