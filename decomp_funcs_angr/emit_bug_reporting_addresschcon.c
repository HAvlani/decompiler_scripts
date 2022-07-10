extern unsigned int g_40c682;
extern unsigned int g_40c6ac;
extern unsigned int g_40c900;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40c682, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40c6ac, 0x5));
    dcgettext(0x0, &g_40c900, 0x5);
}
