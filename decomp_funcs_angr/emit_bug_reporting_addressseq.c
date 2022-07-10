extern unsigned int g_40b0a2;
extern unsigned int g_40b0cc;
extern unsigned int g_40b320;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40b0a2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40b0cc, 0x5));
    dcgettext(0x0, &g_40b320, 0x5);
}
