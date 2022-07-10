extern unsigned int g_418379;
extern unsigned int g_41838d;
extern unsigned int g_4185e0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_418379, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_41838d, 0x5));
    dcgettext(0x0, &g_4185e0, 0x5);
}
