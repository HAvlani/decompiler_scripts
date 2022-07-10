extern unsigned int g_40e042;
extern unsigned int g_40e06c;
extern unsigned int g_40e2c0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40e042, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40e06c, 0x5));
    dcgettext(0x0, &g_40e2c0, 0x5);
}
