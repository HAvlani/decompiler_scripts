extern unsigned int g_419879;
extern unsigned int g_4198a3;
extern unsigned int g_419af8;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_419879, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_4198a3, 0x5));
    dcgettext(0x0, &g_419af8, 0x5);
}
