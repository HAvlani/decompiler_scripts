extern unsigned int g_41b86c;
extern unsigned int g_41b896;
extern unsigned int g_41bae8;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_41b86c, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_41b896, 0x5));
    dcgettext(0x0, &g_41bae8, 0x5);
}
