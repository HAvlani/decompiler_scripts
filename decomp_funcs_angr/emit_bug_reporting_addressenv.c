extern unsigned int g_409672;
extern unsigned int g_40969c;
extern unsigned int g_4098f0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_409672, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40969c, 0x5));
    dcgettext(0x0, &g_4098f0, 0x5);
}
