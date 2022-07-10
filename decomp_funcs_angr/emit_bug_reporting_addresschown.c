extern unsigned int g_40da45;
extern unsigned int g_40da6f;
extern unsigned int g_40dcc0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_40da45, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40da6f, 0x5));
    dcgettext(0x0, &g_40dcc0, 0x5);
}
