extern unsigned int g_40ba52;
extern unsigned int g_40ba7c;
extern unsigned int g_40bcd0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40ba52, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40ba7c, 0x5));
    dcgettext(0x0, &g_40bcd0, 0x5);
}
