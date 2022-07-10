extern unsigned int g_40ee02;
extern unsigned int g_40ee2c;
extern unsigned int g_40f080;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40ee02, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40ee2c, 0x5));
    dcgettext(0x0, &g_40f080, 0x5);
}
