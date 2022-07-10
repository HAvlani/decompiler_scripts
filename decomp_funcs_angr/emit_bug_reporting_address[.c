extern unsigned int g_40b862;
extern unsigned int g_40b88c;
extern unsigned int g_40bae0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40b862, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40b88c, 0x5));
    dcgettext(0x0, &g_40bae0, 0x5);
}
