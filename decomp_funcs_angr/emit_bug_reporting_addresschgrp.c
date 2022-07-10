extern unsigned int g_40d762;
extern unsigned int g_40d78c;
extern unsigned int g_40d9e0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40d762, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40d78c, 0x5));
    dcgettext(0x0, &g_40d9e0, 0x5);
}
